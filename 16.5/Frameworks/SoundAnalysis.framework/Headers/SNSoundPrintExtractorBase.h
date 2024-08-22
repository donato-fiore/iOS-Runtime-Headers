// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNSOUNDPRINTEXTRACTORBASE_H
#define SNSOUNDPRINTEXTRACTORBASE_H


#import <Foundation/Foundation.h>


@interface SNSoundPrintExtractorBase : NSObject

@property (readonly, nonatomic) unsigned int blockSize; // ivar: _blockSize
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph; // ivar: _graph
@property (readonly, nonatomic) *void resultsBox;


+(id)windowDurationConstraint;
+(struct ? )defaultWindowDuration;
+(unsigned int)sampleRate;
-(id)initWithSoundPrintModel:(id)arg0 sampleRate:(CGFloat)arg1 windowDuration:(struct ? )arg2 overlapFactor:(float)arg3 error:(*id)arg4 ;


@end


#endif