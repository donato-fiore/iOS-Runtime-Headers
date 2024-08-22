// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCOLLABORATIVEFILTERINGSAMPLER_H
#define PPCOLLABORATIVEFILTERINGSAMPLER_H

@class _PASCFBurstTrie;

#import <Foundation/Foundation.h>


@interface PPCollaborativeFilteringSampler : NSObject {
    _PASCFBurstTrie *_samplingWeightTrie;
}




// -(BOOL)constructAndSendMessageForSamplingRate:(CGFloat)arg0 shouldContinueBlock:(id)arg1 error:(unk)arg2  ;
-(id)_weightedSampleFeedbackItems:(id)arg0 ;
-(id)init;
-(id)initWithSamplingWeightTrie:(id)arg0 ;
-(unsigned int)_probabilityForItemString:(id)arg0 clientIdentifier:(id)arg1 ;


@end


#endif