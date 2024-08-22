// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGCAPTURESPRITETEXTUREPROVIDER_H
#define PXGCAPTURESPRITETEXTUREPROVIDER_H



#import "PXGTextureProvider.h"

@interface PXGCaptureSpriteTextureProvider : PXGTextureProvider



-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestWithBehavior:(NSUInteger)arg0 requestID:(int)arg1 ;


@end


#endif