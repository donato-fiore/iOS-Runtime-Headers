// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTKTEXTURELOADERKTX_H
#define MTKTEXTURELOADERKTX_H

@class NSData;


#import "MTKTextureLoaderData.h"

@interface MTKTextureLoaderKTX : MTKTextureLoaderData {
    NSData *_imageData;
    MTLPixelFormatInfo _pixelFormatInfo;
    BOOL _packedRowStride;
}




+(BOOL)isKTXFile:(id)arg0 ;
-(BOOL)parseKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)parseKeyValueBytes:(char *)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)determineFormatFromSizedFormat:(NSUInteger)arg0 ;
-(NSUInteger)determineFormatFromType:(unsigned int)arg0 format:(unsigned int)arg1 internalFormat:(unsigned int)arg2 baseInternalFormat:(unsigned int)arg3 ;
-(id)getDataForArrayElement:(NSUInteger)arg0 face:(NSUInteger)arg1 level:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 bytesPerRow:(*NSUInteger)arg4 bytesPerImage:(*NSUInteger)arg5 ;
-(id)initWithData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif