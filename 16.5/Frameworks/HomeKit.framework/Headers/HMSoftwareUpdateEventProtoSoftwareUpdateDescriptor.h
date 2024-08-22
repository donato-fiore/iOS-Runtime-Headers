// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSOFTWAREUPDATEEVENTPROTOSOFTWAREUPDATEDESCRIPTOR_H
#define HMSOFTWAREUPDATEEVENTPROTOSOFTWAREUPDATEDESCRIPTOR_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (nonatomic) NSInteger downloadSize; // ivar: _downloadSize
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (nonatomic) BOOL hasDownloadSize;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasHumanReadableUpdateName;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) BOOL hasRampEnabled;
@property (readonly, nonatomic) BOOL hasServerAssetAlgorithm;
@property (readonly, nonatomic) BOOL hasServerAssetMeasurement;
@property (readonly, nonatomic) BOOL hasServerAssetURL;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasUpdateVersion;
@property (retain, nonatomic) NSString *humanReadableUpdateName; // ivar: _humanReadableUpdateName
@property (nonatomic) NSInteger majorVersion; // ivar: _majorVersion
@property (nonatomic) NSInteger minorVersion; // ivar: _minorVersion
@property (nonatomic) BOOL rampEnabled; // ivar: _rampEnabled
@property (retain, nonatomic) NSString *serverAssetAlgorithm; // ivar: _serverAssetAlgorithm
@property (retain, nonatomic) NSData *serverAssetMeasurement; // ivar: _serverAssetMeasurement
@property (retain, nonatomic) NSString *serverAssetURL; // ivar: _serverAssetURL
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) NSInteger updateVersion; // ivar: _updateVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif