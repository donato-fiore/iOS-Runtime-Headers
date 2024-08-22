// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNPOOLINGMAXGRADIENT_H
#define MPSCNNPOOLINGMAXGRADIENT_H



#import "MPSCNNPoolingGradient.h"

@interface MPSCNNPoolingMaxGradient : MPSCNNPoolingGradient



-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 strideInPixelsX:(NSUInteger)arg3 strideInPixelsY:(NSUInteger)arg4 ;


@end


#endif