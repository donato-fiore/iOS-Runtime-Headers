// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGPATHTEXTUREPROVIDER_H
#define PXGPATHTEXTUREPROVIDER_H



#import "PXGCGImageTextureProvider.h"

@interface PXGPathTextureProvider : PXGCGImageTextureProvider



-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestTextureForPath:(id)arg0 targetSize:(struct CGSize )arg1 requestID:(int)arg2 ;


@end


#endif