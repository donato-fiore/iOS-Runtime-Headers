// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIAUTOLOOPKERNELS_H
#define PIAUTOLOOPKERNELS_H


#import <Foundation/Foundation.h>


@interface PIAutoLoopKernels : NSObject



+(id)alphaCompositingKernel;
+(id)blur3x3Kernel;
+(id)blur5x5Kernel;
+(id)blur7x7Kernel;
+(id)dynamismMapKernel;
+(id)dynamismMapRefineKernel;
+(id)fusionKernel;
+(id)homographyKernel;
+(id)longExposureFusionKernels;
+(id)nccCoarseKernel;
+(id)nccKernel;
+(id)rgbToLumaKernel;


@end


#endif