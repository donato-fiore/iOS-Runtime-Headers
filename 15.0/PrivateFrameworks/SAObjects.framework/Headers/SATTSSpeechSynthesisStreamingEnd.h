// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATTSSPEECHSYNTHESISSTREAMINGEND_H
#define SATTSSPEECHSYNTHESISSTREAMINGEND_H

@class NSString;


#import "SATTSSpeechSynthesisStreaming.h"

@interface SATTSSpeechSynthesisStreamingEnd : SATTSSpeechSynthesisStreaming

@property (nonatomic) NSInteger count;
@property (nonatomic) NSInteger errorCode;
@property (copy, nonatomic) NSString *errorMessage;


+(id)speechSynthesisStreamingEnd;
+(id)speechSynthesisStreamingEndWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif