// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGGRADIENTTEXTUREPROVIDER_H
#define PXGGRADIENTTEXTUREPROVIDER_H



#import "PXGCGImageTextureProvider.h"

@interface PXGGradientTextureProvider : PXGCGImageTextureProvider



-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestTextureForGradient:(id)arg0 targetSize:(struct CGSize )arg1 requestID:(int)arg2 ;


@end


#endif