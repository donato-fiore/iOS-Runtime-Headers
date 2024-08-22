// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSPHONECALLMETADATAEXTRACTED_H
#define PLUSSCHEMAPLUSPHONECALLMETADATAEXTRACTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSPhoneCallMetadataExtracted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int followupNameSimilarity; // ivar: _followupNameSimilarity
@property (nonatomic) BOOL hasFollowupNameSimilarity;
@property (nonatomic) BOOL hasHasSiriInitiatedCall;
@property (nonatomic) BOOL hasHasSiriResolvedContact;
@property (nonatomic) BOOL hasHasUserMadeFollowupCallWithinDetectionWindow;
@property (nonatomic) BOOL hasHasUserMadeFollowupCallWithinEvaluationWindow;
@property (nonatomic) BOOL hasIsSameCallCapabilityForFollowup;
@property (nonatomic) BOOL hasIsSameCallRouteForSiriAndFollowup;
@property (nonatomic) BOOL hasOriginalPlusId; // ivar: _hasOriginalPlusId
@property (nonatomic) BOOL hasSiriAndFollowupContactComparison;
@property (nonatomic) BOOL hasSiriCallDuration;
@property (nonatomic) BOOL hasSiriCallTimeToHangup;
@property (nonatomic) BOOL hasSiriInitiatedCall; // ivar: _hasSiriInitiatedCall
@property (nonatomic) BOOL hasSiriResolvedContact; // ivar: _hasSiriResolvedContact
@property (nonatomic) BOOL hasUserMadeFollowupCallWithinDetectionWindow; // ivar: _hasUserMadeFollowupCallWithinDetectionWindow
@property (nonatomic) BOOL hasUserMadeFollowupCallWithinEvaluationWindow; // ivar: _hasUserMadeFollowupCallWithinEvaluationWindow
@property (nonatomic) BOOL hasUserTimeToFollowup;
@property (nonatomic) BOOL isSameCallCapabilityForFollowup; // ivar: _isSameCallCapabilityForFollowup
@property (nonatomic) BOOL isSameCallRouteForSiriAndFollowup; // ivar: _isSameCallRouteForSiriAndFollowup
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalPlusId; // ivar: _originalPlusId
@property (nonatomic) int siriAndFollowupContactComparison; // ivar: _siriAndFollowupContactComparison
@property (nonatomic) int siriCallDuration; // ivar: _siriCallDuration
@property (nonatomic) int siriCallTimeToHangup; // ivar: _siriCallTimeToHangup
@property (nonatomic) int userTimeToFollowup; // ivar: _userTimeToFollowup


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFollowupNameSimilarity;
-(void)deleteHasSiriInitiatedCall;
-(void)deleteHasSiriResolvedContact;
-(void)deleteHasUserMadeFollowupCallWithinDetectionWindow;
-(void)deleteHasUserMadeFollowupCallWithinEvaluationWindow;
-(void)deleteIsSameCallCapabilityForFollowup;
-(void)deleteIsSameCallRouteForSiriAndFollowup;
-(void)deleteOriginalPlusId;
-(void)deleteSiriAndFollowupContactComparison;
-(void)deleteSiriCallDuration;
-(void)deleteSiriCallTimeToHangup;
-(void)deleteUserTimeToFollowup;
-(void)writeTo:(id)arg0 ;


@end


#endif