// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSPEECHRECOGNIZED_H
#define SASSPEECHRECOGNIZED_H

@class NSNumber, NSString;


#import "SABaseClientBoundCommand.h"
#import "SASAudioAnalytics.h"
#import "SASRecognition.h"
#import "SAUIGetResponseAlternatives.h"

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (retain, nonatomic) SASAudioAnalytics *audioAnalytics;
@property (nonatomic) BOOL eager;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (retain, nonatomic) SASRecognition *recognition;
@property (retain, nonatomic) SAUIGetResponseAlternatives *responseAlternatives;
@property (copy, nonatomic) NSString *resultId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *title;


+(id)speechRecognized;
+(id)speechRecognizedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif