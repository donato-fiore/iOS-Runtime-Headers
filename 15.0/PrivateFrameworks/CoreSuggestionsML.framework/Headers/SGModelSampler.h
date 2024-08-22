// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMODELSAMPLER_H
#define SGMODELSAMPLER_H

@class _PASRng;

#import <Foundation/Foundation.h>


@interface SGModelSampler : NSObject {
    CGFloat _positiveRate;
    CGFloat _dynamicLabelRate;
    CGFloat _negativeRate;
    _PASRng *_rng;
}




-(BOOL)shouldSampleForLabel:(id)arg0 isDynamicLabel:(BOOL)arg1 ;
-(id)initWithPositiveRate:(CGFloat)arg0 dynamicLabelRate:(CGFloat)arg1 negativeRate:(CGFloat)arg2 rng:(id)arg3 ;


@end


#endif