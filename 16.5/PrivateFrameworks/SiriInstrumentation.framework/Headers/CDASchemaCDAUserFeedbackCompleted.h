// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDASCHEMACDAUSERFEEDBACKCOMPLETED_H
#define CDASCHEMACDAUSERFEEDBACKCOMPLETED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface CDASchemaCDAUserFeedbackCompleted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int dataCollectionGroup; // ivar: _dataCollectionGroup
@property (retain, nonatomic) SISchemaUUID *expectedWinnerSiriSpeechId; // ivar: _expectedWinnerSiriSpeechId
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (copy, nonatomic) NSString *failureReasonCategory; // ivar: _failureReasonCategory
@property (nonatomic) BOOL hasDataCollectionGroup;
@property (nonatomic) BOOL hasExpectedWinnerSiriSpeechId; // ivar: _hasExpectedWinnerSiriSpeechId
@property (nonatomic) BOOL hasExperimentId; // ivar: _hasExperimentId
@property (nonatomic) BOOL hasFailureReasonCategory; // ivar: _hasFailureReasonCategory
@property (nonatomic) BOOL hasHasResponseFromMultipleDevices;
@property (nonatomic) BOOL hasIsCorrectDeviceSelected;
@property (nonatomic) BOOL hasResponseFromMultipleDevices; // ivar: _hasResponseFromMultipleDevices
@property (nonatomic) BOOL hasSurveyId; // ivar: _hasSurveyId
@property (nonatomic) BOOL hasUserFeedbackStatus;
@property (nonatomic) BOOL hasUserReportedResponseDeviceDistance;
@property (nonatomic) BOOL isCorrectDeviceSelected; // ivar: _isCorrectDeviceSelected
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *surveyId; // ivar: _surveyId
@property (nonatomic) int userFeedbackStatus; // ivar: _userFeedbackStatus
@property (nonatomic) CGFloat userReportedResponseDeviceDistance; // ivar: _userReportedResponseDeviceDistance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDataCollectionGroup;
-(void)deleteExpectedWinnerSiriSpeechId;
-(void)deleteExperimentId;
-(void)deleteFailureReasonCategory;
-(void)deleteHasResponseFromMultipleDevices;
-(void)deleteIsCorrectDeviceSelected;
-(void)deleteSurveyId;
-(void)deleteUserFeedbackStatus;
-(void)deleteUserReportedResponseDeviceDistance;
-(void)writeTo:(id)arg0 ;


@end


#endif