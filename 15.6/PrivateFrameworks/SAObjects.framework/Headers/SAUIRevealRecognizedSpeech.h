// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIREVEALRECOGNIZEDSPEECH_H
#define SAUIREVEALRECOGNIZEDSPEECH_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SASRecognition.h"

@interface SAUIRevealRecognizedSpeech : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *speechRecognizedAceId;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif