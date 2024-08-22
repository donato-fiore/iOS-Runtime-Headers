// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKMUTABLETEXTURE_H
#define SKMUTABLETEXTURE_H



#import "SKTexture.h"

@interface SKMutableTexture : SKTexture {
    *__IOSurface _ioSurface;
    BOOL _ioSurfaceBacked;
    CGSize _textureSize;
    *void _pixelData;
    NSUInteger _pixelDataLength;
    int _pixelFormat;
}




+(id)mutableTextureWithSize:(struct CGSize )arg0 ;
-(?)_backingTexture;
-(id)description;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ioSurfaceBacked:(BOOL)arg1 pixelFormat:(int)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 pixelFormat:(int)arg1 ;
-(void)dealloc;
-(void)modifyPixelDataWithBlock:(id)arg0 ;


@end


#endif