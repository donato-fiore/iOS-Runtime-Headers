// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASSTARTCORRECTEDSPEECHREQUEST_H
#define SASSTARTCORRECTEDSPEECHREQUEST_H

@class NSString;


#import "SAStartRequest.h"

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (nonatomic) NSInteger combinedRank;
@property (nonatomic) CGFloat combinedScore;
@property (copy, nonatomic) NSString *interactionId;
@property (nonatomic) BOOL onDeviceUtterancesPresent;
@property (nonatomic) NSInteger originalRank;
@property (nonatomic) CGFloat originalScore;
@property (copy, nonatomic) NSString *previousUtterance;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utteranceSource;


+(id)startCorrectedSpeechRequest;
+(id)startCorrectedSpeechRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif