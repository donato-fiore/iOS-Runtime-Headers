// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNLOCALCORRELATION_H
#define MPSNNLOCALCORRELATION_H



#import "MPSNNReduceBinary.h"

@interface MPSNNLocalCorrelation : MPSNNReduceBinary

@property (nonatomic) NSUInteger strideInX; // ivar: _strideInX
@property (nonatomic) NSUInteger strideInY; // ivar: _strideInY
@property (nonatomic) NSUInteger windowInX; // ivar: _windowInX
@property (nonatomic) NSUInteger windowInY; // ivar: _windowInY


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 primaryOffset:(struct ? *)arg3 secondaryOffset:(struct ? *)arg4 kernelOffset:(struct ? *)arg5 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 windowInX:(NSUInteger)arg1 windowInY:(NSUInteger)arg2 strideInX:(NSUInteger)arg3 strideInY:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif