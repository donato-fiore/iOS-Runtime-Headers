// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMMANAGERPROGRAMS_H
#define TDREAMMANAGERPROGRAMS_H


#import <Foundation/Foundation.h>

#import "TDreamBFBlurPassOne.h"
#import "TDreamBFBlurPassOneOpt.h"
#import "TDreamBFBlurPassTwo.h"
#import "TDreamBFBlurPassTwoOpt.h"
#import "TDreamMaskBlend.h"
#import "TDreamBlend.h"
#import "TDreamColorStroke.h"
#import "TDreamColorStrokeOpt.h"
#import "TDreamColoricer.h"
#import "TDreamDistortionFX.h"
#import "TDreamEdges.h"
#import "TDreamEdgesOpt.h"
#import "TDreamGaussBlurExpressPassTwo.h"
#import "TDreamGaussBlurExpressPassTwoOpt9.h"
#import "TDreamGaussBlurExpress.h"
#import "TDreamGaussBlurExpressOpt9.h"
#import "TDreamGrayscale.h"
#import "TDreamLookupFilter.h"
#import "TDreamLookupFilterOpt.h"
#import "TDreamOutputBuffer.h"
#import "TDreamVignetteAndQuantice.h"
#import "TDreamQuanticeOpt.h"
#import "TDreamSobel.h"
#import "TDreamSobelOpt.h"
#import "TDreamStrokeAndBlend.h"
#import "TDreamStrokeAndBlendOpt.h"
#import "TDreamStroke.h"
#import "TDreamVignette.h"
#import "TDreamZoomOutFX.h"

@interface TDreamManagerPrograms : NSObject

@property (retain) TDreamBFBlurPassOne *bfBlurPassOne; // ivar: _bfBlurPassOne
@property (retain) TDreamBFBlurPassOneOpt *bfBlurPassOneOpt; // ivar: _bfBlurPassOneOpt
@property (retain) TDreamBFBlurPassTwo *bfBlurPassTwo; // ivar: _bfBlurPassTwo
@property (retain) TDreamBFBlurPassTwoOpt *bfBlurPassTwoOpt; // ivar: _bfBlurPassTwoOpt
@property (retain) TDreamMaskBlend *blendWithMask; // ivar: _blendWithMask
@property (retain) TDreamBlend *blenderFilter; // ivar: _blenderFilter
@property (retain) TDreamColorStroke *colorStrokeFilter; // ivar: _colorStrokeFilter
@property (retain) TDreamColorStrokeOpt *colorStrokeFilterOpt; // ivar: _colorStrokeFilterOpt
@property (retain) TDreamColoricer *colorizer; // ivar: _colorizer
@property (retain) TDreamDistortionFX *distortionFx; // ivar: _distortionFx
@property (retain) TDreamEdges *edgesFilter; // ivar: _edgesFilter
@property (retain) TDreamEdgesOpt *edgesFilterOpt; // ivar: _edgesFilterOpt
@property (retain) TDreamGaussBlurExpressPassTwo *extraGaussFilter2Q; // ivar: _extraGaussFilter2Q
@property (retain) TDreamGaussBlurExpressPassTwoOpt9 *extraGaussFilter2QOpt9; // ivar: _extraGaussFilter2QOpt9
@property (retain) TDreamGaussBlurExpress *extraGaussFilterQ; // ivar: _extraGaussFilterQ
@property (retain) TDreamGaussBlurExpressOpt9 *extraGaussFilterQOpt9; // ivar: _extraGaussFilterQOpt9
@property (retain) TDreamGaussBlurExpress *gaussFilter; // ivar: _gaussFilter
@property (retain) TDreamGaussBlurExpressPassTwo *gaussFilter2; // ivar: _gaussFilter2
@property (retain) TDreamGaussBlurExpressPassTwoOpt9 *gaussFilter2Opt9; // ivar: _gaussFilter2Opt9
@property (retain) TDreamGaussBlurExpressOpt9 *gaussFilterOpt9; // ivar: _gaussFilterOpt9
@property (retain) TDreamGrayscale *grayScaletor; // ivar: _grayScaletor
@property (retain) TDreamLookupFilter *lookupFilter; // ivar: _lookupFilter
@property (retain) TDreamLookupFilterOpt *lookupFilterOpt; // ivar: _lookupFilterOpt
@property (retain) TDreamOutputBuffer *outputBuffer; // ivar: _outputBuffer
@property (retain) TDreamVignetteAndQuantice *quanticeFilter; // ivar: _quanticeFilter
@property (retain) TDreamQuanticeOpt *quanticeFilterOpt; // ivar: _quanticeFilterOpt
@property (retain) TDreamSobel *sobelFilter; // ivar: _sobelFilter
@property (retain) TDreamSobelOpt *sobelFilterOpt; // ivar: _sobelFilterOpt
@property (retain) TDreamSobel *sobelFilterQ; // ivar: _sobelFilterQ
@property (retain) TDreamSobelOpt *sobelFilterQOpt; // ivar: _sobelFilterQOpt
@property (retain) TDreamStrokeAndBlend *strokeAndBlendFilter; // ivar: _strokeAndBlendFilter
@property (retain) TDreamStrokeAndBlendOpt *strokeAndBlendFilterOpt; // ivar: _strokeAndBlendFilterOpt
@property (retain) TDreamStroke *strokeFilter; // ivar: _strokeFilter
@property (retain) TDreamVignette *vigneteFilter; // ivar: _vigneteFilter
@property (retain) TDreamZoomOutFX *zoomOutFx; // ivar: _zoomOutFx




@end


#endif