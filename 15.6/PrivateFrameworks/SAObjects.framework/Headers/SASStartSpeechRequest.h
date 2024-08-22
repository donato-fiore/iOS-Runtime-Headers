// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSTARTSPEECHREQUEST_H
#define SASSTARTSPEECHREQUEST_H

@class NSArray, NSString, NSNumber;


#import "SASStartSpeech.h"

@interface SASStartSpeechRequest : SASStartSpeech

@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSString *clientModelVersion;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) BOOL eyesFree;
@property (nonatomic) BOOL handsFree;
@property (nonatomic) BOOL talkOnly;
@property (nonatomic) BOOL textToSpeechIsMuted;
@property (copy, nonatomic) NSArray *voiceTriggerPhrases;
@property (nonatomic) BOOL wasLaunchedForRequest;


+(id)startSpeechRequest;
+(id)startSpeechRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif