// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICOLORKERNEL_H
#define CICOLORKERNEL_H



#import "CIKernel.h"

@interface CIColorKernel : CIKernel

@property (nonatomic) BOOL perservesAlpha;


+(id)SDOFV2MetalKernelNamed:(id)arg0 ;
+(id)SDOFV3MetalKernelNamed:(id)arg0 ;
+(id)kernelWithString:(id)arg0 ;
-(BOOL)canReduceOutputChannels;
-(BOOL)preservesRange;
-(id)_initWithReflection:(struct CIKernelReflection )arg0 constants:(id)arg1 constantTypes:(id)arg2 ;
-(id)applyWithExtent:(struct CGRect )arg0 arguments:(id)arg1 ;
-(id)applyWithExtent:(struct CGRect )arg0 arguments:(id)arg1 options:(id)arg2 ;
// -(id)applyWithExtent:(struct CGRect )arg0 roiCallback:(id)arg1 arguments:(unk)arg2  ;
// -(id)applyWithExtent:(struct CGRect )arg0 roiCallback:(id)arg1 arguments:(unk)arg2 options:(id)arg3  ;
-(id)initWithString:(id)arg0 ;
-(void)setCanReduceOutputChannels:(BOOL)arg0 ;
-(void)setPreservesRange:(BOOL)arg0 ;


@end


#endif