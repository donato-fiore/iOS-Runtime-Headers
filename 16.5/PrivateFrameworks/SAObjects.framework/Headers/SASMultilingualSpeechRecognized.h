// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASMULTILINGUALSPEECHRECOGNIZED_H
#define SASMULTILINGUALSPEECHRECOGNIZED_H

@class NSDictionary;


#import "SABaseClientBoundCommand.h"

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic) BOOL multilingualDisabled;
@property (copy, nonatomic) NSDictionary *speechRecognizedByLanguage;


+(id)multilingualSpeechRecognized;
+(id)multilingualSpeechRecognizedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif