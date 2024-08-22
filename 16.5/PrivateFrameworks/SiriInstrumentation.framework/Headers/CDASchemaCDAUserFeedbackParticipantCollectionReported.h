// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDASCHEMACDAUSERFEEDBACKPARTICIPANTCOLLECTIONREPORTED_H
#define CDASCHEMACDAUSERFEEDBACKPARTICIPANTCOLLECTIONREPORTED_H

@class NSData, NSString, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface CDASchemaCDAUserFeedbackParticipantCollectionReported : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSurveyId; // ivar: _hasSurveyId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *surveyId; // ivar: _surveyId
@property (copy, nonatomic) NSArray *userFeedbackParticipants; // ivar: _userFeedbackParticipants


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)userFeedbackParticipantCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)userFeedbackParticipantAtIndex:(NSUInteger)arg0 ;
-(void)addUserFeedbackParticipant:(id)arg0 ;
-(void)clearUserFeedbackParticipant;
-(void)deleteSurveyId;
-(void)deleteUserFeedbackParticipant;
-(void)writeTo:(id)arg0 ;


@end


#endif