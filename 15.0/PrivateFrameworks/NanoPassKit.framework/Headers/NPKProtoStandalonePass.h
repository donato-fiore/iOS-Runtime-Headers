// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSTANDALONEPASS_H
#define NPKPROTOSTANDALONEPASS_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoStandalonePass : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (readonly, nonatomic) BOOL hasImageData;
@property (readonly, nonatomic) BOOL hasLocalizedDescription;
@property (readonly, nonatomic) BOOL hasLocalizedName;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (nonatomic) BOOL hasPassType;
@property (readonly, nonatomic) BOOL hasPassTypeIdentifier;
@property (nonatomic) BOOL hasRemotePass;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (nonatomic) int passType; // ivar: _passType
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (nonatomic) BOOL remotePass; // ivar: _remotePass
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (retain, nonatomic) NSMutableArray *userInfos; // ivar: _userInfos


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)passTypeAsString:(int)arg0 ;
-(id)userInfosAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPassType:(id)arg0 ;
-(void)addUserInfos:(id)arg0 ;
-(void)clearUserInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif