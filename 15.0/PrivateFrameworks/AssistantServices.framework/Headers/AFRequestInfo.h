// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFREQUESTINFO_H
#define AFREQUESTINFO_H

@class NSNumber, NSString, NSDictionary, NSData, SAStartLocalRequest, SAStartRequest, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AFRequestCompletionOptions.h"
#import "AFSpeechRequestOptions.h"
#import "AFTestRequestOptions.h"

@interface AFRequestInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger activationEvent; // ivar: _activationEvent
@property (copy, nonatomic) NSNumber *combinedRank; // ivar: _combinedRank
@property (copy, nonatomic) NSNumber *combinedScore; // ivar: _combinedScore
@property (copy, nonatomic) NSString *correctedSpeech; // ivar: _correctedSpeech
@property (copy, nonatomic) NSDictionary *correctedSpeechContext; // ivar: _correctedSpeechContext
@property (copy, nonatomic) NSString *directActionAppId; // ivar: _directActionAppId
@property (nonatomic) NSInteger directActionEvent; // ivar: _directActionEvent
@property (nonatomic) NSUInteger expectedSpeakerConfidenceScore; // ivar: _expectedSpeakerConfidenceScore
@property (copy, nonatomic) NSString *expectedSpeakerSharedUserID; // ivar: _expectedSpeakerSharedUserID
@property (copy, nonatomic) NSString *handoffNotification; // ivar: _handoffNotification
@property (copy, nonatomic) NSString *handoffOriginDeviceName; // ivar: _handoffOriginDeviceName
@property (copy, nonatomic) NSData *handoffRequestData; // ivar: _handoffRequestData
@property (nonatomic) BOOL handoffRequiresUserInteraction; // ivar: _handoffRequiresUserInteraction
@property (copy, nonatomic) NSString *handoffURLString; // ivar: _handoffURLString
@property (copy, nonatomic) NSString *interactionId; // ivar: _interactionId
@property (copy, nonatomic) NSString *legacyDirectActionIdentifier; // ivar: _legacyDirectActionIdentifier
@property (copy, nonatomic) NSDictionary *nonspeakerConfidenceScores; // ivar: _nonspeakerConfidenceScores
@property (copy, nonatomic) NSNumber *notifyState; // ivar: _notifyState
@property (copy, nonatomic) NSNumber *onDeviceUtterancesPresent; // ivar: _onDeviceUtterancesPresent
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSNumber *originalRank; // ivar: _originalRank
@property (copy, nonatomic) NSNumber *originalScore; // ivar: _originalScore
@property (copy, nonatomic) NSString *previousUtterance; // ivar: _previousUtterance
@property (copy, nonatomic) AFRequestCompletionOptions *requestCompletionOptions; // ivar: _requestCompletionOptions
@property (copy, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // ivar: _speechRequestOptions
@property (copy, nonatomic) SAStartLocalRequest *startLocalRequest; // ivar: _startLocalRequest
@property (copy, nonatomic) SAStartRequest *startRequest; // ivar: _startRequest
@property (copy, nonatomic) AFTestRequestOptions *testRequestOptions; // ivar: _testRequestOptions
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSUUID *turnIdentifier; // ivar: _turnIdentifier
@property (copy, nonatomic) NSString *utteranceSource; // ivar: _utteranceSource
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)testRequestWithStartLocalRequest:(id)arg0 ;
+(id)testRequestWithText:(id)arg0 speechRequestOptions:(id)arg1 testOptions:(id)arg2 ;
-(BOOL)isSpeechRequest;
-(BOOL)requiresUserInteraction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif