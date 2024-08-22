// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYMULTIARYMULTIDESTINATIONBASE_H
#define MPSNDARRAYMULTIARYMULTIDESTINATIONBASE_H

@class MPSKernel;



@interface MPSNDArrayMultiaryMultiDestinationBase : MPSKernel {
    NSUInteger _srcCount;
    NSUInteger _dstCount;
    *void _encodeData;
}




-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 destinationCount:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif