// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSRESOURCESTATECOMMANDENCODER_H
#define MTLTOOLSRESOURCESTATECOMMANDENCODER_H

@class NSString;
@protocol MTLResourceStateCommandEncoderSPI, MTLDevice;


#import "MTLToolsCommandEncoder.h"

@interface MTLToolsResourceStateCommandEncoder : MTLToolsCommandEncoder <MTLResourceStateCommandEncoderSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(id)endEncodingAndRetrieveProgramAddressTable;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)initWithResourceStateCommandEncoder:(id)arg0 parent:(id)arg1 descriptor:(id)arg2 ;
-(void)copyMappingStateFromTexture:(id)arg0 mipLevel:(NSUInteger)arg1 slice:(NSUInteger)arg2 toBuffer:(id)arg3 offset:(NSUInteger)arg4 numTiles:(NSUInteger)arg5 ;
-(void)moveTextureMappingsFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 ;
-(void)updateFence:(id)arg0 ;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3 ;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 region:(struct ? )arg2 mipLevel:(NSUInteger)arg3 slice:(NSUInteger)arg4 ;
-(void)updateTextureMappings:(id)arg0 mode:(NSUInteger)arg1 regions:(struct ? *)arg2 mipLevels:(*NSUInteger)arg3 slices:(*NSUInteger)arg4 numRegions:(NSUInteger)arg5 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif