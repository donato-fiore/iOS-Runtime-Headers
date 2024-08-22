// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNLOGMELSPECTROGRAMEXTRACTOR_H
#define SNLOGMELSPECTROGRAMEXTRACTOR_H

@class NSString;
@protocol SNFeaturePrintExtractorProtocol;

#import <Foundation/Foundation.h>


@interface SNLogMelSpectrogramExtractor : NSObject <SNFeaturePrintExtractorProtocol>



@property (readonly, nonatomic) unsigned int blockSize; // ivar: _blockSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph; // ivar: _graph
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;


+(id)createWithSampleRate:(CGFloat)arg0 windowDuration:(struct ? )arg1 overlapFactor:(float)arg2 error:(*id)arg3 ;
+(id)windowDurationConstraint;
+(struct ? )defaultWindowDuration;
+(unsigned int)sampleRate;
-(id)initWithOverlapFactor:(float)arg0 error:(*id)arg1 ;


@end


#endif