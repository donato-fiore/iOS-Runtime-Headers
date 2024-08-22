// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNDILATEDPOOLINGMAX_H
#define MPSCNNDILATEDPOOLINGMAX_H



#import "MPSCNNPooling.h"

@interface MPSCNNDilatedPoolingMax : MPSCNNPooling

@property (readonly, nonatomic) NSUInteger dilationRateX;
@property (readonly, nonatomic) NSUInteger dilationRateY;


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 dilationRateX:(NSUInteger)arg3 dilationRateY:(NSUInteger)arg4 strideInPixelsX:(NSUInteger)arg5 strideInPixelsY:(NSUInteger)arg6 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 strideInPixelsX:(NSUInteger)arg3 strideInPixelsY:(NSUInteger)arg4 ;
-(id)newPlugin;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif