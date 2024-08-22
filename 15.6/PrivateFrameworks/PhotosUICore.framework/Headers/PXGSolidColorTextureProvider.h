// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGSOLIDCOLORTEXTUREPROVIDER_H
#define PXGSOLIDCOLORTEXTUREPROVIDER_H



#import "PXGCGImageTextureProvider.h"

@interface PXGSolidColorTextureProvider : PXGCGImageTextureProvider



-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestTextureForColor:(id)arg0 targetSize:(struct CGSize )arg1 traitCollection:(id)arg2 requestID:(int)arg3 ;
-(void)viewEnvironmentDidChange:(id)arg0 ;


@end


#endif