// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNPOOLINGAVERAGEGRADIENT_H
#define MPSCNNPOOLINGAVERAGEGRADIENT_H



#import "MPSCNNPoolingGradient.h"

@interface MPSCNNPoolingAverageGradient : MPSCNNPoolingGradient

@property (nonatomic) NSUInteger zeroPadSizeX; // ivar: _zeroPadSizeX
@property (nonatomic) NSUInteger zeroPadSizeY; // ivar: _zeroPadSizeY


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 strideInPixelsX:(NSUInteger)arg3 strideInPixelsY:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif