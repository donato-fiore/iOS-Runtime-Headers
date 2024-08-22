// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLPROGRESSIVECHECKERANALYZER_H
#define SLPROGRESSIVECHECKERANALYZER_H

@class NSMutableArray, CSAudioCircularBuffer;
@protocol OS_dispatch_queue, SLProgressiveCheckerAnalyzerDelegate;

#import <Foundation/Foundation.h>

#import "SLProgressiveCheckerContext.h"

@interface SLProgressiveCheckerAnalyzer : NSObject {
    NSMutableArray *_activeRecognizers;
    SLProgressiveCheckerContext *_context;
    NSMutableArray *_checkerEndSamples;
    NSUInteger _analyzedSamplesSoFar;
    CGFloat _latestScore;
    NSObject<OS_dispatch_queue> *_queue;
    id<SLProgressiveCheckerAnalyzerDelegate> *_delegate;
    NSUInteger _checkerType;
    CSAudioCircularBuffer *_circBuffer;
    NSUInteger _numSamplesAddedToBufferSinceLastFlush;
    NSUInteger _numSamplesInStride;
}




-(id)initWithConfig:(id)arg0 withDelegate:(id)arg1 error:(*id)arg2 ;
-(void)_addAudio:(id)arg0 ;
-(void)_endAudio;
-(void)_startNewRequestWithContext:(id)arg0 ;
-(void)addAudio:(id)arg0 ;
-(void)endAudio;
-(void)startNewRequestWithContext:(id)arg0 ;


@end


#endif