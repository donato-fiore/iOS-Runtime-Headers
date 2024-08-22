// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYMULTIARYMULTIDESTINATIONKERNEL_H
#define MPSNDARRAYMULTIARYMULTIDESTINATIONKERNEL_H



#import "MPSNDArrayMultiaryMultiDestinationBase.h"

@interface MPSNDArrayMultiaryMultiDestinationKernel : MPSNDArrayMultiaryMultiDestinationBase {
    *unk _encode;
}




-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 destinationCount:(NSUInteger)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 destinationArrays:(id)arg2 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArrays:(id)arg2 destinationArrays:(id)arg3 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArrays:(id)arg2 destinationArrays:(id)arg3 activeDestinationMask:(unsigned int)arg4 ;


@end


#endif