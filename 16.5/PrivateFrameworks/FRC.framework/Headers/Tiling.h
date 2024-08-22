// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILING_H
#define TILING_H

@protocol MTLDeviceSPI, MTLCommandQueue, MTLLibrary, MTLComputePipelineState, MTLBuffer;


#import "FRCMetalBase.h"

@interface Tiling : FRCMetalBase {
    id<MTLDeviceSPI> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLLibrary> *_mtlLibrary;
    id<MTLComputePipelineState> *_assembleKernel;
    id<MTLComputePipelineState> *_assembleTwoTileKernel;
    unsigned int _tileOverlap;
    id<MTLBuffer> *_tileParameters;
}




-(?)assembleTiles:(?)arg0 to:(?)arg1 tileInfonumTiles;
-(?)encodeTileBufferToCommandBuffer:(?)arg0 from:(?)arg1 to:(?)arg2 channels:(?)arg3 tileInfonumTiles;
-(id)initWithDevice:(id)arg0 commmandQueue:(id)arg1 ;
-(struct ? *)createTileInfoArrayForFrameWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 numTiles:(NSUInteger)arg2 ;
-(void)assemble2TilesToCommandBuffer:(id)arg0 from:(*id)arg1 to:(id)arg2 tileInfo:(struct ? *)arg3 ;
-(void)assemble3TilesToCommandBuffer:(id)arg0 from:(*id)arg1 to:(id)arg2 tileInfo:(struct ? *)arg3 ;
-(void)dealloc;
-(void)encodeTilingToCommandBuffer:(id)arg0 from:(id)arg1 to:(id)arg2 verticalOffset:(NSUInteger)arg3 sourceHeight:(NSUInteger)arg4 ;


@end


#endif