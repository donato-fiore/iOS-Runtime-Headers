// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNPERMUTEGRADIENT_H
#define MPSNNPERMUTEGRADIENT_H



#import "MPSCNNGradientKernel.h"
#import "MPSNNPermute.h"

@interface MPSNNPermuteGradient : MPSCNNGradientKernel {
    MPSNNPermute *_revPermuteKernel;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 primaryImages:(id)arg1 secondaryImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 inStates:(id)arg4 destinationImages:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif