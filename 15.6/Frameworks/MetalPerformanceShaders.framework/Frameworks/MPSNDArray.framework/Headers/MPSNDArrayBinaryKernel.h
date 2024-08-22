// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYBINARYKERNEL_H
#define MPSNDARRAYBINARYKERNEL_H



#import "MPSNDArrayMultiaryKernel.h"

@interface MPSNDArrayBinaryKernel : MPSNDArrayMultiaryKernel

@property (readonly, nonatomic) ? primaryDilationRates;
@property (readonly, nonatomic) NSUInteger primaryEdgeMode;
@property (readonly, nonatomic) ? primaryKernelSizes;
@property (readonly, nonatomic) ? primaryOffsets;
@property (readonly, nonatomic) ? primaryStrides;
@property (readonly, nonatomic) ? secondaryDilationRates;
@property (readonly, nonatomic) NSUInteger secondaryEdgeMode;
@property (readonly, nonatomic) ? secondaryKernelSizes;
@property (readonly, nonatomic) ? secondaryOffsets;
@property (readonly, nonatomic) ? secondaryStrides;


+(NSUInteger)expectedVirtualSourceCount;
-(id)encodeToCommandBuffer:(id)arg0 primarySourceArray:(id)arg1 secondarySourceArray:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg0 primarySourceArray:(id)arg1 secondarySourceArray:(id)arg2 resultState:(*id)arg3 outputStateIsTemporary:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 primarySourceArray:(id)arg1 secondarySourceArray:(id)arg2 destinationArray:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 primarySourceArray:(id)arg1 secondarySourceArray:(id)arg2 resultState:(id)arg3 destinationArray:(id)arg4 ;


@end


#endif