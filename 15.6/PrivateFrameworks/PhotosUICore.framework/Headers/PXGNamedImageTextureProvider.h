// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGNAMEDIMAGETEXTUREPROVIDER_H
#define PXGNAMEDIMAGETEXTUREPROVIDER_H

@class NSBundle;


#import "PXGCGImageTextureProvider.h"

@interface PXGNamedImageTextureProvider : PXGCGImageTextureProvider

@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle


-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)_requestTextureForImageWithName:(id)arg0 inBundle:(id)arg1 isSystemImage:(BOOL)arg2 tintColor:(id)arg3 imageConfiguration:(id)arg4 userInterfaceDirection:(NSUInteger)arg5 screenScale:(CGFloat)arg6 requestID:(int)arg7 ;


@end


#endif