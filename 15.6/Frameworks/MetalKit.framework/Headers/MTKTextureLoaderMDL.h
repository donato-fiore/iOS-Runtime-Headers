// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTKTEXTURELOADERMDL_H
#define MTKTEXTURELOADERMDL_H

@class MDLTexture;


#import "MTKTextureLoaderData.h"

@interface MTKTextureLoaderMDL : MTKTextureLoaderData {
    MDLTexture *_texture;
    MTLPixelFormatInfo _pixelFormatInfo;
}




-(BOOL)determineFormatFromChannelEncoding:(NSInteger)arg0 channelCount:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)getDataForArrayElement:(NSUInteger)arg0 face:(NSUInteger)arg1 level:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 bytesPerRow:(*NSUInteger)arg4 bytesPerImage:(*NSUInteger)arg5 ;
-(id)initWithMDLTexture:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif