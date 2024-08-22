// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTEFFECTFILTER_H
#define PTEFFECTFILTER_H

@protocol MTLTexture;

#import <Foundation/Foundation.h>

#import "PTOpticalFlow.h"
#import "PTDisparityFilterExponentialMovingAverageLKTMotion.h"
#import "PTNormalEstimation.h"

@interface PTEffectFilter : NSObject {
    float _updateCoefficientDisparity;
    float _updateCoefficientNormal;
    id<MTLTexture> *_filteredDisparity;
    PTOpticalFlow *_disparityOpticalFlow;
    int _frameIndex;
    id<MTLTexture>" _temporalDisparity;
    id<MTLTexture>" _temporalNormal;
    id<MTLTexture> *_normal;
    PTDisparityFilterExponentialMovingAverageLKTMotion *_disparityFilter;
    PTNormalEstimation *_normalEstimation;
}




-(id)debugTexture;
-(id)filteredDisparity;
-(id)filteredNormal;
-(id)initDisparityFilterWithDevice:(id)arg0 disparitySize:(struct ? )arg1 updateCoefficientDisparity:(float)arg2 ;
-(id)initDisparityNormalFilterWithDevice:(id)arg0 disparitySize:(struct ? )arg1 updateCoefficientDisparity:(float)arg2 updateCoefficientNormal:(float)arg3 ;
-(id)normal;
-(unsigned int)applyFilter:(id)arg0 disparity:(id)arg1 ;
-(unsigned int)prepareFilter:(id)arg0 rgbaPyramid:(id)arg1 network:(id)arg2 ;
-(unsigned int)reset;


@end


#endif