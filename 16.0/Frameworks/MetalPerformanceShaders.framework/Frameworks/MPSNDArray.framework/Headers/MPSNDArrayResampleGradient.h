// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYRESAMPLEGRADIENT_H
#define MPSNDARRAYRESAMPLEGRADIENT_H



#import "MPSNDArrayUnaryGradientKernel.h"

@interface MPSNDArrayResampleGradient : MPSNDArrayUnaryGradientKernel {
    MPSScaleTransform _transformStorage;
}


@property (nonatomic) unsigned int dataFormat; // ivar: _dataFormat
@property (nonatomic) unsigned int nearestMode; // ivar: _nearestMode
@property (nonatomic) unsigned int resampleMode; // ivar: _resampleMode
@property (nonatomic) *MPSScaleTransform scaleTransform; // ivar: _scaleTransform


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif