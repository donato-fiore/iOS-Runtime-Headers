// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNSCALE_H
#define MPSNNSCALE_H

@class MPSImageScale;
@protocol MPSImageTransformProvider, MPSHandle;


#import "MPSCNNKernel.h"

@interface MPSNNScale : MPSCNNKernel {
    id<MPSImageTransformProvider> *_transformProvider;
    ? _destSize;
    MPSImageScale *_filter;
    id<MPSHandle> *_handle;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 transformProvider:(id)arg1 handle:(id)arg2 outputSize:(struct ? )arg3 scaleClass:(Class)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEdgeMode:(NSUInteger)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setOptions:(NSUInteger)arg0 ;


@end


#endif