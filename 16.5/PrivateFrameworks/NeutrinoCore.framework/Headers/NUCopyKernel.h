// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUCOPYKERNEL_H
#define NUCOPYKERNEL_H

@protocol MTLTexture;


#import "NUComputeKernel.h"

@interface NUCopyKernel : NUComputeKernel

@property (nonatomic) ? destinationOffset; // ivar: _destinationOffset
@property (nonatomic) ? sourceRegion; // ivar: _sourceRegion
@property (retain, nonatomic) NSObject<MTLTexture> *sourceTexture; // ivar: _sourceTexture


+(void)copyFromTexture:(id)arg0 region:(struct ? )arg1 toTexture:(id)arg2 atPoint:(struct ? )arg3 withCommandBuffer:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationTexture:(id)arg1 ;


@end


#endif