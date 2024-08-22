// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMTURNINPUT_H
#define NLXSCHEMACDMTURNINPUT_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMTurnContext.h"

@interface NLXSchemaCDMTurnInput : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *asrHypothesisIds; // ivar: _asrHypothesisIds
@property (nonatomic) BOOL hasIsTapToEdit;
@property (nonatomic) BOOL hasTurnContext; // ivar: _hasTurnContext
@property (nonatomic) BOOL isTapToEdit; // ivar: _isTapToEdit
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLXSchemaCDMTurnContext *turnContext; // ivar: _turnContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)asrHypothesisIdsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAsrHypothesisIds:(id)arg0 ;
-(void)clearAsrHypothesisIds;
-(void)deleteAsrHypothesisIds;
-(void)deleteIsTapToEdit;
-(void)deleteTurnContext;
-(void)writeTo:(id)arg0 ;


@end


#endif