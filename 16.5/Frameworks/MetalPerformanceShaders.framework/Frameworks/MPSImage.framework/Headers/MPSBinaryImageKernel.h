// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSBINARYIMAGEKERNEL_H
#define MPSBINARYIMAGEKERNEL_H

@class MPSKernel;



@interface MPSBinaryImageKernel : MPSKernel {
    int _checkFlags;
    *unk _encode;
    *void _encodeData;
    *? _preferredTileSize;
}


@property (nonatomic) ? clipRect; // ivar: _clipRect
@property (nonatomic) NSUInteger primaryEdgeMode; // ivar: _primaryEdgeMode
@property (nonatomic) ? primaryOffset; // ivar: _primaryOffset
@property (nonatomic) NSUInteger secondaryEdgeMode; // ivar: _secondaryEdgeMode
@property (nonatomic) ? secondaryOffset; // ivar: _secondaryOffset


-(BOOL)encodeToCommandBuffer:(id)arg0 inPlacePrimaryTexture:(*id)arg1 secondaryTexture:(id)arg2 fallbackCopyAllocator:(id)arg3 ;
-(BOOL)encodeToCommandBuffer:(id)arg0 primaryTexture:(id)arg1 inPlaceSecondaryTexture:(*id)arg2 fallbackCopyAllocator:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(struct MPSRegion )primarySourceRegionForDestinationSize:(struct ? )arg0 ;
-(struct MPSRegion )secondarySourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 primaryTexture:(id)arg1 secondaryTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryTexture:(id)arg2 secondaryTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif