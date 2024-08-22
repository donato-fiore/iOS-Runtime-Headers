// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSUNARYIMAGEKERNEL_H
#define MPSUNARYIMAGEKERNEL_H

@class MPSKernel;



@interface MPSUnaryImageKernel : MPSKernel {
    int _checkFlags;
    *unk _encode;
    *unk _encodeKernelDAG;
    *void _encodeData;
    *unk _getPreferredTileSize;
}


@property (nonatomic) ? clipRect; // ivar: _clipRect
@property (nonatomic) NSUInteger edgeMode; // ivar: _edgeMode
@property (nonatomic) ? offset; // ivar: _offset


-(BOOL)encodeToCommandBuffer:(id)arg0 inPlaceTexture:(*id)arg1 fallbackCopyAllocator:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(struct MPSRegion )sourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sources:(id)arg1 destination:(id)arg2 kernelDAGObject:(id)arg3 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sources:(id)arg2 destination:(id)arg3 kernelDAGObject:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif