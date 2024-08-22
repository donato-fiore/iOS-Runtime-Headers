// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGVIEWTEXTUREPROVIDER_H
#define PXGVIEWTEXTUREPROVIDER_H



#import "PXGTextureProvider.h"

@interface PXGViewTextureProvider : PXGTextureProvider



-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestTextureForViewClass:(Class)arg0 userData:(id)arg1 requestID:(int)arg2 ;


@end


#endif