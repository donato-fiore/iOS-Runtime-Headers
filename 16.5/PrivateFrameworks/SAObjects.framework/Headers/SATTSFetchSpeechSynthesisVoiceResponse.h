// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATTSFETCHSPEECHSYNTHESISVOICERESPONSE_H
#define SATTSFETCHSPEECHSYNTHESISVOICERESPONSE_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SATTSFetchSpeechSynthesisVoiceResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *voiceKeyList;


+(id)fetchSpeechSynthesisVoiceResponse;
+(id)fetchSpeechSynthesisVoiceResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif