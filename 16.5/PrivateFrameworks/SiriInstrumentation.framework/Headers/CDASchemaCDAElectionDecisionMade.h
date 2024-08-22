// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDASCHEMACDAELECTIONDECISIONMADE_H
#define CDASCHEMACDAELECTIONDECISIONMADE_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "CDASchemaCDAScoreBoosters.h"
#import "CDASchemaCDAParticipant.h"

@interface CDASchemaCDAElectionDecisionMade : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int decision; // ivar: _decision
@property (retain, nonatomic) CDASchemaCDAScoreBoosters *goodnessScoreBoosts; // ivar: _goodnessScoreBoosts
@property (nonatomic) BOOL hasDecision;
@property (nonatomic) BOOL hasGoodnessScoreBoosts; // ivar: _hasGoodnessScoreBoosts
@property (nonatomic) BOOL hasPreviousDecision;
@property (nonatomic) BOOL hasRawGoodnessScore;
@property (nonatomic) BOOL hasThisDevice; // ivar: _hasThisDevice
@property (nonatomic) BOOL hasTimeSinceLastDecisionInMs;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL hasWinningDevice; // ivar: _hasWinningDevice
@property (copy, nonatomic) NSArray *heardParticipants; // ivar: _heardParticipants
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int previousDecision; // ivar: _previousDecision
@property (nonatomic) unsigned int rawGoodnessScore; // ivar: _rawGoodnessScore
@property (retain, nonatomic) CDASchemaCDAParticipant *thisDevice; // ivar: _thisDevice
@property (nonatomic) NSUInteger timeSinceLastDecisionInMs; // ivar: _timeSinceLastDecisionInMs
@property (nonatomic) float version; // ivar: _version
@property (retain, nonatomic) CDASchemaCDAParticipant *winningDevice; // ivar: _winningDevice


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)heardParticipantsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addHeardParticipants:(id)arg0 ;
-(void)clearHeardParticipants;
-(void)deleteDecision;
-(void)deleteGoodnessScoreBoosts;
-(void)deleteHeardParticipants;
-(void)deletePreviousDecision;
-(void)deleteRawGoodnessScore;
-(void)deleteThisDevice;
-(void)deleteTimeSinceLastDecisionInMs;
-(void)deleteVersion;
-(void)deleteWinningDevice;
-(void)writeTo:(id)arg0 ;


@end


#endif