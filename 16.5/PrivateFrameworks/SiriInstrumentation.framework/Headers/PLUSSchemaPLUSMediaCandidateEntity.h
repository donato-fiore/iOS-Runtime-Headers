// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSMEDIACANDIDATEENTITY_H
#define PLUSSCHEMAPLUSMEDIACANDIDATEENTITY_H

@class NSString, NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSMediaCandidateEntity : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (copy, nonatomic) NSString *entityAdamId; // ivar: _entityAdamId
@property (copy, nonatomic) NSArray *entityFeedbackHistorys; // ivar: _entityFeedbackHistorys
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasEntityAdamId; // ivar: _hasEntityAdamId
@property (nonatomic) BOOL hasNominated;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL nominated; // ivar: _nominated


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)entityFeedbackHistoryCount;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityFeedbackHistoryAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addEntityFeedbackHistory:(id)arg0 ;
-(void)clearEntityFeedbackHistory;
-(void)deleteConfidence;
-(void)deleteEntityAdamId;
-(void)deleteEntityFeedbackHistory;
-(void)deleteNominated;
-(void)writeTo:(id)arg0 ;


@end


#endif