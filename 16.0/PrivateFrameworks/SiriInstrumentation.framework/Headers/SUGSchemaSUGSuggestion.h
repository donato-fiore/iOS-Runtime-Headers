// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUGSCHEMASUGSUGGESTION_H
#define SUGSCHEMASUGSUGGESTION_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SUGSchemaSUGSiriHelpSignal.h"

@interface SUGSchemaSUGSuggestion : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int deliveryVehicle; // ivar: _deliveryVehicle
@property (nonatomic) unsigned int finalRank; // ivar: _finalRank
@property (nonatomic) CGFloat finalScore; // ivar: _finalScore
@property (nonatomic) int goal; // ivar: _goal
@property (nonatomic) CGFloat goalSpecificScore; // ivar: _goalSpecificScore
@property (nonatomic) BOOL hasDeliveryVehicle;
@property (nonatomic) BOOL hasFinalRank;
@property (nonatomic) BOOL hasFinalScore;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) BOOL hasGoalSpecificScore;
@property (nonatomic) BOOL hasSubscribedSignal; // ivar: _hasSubscribedSignal
@property (nonatomic) BOOL hasSuggestionId; // ivar: _hasSuggestionId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SUGSchemaSUGSiriHelpSignal *subscribedSignal; // ivar: _subscribedSignal
@property (copy, nonatomic) NSString *suggestionId; // ivar: _suggestionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDeliveryVehicle;
-(void)deleteFinalRank;
-(void)deleteFinalScore;
-(void)deleteGoal;
-(void)deleteGoalSpecificScore;
-(void)deleteSubscribedSignal;
-(void)deleteSuggestionId;
-(void)writeTo:(id)arg0 ;


@end


#endif