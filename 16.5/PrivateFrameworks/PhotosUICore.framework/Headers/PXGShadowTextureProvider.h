// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGSHADOWTEXTUREPROVIDER_H
#define PXGSHADOWTEXTUREPROVIDER_H



#import "PXGCGImageTextureProvider.h"

@interface PXGShadowTextureProvider : PXGCGImageTextureProvider



-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestTextureForShadow:(id)arg0 cornerRadius:(CGFloat)arg1 screenScale:(CGFloat)arg2 targetSize:(struct CGSize )arg3 requestID:(int)arg4 ;


@end


#endif