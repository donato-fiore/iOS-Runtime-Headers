// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVMLUTILITIES_H
#define TVMLUTILITIES_H


#import <Foundation/Foundation.h>


@interface TVMLUtilities : NSObject



+(BOOL)_cornerRadiiFromElement:(id)arg0 cornerRadii:(struct TVCornerRadii *)arg1 circle:(*BOOL)arg2 ;
+(BOOL)_cornerRadiiFromImageLayout:(id)arg0 cornerRadii:(struct TVCornerRadii *)arg1 circle:(*BOOL)arg2 ;
+(BOOL)_cornerRadiiFromImgTreatmentValue:(id)arg0 width:(CGFloat)arg1 cornerRadii:(struct TVCornerRadii *)arg2 circle:(*BOOL)arg3 ;
+(BOOL)_cornerRadiiWithBorderRadius:(id)arg0 cornerRadii:(struct TVCornerRadii *)arg1 imageWidth:(CGFloat)arg2 imageTreatmentValue:(id)arg3 circle:(*BOOL)arg4 ;
+(BOOL)canHandleDecodingOnRenderThread;
+(BOOL)cornerRadiiFromElement:(id)arg0 cornerRadii:(struct TVCornerRadii *)arg1 circle:(*BOOL)arg2 ;
+(BOOL)isAXLargeEnabled:(id)arg0 ;
+(BOOL)isAXSmallEnabled:(id)arg0 ;
+(BOOL)isFlowcaseAtTopOfStackFromElement:(id)arg0 ;
+(CGFloat)_headerFadeForShowcaseFactor:(CGFloat)arg0 ;
+(CGFloat)focusedSizeIncreaseForSize:(struct CGSize )arg0 upscaleFactor:(CGFloat)arg1 ;
+(CGFloat)focusedSizeIncreaseForSize:(struct CGSize )arg0 upscaleFactor:(CGFloat)arg1 useInSearchPartial:(BOOL)arg2 ;
+(CGFloat)uiFontWeightFromCSSFontWeight:(id)arg0 ;
+(NSInteger)_interfaceStyleForElement:(id)arg0 ;
+(NSInteger)_overrideInterfaceStyleForElement:(id)arg0 ;
+(NSInteger)contentModeForPosition:(NSInteger)arg0 defaultMode:(NSInteger)arg1 ;
+(NSInteger)interfaceStyleForTemplateElement:(id)arg0 ;
+(NSInteger)overrideInterfaceStyleForTemplateElement:(id)arg0 ;
+(NSInteger)semanticAlignmentForAlignment:(NSInteger)arg0 semanticContentAttribute:(NSInteger)arg1 ;
+(NSInteger)semanticContentAttributeForTemplateElement:(id)arg0 ;
+(NSInteger)semanticPositionForPosition:(NSInteger)arg0 semanticContentAttribute:(NSInteger)arg1 ;
+(id)TVKitBundle;
+(id)TVMLKitBundle;
+(id)TVUIKitBundle;
+(id)_bgImageElementForProductTemplate:(id)arg0 ;
+(id)_defaultPlaceholderImageForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)_defaultPlaceholderImageForUserInterfaceStyle:(NSInteger)arg0 withCornerRadii:(struct TVCornerRadii )arg1 andSize:(struct CGSize )arg2 ;
+(id)_mobileGestaltStringForKey:(struct __CFString *)arg0 ;
+(id)_placeholderImageForValue:(id)arg0 userInterfaceStyle:(NSInteger)arg1 ;
+(id)_placeholderImageForValue:(id)arg0 userInterfaceStyle:(NSInteger)arg1 withCornerRadii:(struct TVCornerRadii )arg2 andScaledSize:(struct CGSize )arg3 ;
+(id)_placeholderImageForViewElement:(id)arg0 ;
+(id)_placeholderImageForViewElement:(id)arg0 imageLayout:(id)arg1 ;
+(id)_placeholderImageForViewElement:(id)arg0 withCornerRadii:(struct TVCornerRadii )arg1 andScaledSize:(struct CGSize )arg2 ;
+(id)_placeholderImageForViewElement:(id)arg0 withImageLayout:(id)arg1 cornerRadii:(struct TVCornerRadii )arg2 andScaledSize:(struct CGSize )arg3 ;
+(id)fontFromStyle:(id)arg0 ;
+(id)fontFromTextStyle:(id)arg0 fontWeight:(id)arg1 fontSize:(CGFloat)arg2 symbolicTraits:(unsigned int)arg3 ;
+(id)imageWithRadialGradientOverlayFromImage:(id)arg0 ;
+(id)indexPathForFirstItemAttributeValue:(id)arg0 ;
+(id)placeholderImageForViewElement:(id)arg0 ;
+(id)placeholderImageForViewElement:(id)arg0 withCornerRadii:(struct TVCornerRadii )arg1 andScaledSize:(struct CGSize )arg2 ;
+(id)randomColor;
+(id)rowSpacingMetricsForRowMetrics:(id)arg0 ;
+(id)rowSpacingMetricsForRowMetrics:(id)arg0 forShowcase:(BOOL)arg1 ;
+(struct CGPath *)shadowPathForViewElement:(id)arg0 withCornerRadii:(struct TVCornerRadii )arg1 andScaledSize:(struct CGSize )arg2 ;
+(struct CGPath *)shadowPathWithCornerRadii:(struct TVCornerRadii )arg0 andScaledSize:(struct CGSize )arg1 ;
+(struct CGRect )centerRect:(struct CGRect )arg0 inRect:(struct CGRect )arg1 ;
+(void)disassociateIKViewElementsRecursivelyFromView:(id)arg0 ;
+(void)getValuesFromTransform:(struct CGAffineTransform )arg0 translation:(struct CGPoint *)arg1 rotation:(struct CGPoint *)arg2 ;


@end


#endif