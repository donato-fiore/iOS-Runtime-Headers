// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTEFFECTDISPARITYFILTERLKT_H
#define PTEFFECTDISPARITYFILTERLKT_H

@protocol MTLCommandQueue, MTLTexture;


#import "PTEffectDisparityFilter.h"
#import "PTOpticalFlow.h"
#import "PTEffectUtil.h"
#import "PTMTLDropHints.h"
#import "PTDisparityFilterExponentialMovingAverageLKTMotion.h"

@interface PTEffectDisparityFilterLKT : PTEffectDisparityFilter {
    id<MTLCommandQueue> *_commandQueue;
    PTOpticalFlow *_disparityOpticalFlow;
    PTEffectUtil *_effectUtil;
    int _frameIndex;
    PTMTLDropHints *_temporalDisparityTempDropHints;
    id<MTLTexture> *_temporalDisparityTemp;
    PTDisparityFilterExponentialMovingAverageLKTMotion *_disparityFilter;
}




-(id)debugTexture;
-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 disparityWidth:(NSUInteger)arg2 disparityHeight:(NSUInteger)arg3 effectUtil:(id)arg4 ;
-(unsigned int)applyFilter:(id)arg0 inOutFilteredDisparity:(id)arg1 updateCoefficient:(float)arg2 ;
-(unsigned int)prepareFilter:(id)arg0 network:(id)arg1 ;
-(unsigned int)reset;


@end


#endif