// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVPRODUCTBANNERBLURIMAGEDECORATOR_H
#define _TVPRODUCTBANNERBLURIMAGEDECORATOR_H

@class _UIBackdropViewSettings;

#import <Foundation/Foundation.h>


@interface _TVProductBannerBlurImageDecorator : NSObject

@property (retain, nonatomic) _UIBackdropViewSettings *backdropSettings; // ivar: _backdropSettings
@property (nonatomic) BOOL lightStyle; // ivar: _lightStyle


-(id)blurImageWithImage:(id)arg0 targetSize:(struct CGSize )arg1 scaleSize:(struct CGSize )arg2 ;
-(id)decorate:(id)arg0 scaledWithSize:(struct CGSize )arg1 croppedToFit:(BOOL)arg2 ;
-(id)resizeImage:(struct CGImage *)arg0 targetSize:(struct CGSize )arg1 shouldDither:(BOOL)arg2 ;


@end


#endif