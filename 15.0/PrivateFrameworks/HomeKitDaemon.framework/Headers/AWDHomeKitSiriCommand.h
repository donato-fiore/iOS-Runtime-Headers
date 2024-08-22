// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITSIRICOMMAND_H
#define AWDHOMEKITSIRICOMMAND_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitSiriCommand : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int actionType; // ivar: _actionType
@property (retain, nonatomic) NSString *clientMetricIdentifier; // ivar: _clientMetricIdentifier
@property (nonatomic) unsigned int currentConfigurationVersion; // ivar: _currentConfigurationVersion
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasClientMetricIdentifier;
@property (nonatomic) BOOL hasCurrentConfigurationVersion;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasLastSyncedConfigurationVersion;
@property (nonatomic) BOOL hasNumEntities;
@property (nonatomic) BOOL hasNumFailures;
@property (nonatomic) BOOL hasNumIncompleteOperations;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) BOOL hasServerConfigurationVersion;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int lastSyncedConfigurationVersion; // ivar: _lastSyncedConfigurationVersion
@property (nonatomic) unsigned int numEntities; // ivar: _numEntities
@property (nonatomic) unsigned int numFailures; // ivar: _numFailures
@property (nonatomic) unsigned int numIncompleteOperations; // ivar: _numIncompleteOperations
@property (nonatomic) int outcome; // ivar: _outcome
@property (nonatomic) unsigned int serverConfigurationVersion; // ivar: _serverConfigurationVersion
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outcomeAsString:(int)arg0 ;
-(int)StringAsActionType:(id)arg0 ;
-(int)StringAsOutcome:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif