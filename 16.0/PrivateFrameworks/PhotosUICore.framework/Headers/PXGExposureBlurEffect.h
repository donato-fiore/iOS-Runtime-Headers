// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGEXPOSUREBLUREFFECT_H
#define PXGEXPOSUREBLUREFFECT_H



#import "PXGOffscreenEffect.h"
#import "PXGExposureBlurKernel.h"

@interface PXGExposureBlurEffect : PXGOffscreenEffect {
    PXGExposureBlurKernel *_kernel;
}


@property (nonatomic) CGFloat exposure; // ivar: _exposure
@property (nonatomic) CGFloat radius; // ivar: _radius


-(id)initWithEntityManager:(id)arg0 ;
-(id)kernel;


@end


#endif