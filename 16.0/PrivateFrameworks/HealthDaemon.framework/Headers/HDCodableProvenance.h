// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEPROVENANCE_H
#define HDCODABLEPROVENANCE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface HDCodableProvenance : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *contributorUUID; // ivar: _contributorUUID
@property (retain, nonatomic) NSData *deviceUUID; // ivar: _deviceUUID
@property (readonly, nonatomic) BOOL hasContributorUUID;
@property (readonly, nonatomic) BOOL hasDeviceUUID;
@property (readonly, nonatomic) BOOL hasOriginBuild;
@property (nonatomic) BOOL hasOriginMajorVersion;
@property (nonatomic) BOOL hasOriginMinorVersion;
@property (nonatomic) BOOL hasOriginPatchVersion;
@property (readonly, nonatomic) BOOL hasOriginProductType;
@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (readonly, nonatomic) BOOL hasSourceVersion;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (retain, nonatomic) NSString *originBuild; // ivar: _originBuild
@property (nonatomic) int originMajorVersion; // ivar: _originMajorVersion
@property (nonatomic) int originMinorVersion; // ivar: _originMinorVersion
@property (nonatomic) int originPatchVersion; // ivar: _originPatchVersion
@property (retain, nonatomic) NSString *originProductType; // ivar: _originProductType
@property (retain, nonatomic) NSData *sourceUUID; // ivar: _sourceUUID
@property (retain, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion
@property (retain, nonatomic) NSString *timeZoneName; // ivar: _timeZoneName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedDeviceUUID;
-(id)decodedSourceUUID;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif