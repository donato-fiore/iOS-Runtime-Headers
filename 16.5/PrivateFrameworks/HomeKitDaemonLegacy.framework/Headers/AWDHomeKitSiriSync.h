// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITSIRISYNC_H
#define AWDHOMEKITSIRISYNC_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDHomeKitSiriSync : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int currentConfigurationVersion; // ivar: _currentConfigurationVersion
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasCurrentConfigurationVersion;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasLastSyncedConfigurationVersion;
@property (nonatomic) BOOL hasServerConfigurationVersion;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int lastSyncedConfigurationVersion; // ivar: _lastSyncedConfigurationVersion
@property (retain, nonatomic) NSMutableArray *reasons; // ivar: _reasons
@property (nonatomic) unsigned int serverConfigurationVersion; // ivar: _serverConfigurationVersion
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reasonsAtIndex:(NSUInteger)arg0 ;
-(void)addReasons:(id)arg0 ;
-(void)clearReasons;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif