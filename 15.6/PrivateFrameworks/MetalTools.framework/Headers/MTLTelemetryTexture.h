// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTELEMETRYTEXTURE_H
#define MTLTELEMETRYTEXTURE_H

@class MTLTextureDescriptor;


#import "MTLToolsTexture.h"
#import "MTLTelemetryDevice.h"

@interface MTLTelemetryTexture : MTLToolsTexture {
    NSUInteger mipmapClipType;
    MTLTextureDescriptor *_telemetryDescriptor;
    MTLTelemetryDevice *_telemetryDevice;
}




-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 buffer:(id)arg2 descriptor:(id)arg3 offset:(NSUInteger)arg4 bytesPerRow:(NSUInteger)arg5 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 descriptor:(id)arg2 plane:(NSUInteger)arg3 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 texture:(id)arg2 descriptor:(id)arg3 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 texture:(id)arg2 pixelFormat:(NSUInteger)arg3 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 texture:(id)arg2 pixelFormat:(NSUInteger)arg3 textureType:(NSUInteger)arg4 levels:(struct _NSRange )arg5 slices:(struct _NSRange )arg6 swizzle:(struct ? )arg7 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 swizzle:(struct ? )arg4 ;
-(void)accumTextureDistribution:(id)arg0 category:(NSUInteger)arg1 pixelFormat:(NSUInteger)arg2 baseAddr:(NSUInteger)arg3 rowBytes:(NSUInteger)arg4 isLinear:(BOOL)arg5 ;
-(void)initMipmapClipType;


@end


#endif