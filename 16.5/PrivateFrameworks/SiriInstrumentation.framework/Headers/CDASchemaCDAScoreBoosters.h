// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDASCHEMACDASCOREBOOSTERS_H
#define CDASCHEMACDASCOREBOOSTERS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CDASchemaCDAScoreBoosters : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int deviceBoost; // ivar: _deviceBoost
@property (nonatomic) BOOL hasDeviceBoost;
@property (nonatomic) BOOL hasIsTrump;
@property (nonatomic) BOOL hasRecentAlarmBoost;
@property (nonatomic) BOOL hasRecentMotionBoost;
@property (nonatomic) BOOL hasRecentPlaybackBoost;
@property (nonatomic) BOOL hasRecentRaiseToWakeBoost;
@property (nonatomic) BOOL hasRecentSiriRequestBoost;
@property (nonatomic) BOOL hasRecentUnlockBoost;
@property (nonatomic) BOOL hasTrumpReason;
@property (nonatomic) BOOL isTrump; // ivar: _isTrump
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int recentAlarmBoost; // ivar: _recentAlarmBoost
@property (nonatomic) unsigned int recentMotionBoost; // ivar: _recentMotionBoost
@property (nonatomic) unsigned int recentPlaybackBoost; // ivar: _recentPlaybackBoost
@property (nonatomic) unsigned int recentRaiseToWakeBoost; // ivar: _recentRaiseToWakeBoost
@property (nonatomic) unsigned int recentSiriRequestBoost; // ivar: _recentSiriRequestBoost
@property (nonatomic) unsigned int recentUnlockBoost; // ivar: _recentUnlockBoost
@property (nonatomic) int trumpReason; // ivar: _trumpReason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDeviceBoost;
-(void)deleteIsTrump;
-(void)deleteRecentAlarmBoost;
-(void)deleteRecentMotionBoost;
-(void)deleteRecentPlaybackBoost;
-(void)deleteRecentRaiseToWakeBoost;
-(void)deleteRecentSiriRequestBoost;
-(void)deleteRecentUnlockBoost;
-(void)deleteTrumpReason;
-(void)writeTo:(id)arg0 ;


@end


#endif