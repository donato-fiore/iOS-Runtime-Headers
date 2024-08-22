// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGTITLESUBTITLETEXTUREPROVIDER_H
#define PXGTITLESUBTITLETEXTUREPROVIDER_H



#import "PXGCGImageTextureProvider.h"

@interface PXGTitleSubtitleTextureProvider : PXGCGImageTextureProvider



+(CGFloat)_drawWithTitle:(id)arg0 subtitle:(id)arg1 spec:(id)arg2 targetSize:(struct CGSize )arg3 context:(struct CGContext *)arg4 viewport:(struct CGRect )arg5 screenScale:(CGFloat)arg6 ;
-(id)workQueue;
-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestTextureForTitle:(id)arg0 subtitle:(id)arg1 spec:(id)arg2 targetSize:(struct CGSize )arg3 screenScale:(CGFloat)arg4 requestID:(int)arg5 renderCompletionHandler:(id)arg6 ;


@end


#endif