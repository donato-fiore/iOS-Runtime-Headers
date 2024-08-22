// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATTSSPEECHSYNTHESISSTREAMING_H
#define SATTSSPEECHSYNTHESISSTREAMING_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SATTSSpeechSynthesisStreaming : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *streamId;


+(id)speechSynthesisStreaming;
+(id)speechSynthesisStreamingWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif