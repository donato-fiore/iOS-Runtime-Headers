// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUIMAGEUTILITIES_H
#define NUIMAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface NUImageUtilities : NSObject



+(NSInteger)alignedRowBytesForWidth:(NSInteger)arg0 bytesPerPixel:(NSInteger)arg1 ;
+(void)copyBuffer:(id)arg0 rect:(struct ? )arg1 toBuffer:(id)arg2 atPoint:(struct ? )arg3 ;
+(void)copyPixelsFromImage:(id)arg0 atPoint:(struct ? )arg1 toBuffer:(id)arg2 ;
+(void)copyPixelsFromImage:(id)arg0 rect:(struct ? )arg1 destPtr:(*void)arg2 destPtrRowBytes:(NSInteger)arg3 ;
+(void)copyPixelsFromImage:(id)arg0 srcRect:(struct ? )arg1 destImage:(id)arg2 destOrigin:(struct ? )arg3 ;
+(void)copyPixelsFromSurfaceImage:(id)arg0 atPoint:(struct ? )arg1 toBuffer:(id)arg2 ;
+(void)copyPixelsFromSurfaceImage:(id)arg0 rect:(struct ? )arg1 destPtr:(*void)arg2 destPtrRowBytes:(NSInteger)arg3 ;
+(void)copyPixelsToImage:(id)arg0 atPoint:(struct ? )arg1 fromBuffer:(id)arg2 inRect:(struct ? )arg3 ;
+(void)copyPixelsToImage:(id)arg0 rect:(struct ? )arg1 srcPtr:(*void)arg2 srcPtrRowBytes:(NSInteger)arg3 ;
+(void)copySurfaceImage:(id)arg0 toImage:(id)arg1 ;
+(void)copyTexture:(id)arg0 fromRect:(struct ? )arg1 toSurfaceImage:(id)arg2 atPoint:(struct ? )arg3 withDevice:(id)arg4 ;
+(void)fillPixelsInBuffer:(id)arg0 rect:(struct ? )arg1 srcPixel:(*void)arg2 ;
+(void)fillPixelsInImage:(id)arg0 rect:(struct ? )arg1 srcPixel:(*void)arg2 ;
+(void)renderImage:(id)arg0 toSurface:(id)arg1 atPoint:(struct ? )arg2 withContext:(id)arg3 andColorSpace:(id)arg4 ;


@end


#endif