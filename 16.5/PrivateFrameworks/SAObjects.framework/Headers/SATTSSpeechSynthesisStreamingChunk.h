// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATTSSPEECHSYNTHESISSTREAMINGCHUNK_H
#define SATTSSPEECHSYNTHESISSTREAMINGCHUNK_H

@class NSData;


#import "SATTSSpeechSynthesisStreaming.h"
#import "SATTSSpeechSynthesisAudioInfo.h"

@interface SATTSSpeechSynthesisStreamingChunk : SATTSSpeechSynthesisStreaming

@property (copy, nonatomic) NSData *audioData;
@property (retain, nonatomic) SATTSSpeechSynthesisAudioInfo *audioInfo;
@property (nonatomic) NSInteger index;


+(id)speechSynthesisStreamingChunk;
+(id)speechSynthesisStreamingChunkWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif