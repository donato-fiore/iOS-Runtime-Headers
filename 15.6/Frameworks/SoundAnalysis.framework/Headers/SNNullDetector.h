// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNNULLDETECTOR_H
#define SNNULLDETECTOR_H

@class NSString;
@protocol SNAnalyzing;

#import <Foundation/Foundation.h>


@interface SNNullDetector : NSObject <SNAnalyzing>

 {
    shared_ptr<DSPGraph::Graph> _graph;
}


@property (nonatomic) unsigned int blockSize; // ivar: _blockSize
@property (nonatomic) CGFloat computationalDutyCycle; // ivar: _computationalDutyCycle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (nonatomic) BOOL graphIsDeadEnded; // ivar: _graphIsDeadEnded
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void resultsBox;
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (nonatomic) BOOL shouldThrowException; // ivar: _shouldThrowException
@property (readonly) Class superclass;


-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithSampleRate:(CGFloat)arg0 blockSize:(unsigned int)arg1 computationalDutyCycle:(CGFloat)arg2 graphIsDeadEnded:(BOOL)arg3 shouldThrowException:(BOOL)arg4 ;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;


@end


#endif