// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNUPSAMPLINGGRADIENT_H
#define MPSCNNUPSAMPLINGGRADIENT_H



#import "MPSCNNGradientKernel.h"

@interface MPSCNNUpsamplingGradient : MPSCNNGradientKernel {
    NSUInteger _filterType;
}


@property (readonly, nonatomic) CGFloat scaleFactorX; // ivar: _scaleFactorX
@property (readonly, nonatomic) CGFloat scaleFactorY; // ivar: _scaleFactorY


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 filterType:(NSUInteger)arg1 integerScaleFactorX:(NSUInteger)arg2 integerScaleFactorY:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif