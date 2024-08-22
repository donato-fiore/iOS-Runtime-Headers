// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNAUDIOOFFSETESTIMATOR_H
#define SNAUDIOOFFSETESTIMATOR_H

@class NSString;
@protocol SNAnalyzing;

#import <Foundation/Foundation.h>


@interface SNAudioOffsetEstimator : NSObject <SNAnalyzing>

 {
    shared_ptr<DSPGraph::Graph> _graph;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumObservableOffset; // ivar: _maximumObservableOffset
@property (nonatomic) CGFloat minimumObservableOffset; // ivar: _minimumObservableOffset
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;


-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;
-(void)updateMinMaxDelayWithSampleRate:(float)arg0 micDelay:(float)arg1 refDelay:(float)arg2 eclen:(float)arg3 ;


@end


#endif