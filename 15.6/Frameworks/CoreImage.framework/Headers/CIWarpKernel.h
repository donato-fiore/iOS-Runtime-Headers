// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIWARPKERNEL_H
#define CIWARPKERNEL_H



#import "CIKernel.h"

@interface CIWarpKernel : CIKernel

@property (nonatomic) BOOL perservesAlpha;
@property (nonatomic) BOOL preservesRange;


+(id)kernelWithString:(id)arg0 ;
-(BOOL)canReduceOutputChannels;
-(id)_initWithReflection:(struct CIKernelReflection )arg0 constants:(id)arg1 constantTypes:(id)arg2 ;
// -(id)applyWithExtent:(struct CGRect )arg0 roiCallback:(id)arg1 arguments:(unk)arg2  ;
// -(id)applyWithExtent:(struct CGRect )arg0 roiCallback:(id)arg1 arguments:(unk)arg2 options:(id)arg3  ;
// -(id)applyWithExtent:(struct CGRect )arg0 roiCallback:(id)arg1 inputImage:(unk)arg2 arguments:(id)arg3  ;
// -(id)applyWithExtent:(struct CGRect )arg0 roiCallback:(id)arg1 inputImage:(unk)arg2 arguments:(id)arg3 options:(id)arg4  ;
-(id)generateGeneralKernelFromWarpKernel:(*void)arg0 args:(struct SerialObjectPtrArray *)arg1 ;
-(id)generateMainFromWarpKernel:(*void)arg0 args:(struct SerialObjectPtrArray *)arg1 ;
-(id)initWithString:(id)arg0 ;
-(id)makeGridImage:(struct CGRect )arg0 nx:(int)arg1 ny:(int)arg2 ;
-(struct CGRect )autogenerateROI:(*void)arg0 args:(struct SerialObjectPtrArray *)arg1 arguments:(id)arg2 extent:(struct CGRect )arg3 ;
-(void)setCanReduceOutputChannels:(BOOL)arg0 ;


@end


#endif