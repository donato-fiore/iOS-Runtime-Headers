// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTKTEXTURELOADERPVR_H
#define MTKTEXTURELOADERPVR_H

@class NSData;


#import "MTKTextureLoaderData.h"

@interface MTKTextureLoaderPVR : MTKTextureLoaderData {
    unsigned int _pvrFormat;
    unsigned int _numSurfaces;
    NSData *_imageData;
    MTLPixelFormatInfo _pixelFormatInfo;
}




+(BOOL)isPVRFile:(id)arg0 ;
-(BOOL)determineFormat:(unsigned int)arg0 options:(id)arg1 ;
-(id)getDataForArrayElement:(NSUInteger)arg0 face:(NSUInteger)arg1 level:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 bytesPerRow:(*NSUInteger)arg4 bytesPerImage:(*NSUInteger)arg5 ;
-(id)initWithData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)determineBlockSize:(*NSUInteger)arg0 blocksWide:(*NSUInteger)arg1 blocksHigh:(*NSUInteger)arg2 bytesPerBlock:(*NSUInteger)arg3 fromFormat:(unsigned int)arg4 width:(NSUInteger)arg5 andHeight:(NSUInteger)arg6 ;


@end


#endif