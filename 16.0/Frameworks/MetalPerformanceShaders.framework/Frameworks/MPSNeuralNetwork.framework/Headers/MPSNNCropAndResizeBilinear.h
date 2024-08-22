// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNCROPANDRESIZEBILINEAR_H
#define MPSNNCROPANDRESIZEBILINEAR_H



#import "MPSCNNKernel.h"

@interface MPSNNCropAndResizeBilinear : MPSCNNKernel {
    *Region_params _gpuRegions;
}


@property (readonly, nonatomic) NSUInteger numberOfRegions; // ivar: _numberOfRegions
@property (readonly, nonatomic) *MPSRegion regions; // ivar: _regions
@property (readonly, nonatomic) NSUInteger resizeHeight; // ivar: _resizeHeight
@property (readonly, nonatomic) NSUInteger resizeWidth; // ivar: _resizeWidth


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 resizeWidth:(NSUInteger)arg1 resizeHeight:(NSUInteger)arg2 numberOfRegions:(NSUInteger)arg3 regions:(struct MPSRegion *)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif