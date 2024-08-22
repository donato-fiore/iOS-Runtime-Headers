// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNDETECTSIGNALTHRESHOLDREQUESTIMPL_H
#define SNDETECTSIGNALTHRESHOLDREQUESTIMPL_H

@class NSString;
@protocol SNAnalyzing;

#import <Foundation/Foundation.h>


@interface SNDetectSignalThresholdRequestImpl : NSObject <SNAnalyzing>

 {
    shared_ptr<DSPGraph::Graph> _graph;
}


@property (nonatomic) unsigned int blockSize; // ivar: _blockSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat magnitudeThreshold; // ivar: _magnitudeThreshold
@property (readonly, nonatomic) *void resultsBox;
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (readonly) Class superclass;


-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithSampleRate:(CGFloat)arg0 blockSize:(unsigned int)arg1 magnitudeThreshold:(CGFloat)arg2 ;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;


@end


#endif