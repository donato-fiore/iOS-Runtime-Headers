// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGDECORATIONTEXTUREPROVIDER_H
#define PXGDECORATIONTEXTUREPROVIDER_H

@class NSDateComponentsFormatter;
@protocol PXGViewSource;


#import "PXGCGImageTextureProvider.h"

@interface PXGDecorationTextureProvider : PXGCGImageTextureProvider

@property (weak, nonatomic) NSObject<PXGViewSource> *overlayViewSource; // ivar: _overlayViewSource
@property (readonly, nonatomic) NSDateComponentsFormatter *videoDurationFormatter; // ivar: _videoDurationFormatter


+(void)_drawWithDecorationInfo:(struct PXGDecorationSpriteInfo )arg0 solidColorOverlay:(id)arg1 debugDecoration:(id)arg2 cornerRadius:(struct ? )arg3 context:(struct CGContext *)arg4 viewport:(struct CGRect )arg5 screenScale:(CGFloat)arg6 viewEnvironment:(id)arg7 userInterfaceDirection:(NSUInteger)arg8 videoDurationFormatter:(id)arg9 ;
-(id)init;
-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestTextureForDecorationInfo:(struct PXGDecorationSpriteInfo )arg0 solidColorOverlay:(id)arg1 debugDecoration:(id)arg2 targetSize:(struct CGSize )arg3 cornerRadius:(struct ? )arg4 screenScale:(CGFloat)arg5 requestID:(int)arg6 viewEnvironment:(id)arg7 userInterfaceDirection:(NSUInteger)arg8 ;
-(void)_requestViewTextureForDecorationInfo:(struct PXGDecorationSpriteInfo )arg0 customViewClass:(Class)arg1 userData:(id)arg2 decorationOptions:(NSUInteger)arg3 requestID:(int)arg4 ;


@end


#endif