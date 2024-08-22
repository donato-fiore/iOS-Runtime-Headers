// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUICOREUTILITIES_H
#define VUICOREUTILITIES_H


#import <Foundation/Foundation.h>


@interface VUICoreUtilities : NSObject



+(BOOL)canHandleDecodingOnRenderThread;
+(BOOL)radiiIsZero:(struct _VUICornerRadii )arg0 ;
+(BOOL)runningAnInternalBuild;
+(CGFloat)focusedSizeIncreaseForSize:(struct CGSize )arg0 upscaleFactor:(CGFloat)arg1 ;
+(CGFloat)radiusFromCornerRadii:(struct _VUICornerRadii )arg0 ;
+(CGFloat)scaleContentSizeValue:(CGFloat)arg0 forTraitCollection:(id)arg1 ;
+(CGFloat)scaleContentSizeValue:(CGFloat)arg0 forTraitCollection:(id)arg1 maximumContentSizeCategory:(NSUInteger)arg2 ;
+(NSUInteger)vuiContentSizeCategoryFor:(id)arg0 ;
+(NSUInteger)vuiUserInterfaceStyleForInterfaceStyle:(NSInteger)arg0 ;
+(id)TVUIKitBundle;
+(id)URLForResource:(id)arg0 ;
+(id)VideosUIBundle;
+(id)VideosUICoreBundle;
+(id)_URLForResource:(id)arg0 inBundle:(id)arg1 ;
+(id)_getImageFromURLorBundle:(id)arg0 ;
+(id)_imageForResource:(id)arg0 ;
+(id)_vuiCoreResourceMap;
+(id)defaultPlaceholderImageForUserInterfaceStyle:(NSUInteger)arg0 ;
+(id)imageForResource:(id)arg0 accessibilityDescription:(id)arg1 ;
+(id)mobileGestaltStringForKey:(struct __CFString *)arg0 ;
+(id)randomColor;
+(id)uiContentSizeCategoryFor:(NSUInteger)arg0 ;
+(struct CGPath *)createPathForRadii:(struct _VUICornerRadii )arg0 inRect:(struct CGRect )arg1 isContinuous:(BOOL)arg2 ;
+(struct CGPath *)shadowPathWithCornerRadii:(struct _VUICornerRadii )arg0 andScaledSize:(struct CGSize )arg1 ;
+(struct CGRect )centerRect:(struct CGRect )arg0 inRect:(struct CGRect )arg1 ;
+(struct _VUICornerRadii )radiiFromRadius:(CGFloat)arg0 ;
+(void)image:(id)arg0 didCompleteLoadingForCache:(NSInteger)arg1 requestRecord:(id)arg2 ;
+(void)vuiColor:(id)arg0 getRed:(*CGFloat)arg1 green:(*CGFloat)arg2 blue:(*CGFloat)arg3 alpha:(*CGFloat)arg4 ;


@end


#endif