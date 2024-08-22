// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNSOUNDPRINTKEXTRACTOR_H
#define SNSOUNDPRINTKEXTRACTOR_H

@class NSString;
@protocol SNFeaturePrintExtractorProtocol;


#import "SNSoundPrintExtractorBase.h"

@interface SNSoundPrintKExtractor : SNSoundPrintExtractorBase <SNFeaturePrintExtractorProtocol>



@property (readonly, nonatomic) unsigned int blockSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;


+(id)createWithSampleRate:(CGFloat)arg0 windowDuration:(struct ? )arg1 overlapFactor:(float)arg2 error:(*id)arg3 ;
-(id)initWithSampleRate:(CGFloat)arg0 windowDuration:(struct ? )arg1 overlapFactor:(float)arg2 error:(*id)arg3 ;


@end


#endif