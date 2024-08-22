// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUINAMEDTEXTURE_H
#define CUINAMEDTEXTURE_H



#import "CUINamedLookup.h"

@interface CUINamedTexture : CUINamedLookup {
    _cuintproperties _textureProperties;
}


@property (readonly, nonatomic) int exifOrientation;
@property (readonly, nonatomic) BOOL isAlphaCropped;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size;


-(BOOL)_cacheRenditionProperties;
-(id)description;
-(id)textureWithBufferAllocator:(id)arg0 ;
-(struct CGRect )alphaCroppedRect;


@end


#endif