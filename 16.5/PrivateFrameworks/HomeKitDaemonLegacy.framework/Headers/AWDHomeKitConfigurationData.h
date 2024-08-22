// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITCONFIGURATIONDATA_H
#define AWDHOMEKITCONFIGURATIONDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDHomeKitConfigurationData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int databaseSize; // ivar: _databaseSize
@property (nonatomic) BOOL hasActiveWatchDevice; // ivar: _hasActiveWatchDevice
@property (nonatomic) BOOL hasDatabaseSize;
@property (nonatomic) BOOL hasHasActiveWatchDevice;
@property (nonatomic) BOOL hasHasWatchDevice;
@property (nonatomic) BOOL hasIsDemoConfiguration;
@property (nonatomic) BOOL hasIsResidentCapable;
@property (nonatomic) BOOL hasIsResidentEnabled;
@property (nonatomic) BOOL hasMetadataVersion;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWatchDevice; // ivar: _hasWatchDevice
@property (retain, nonatomic) NSMutableArray *homeConfigurations; // ivar: _homeConfigurations
@property (nonatomic) BOOL isDemoConfiguration; // ivar: _isDemoConfiguration
@property (nonatomic) BOOL isResidentCapable; // ivar: _isResidentCapable
@property (nonatomic) BOOL isResidentEnabled; // ivar: _isResidentEnabled
@property (nonatomic) unsigned int metadataVersion; // ivar: _metadataVersion
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)homeConfigurationsAtIndex:(NSUInteger)arg0 ;
-(void)addHomeConfigurations:(id)arg0 ;
-(void)clearHomeConfigurations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif