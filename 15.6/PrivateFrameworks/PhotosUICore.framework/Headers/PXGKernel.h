// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGKERNEL_H
#define PXGKERNEL_H


#import <Foundation/Foundation.h>


@interface PXGKernel : NSObject



+(id)pipelineStateForFunctionWithName:(id)arg0 constants:(id)arg1 key:(id)arg2 device:(id)arg3 ;
+(struct ? )gridSizeForThreadGroupSize:(struct ? )arg0 imageSize:(struct ? )arg1 ;
+(struct ? )groupSizeForImageSize:(struct ? )arg0 pipelineState:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 targetScale:(CGFloat)arg3 ;
-(void)preloadWithDevice:(id)arg0 ;


@end


#endif