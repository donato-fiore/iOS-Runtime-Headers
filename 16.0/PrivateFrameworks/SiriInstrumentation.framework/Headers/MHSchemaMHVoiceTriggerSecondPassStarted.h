// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHVOICETRIGGERSECONDPASSSTARTED_H
#define MHSCHEMAMHVOICETRIGGERSECONDPASSSTARTED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHVoiceTriggerSecondPassStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *channelSelectionScores; // ivar: _channelSelectionScores
@property (nonatomic) float earlyDetectFiredTime; // ivar: _earlyDetectFiredTime
@property (nonatomic) NSUInteger earlyDetectFiredTimeOffsetInNs; // ivar: _earlyDetectFiredTimeOffsetInNs
@property (nonatomic) NSUInteger firstPassChannelSelectionDelayNs; // ivar: _firstPassChannelSelectionDelayNs
@property (nonatomic) unsigned int firstPassDetectedChannel; // ivar: _firstPassDetectedChannel
@property (nonatomic) NSUInteger firstPassEndSampleCount; // ivar: _firstPassEndSampleCount
@property (nonatomic) NSUInteger firstPassFireSampleCount; // ivar: _firstPassFireSampleCount
@property (nonatomic) NSUInteger firstPassInfoDispatchTimeInNs; // ivar: _firstPassInfoDispatchTimeInNs
@property (nonatomic) NSUInteger firstPassInfoReceptionTimeInNs; // ivar: _firstPassInfoReceptionTimeInNs
@property (nonatomic) float firstPassMasterChannelScoreBoost; // ivar: _firstPassMasterChannelScoreBoost
@property (nonatomic) unsigned int firstPassOnsetChannel; // ivar: _firstPassOnsetChannel
@property (nonatomic) float firstPassOnsetScore; // ivar: _firstPassOnsetScore
@property (nonatomic) float firstPassPrimaryChannelScoreBoost; // ivar: _firstPassPrimaryChannelScoreBoost
@property (nonatomic) float firstPassScore; // ivar: _firstPassScore
@property (nonatomic) NSUInteger firstPassStartSampleCount; // ivar: _firstPassStartSampleCount
@property (nonatomic) int firstPassTriggerSource; // ivar: _firstPassTriggerSource
@property (nonatomic) BOOL hasEarlyDetectFiredTime;
@property (nonatomic) BOOL hasEarlyDetectFiredTimeOffsetInNs;
@property (nonatomic) BOOL hasFirstPassChannelSelectionDelayNs;
@property (nonatomic) BOOL hasFirstPassDetectedChannel;
@property (nonatomic) BOOL hasFirstPassEndSampleCount;
@property (nonatomic) BOOL hasFirstPassFireSampleCount;
@property (nonatomic) BOOL hasFirstPassInfoDispatchTimeInNs;
@property (nonatomic) BOOL hasFirstPassInfoReceptionTimeInNs;
@property (nonatomic) BOOL hasFirstPassMasterChannelScoreBoost;
@property (nonatomic) BOOL hasFirstPassOnsetChannel;
@property (nonatomic) BOOL hasFirstPassOnsetScore;
@property (nonatomic) BOOL hasFirstPassPrimaryChannelScoreBoost;
@property (nonatomic) BOOL hasFirstPassScore;
@property (nonatomic) BOOL hasFirstPassStartSampleCount;
@property (nonatomic) BOOL hasFirstPassTriggerSource;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)channelSelectionScoresAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addChannelSelectionScores:(id)arg0 ;
-(void)clearChannelSelectionScores;
-(void)deleteChannelSelectionScores;
-(void)deleteEarlyDetectFiredTime;
-(void)deleteEarlyDetectFiredTimeOffsetInNs;
-(void)deleteFirstPassChannelSelectionDelayNs;
-(void)deleteFirstPassDetectedChannel;
-(void)deleteFirstPassEndSampleCount;
-(void)deleteFirstPassFireSampleCount;
-(void)deleteFirstPassInfoDispatchTimeInNs;
-(void)deleteFirstPassInfoReceptionTimeInNs;
-(void)deleteFirstPassMasterChannelScoreBoost;
-(void)deleteFirstPassOnsetChannel;
-(void)deleteFirstPassOnsetScore;
-(void)deleteFirstPassPrimaryChannelScoreBoost;
-(void)deleteFirstPassScore;
-(void)deleteFirstPassStartSampleCount;
-(void)deleteFirstPassTriggerSource;
-(void)writeTo:(id)arg0 ;


@end


#endif