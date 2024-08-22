// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWLEARNEDMATTINGINFERENCECONFIGURATION_H
#define BWLEARNEDMATTINGINFERENCECONFIGURATION_H

@protocol MTLCommandQueue;


#import "BWTiledEspressoInferenceConfiguration.h"

@interface BWLearnedMattingInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (nonatomic) float mainImageDownscalingFactor; // ivar: _mainImageDownscalingFactor
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue


-(void)dealloc;


@end


#endif