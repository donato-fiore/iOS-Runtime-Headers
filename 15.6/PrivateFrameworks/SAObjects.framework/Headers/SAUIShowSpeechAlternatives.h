// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUISHOWSPEECHALTERNATIVES_H
#define SAUISHOWSPEECHALTERNATIVES_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SASRecognition.h"

@interface SAUIShowSpeechAlternatives : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *title;


+(id)showSpeechAlternatives;
+(id)showSpeechAlternativesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif