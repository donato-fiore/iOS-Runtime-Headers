// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGIMAGETEXTURE_H
#define PXGIMAGETEXTURE_H



#import "PXGBaseTexture.h"

@interface PXGImageTexture : PXGBaseTexture {
    *CGImage _sourceCGImage;
    *__CVBuffer _sourceCVPixelBuffer;
}


@property (retain, nonatomic) id *cacheKey; // ivar: _cacheKey
@property ? orientationTransform;
@property (nonatomic) *CGImage sourceCGImage;
@property (nonatomic) *__CVBuffer sourceCVPixelBuffer;


-(void)getTextureInfos:(struct ? *)arg0 forSpriteIndexes:(*unsigned int)arg1 geometries:(struct ? *)arg2 spriteStyles:(struct ? *)arg3 spriteInfos:(struct ? *)arg4 screenScale:(CGFloat)arg5 count:(unsigned int)arg6 ;


@end


#endif