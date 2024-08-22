// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNAUDIOCORRELATOR_H
#define SNAUDIOCORRELATOR_H

@class AVAudioFile, NSString;
@protocol SNAnalyzing;

#import <Foundation/Foundation.h>

#import "SNSystemConfiguration.h"

@interface SNAudioCorrelator : NSObject <SNAnalyzing>

 {
    SNSystemConfiguration *_systemConfiguration;
    shared_ptr<DSPGraph::Graph> _graph;
    AVAudioFile *_referenceAudioFile;
    CGFloat _referenceSampleRate;
    unsigned int _channelCount;
    unsigned int _framesProcessed;
    CGFloat _overlapFactor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;


-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;


@end


#endif