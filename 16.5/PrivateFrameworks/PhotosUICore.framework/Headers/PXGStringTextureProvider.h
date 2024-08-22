// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGSTRINGTEXTUREPROVIDER_H
#define PXGSTRINGTEXTUREPROVIDER_H



#import "PXGCGImageTextureProvider.h"

@interface PXGStringTextureProvider : PXGCGImageTextureProvider



-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestTextureForAttributedString:(id)arg0 attributedStringBoundingSize:(struct CGSize )arg1 string:(id)arg2 withAttributes:(id)arg3 targetSize:(struct CGSize )arg4 drawingOptions:(NSInteger)arg5 drawingContext:(id)arg6 userInterfaceDirection:(NSUInteger)arg7 verticalAlignment:(NSInteger)arg8 screenScale:(CGFloat)arg9 textureRequestID:(int)arg10 padding:(struct UIEdgeInsets )arg11 ;


@end


#endif