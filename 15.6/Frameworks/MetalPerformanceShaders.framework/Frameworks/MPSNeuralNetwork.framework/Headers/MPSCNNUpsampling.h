// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNUPSAMPLING_H
#define MPSCNNUPSAMPLING_H



#import "MPSCNNKernel.h"

@interface MPSCNNUpsampling : MPSCNNKernel {
    NSUInteger _filterType;
}


@property (readonly, nonatomic) BOOL alignCorners; // ivar: _alignCorners
@property (readonly, nonatomic) CGFloat scaleFactorX; // ivar: _scaleFactorX
@property (readonly, nonatomic) CGFloat scaleFactorY; // ivar: _scaleFactorY


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 filterType:(NSUInteger)arg1 integerScaleFactorX:(NSUInteger)arg2 integerScaleFactorY:(NSUInteger)arg3 alignCorners:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif