// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIUTILITIES_H
#define VUIUTILITIES_H


#import <Foundation/Foundation.h>


@interface VUIUtilities : NSObject



+(BOOL)isInFullscreenOrPipPlayback;
+(BOOL)isInRetailDemoMode;
+(BOOL)isIpadInterface;
+(BOOL)isIpadPortrait;
+(BOOL)isTVApp;
+(BOOL)shouldInvalidateLayoutWithPreviousTraitCollection:(id)arg0 newTraitCollection:(id)arg1 ;
+(CGFloat)imageCornerRadiusWithStyle:(NSInteger)arg0 ;
+(CGFloat)libraryCategoryListWidth;
+(CGFloat)libraryCategoryListWidthForWindowWidth:(CGFloat)arg0 ;
+(CGFloat)libraryListMarginToGrid;
+(CGFloat)scaleContentSizeValue:(CGFloat)arg0 forTraitCollection:(id)arg1 ;
+(CGFloat)scaleContentSizeValue:(CGFloat)arg0 forTraitCollection:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
+(NSInteger)interfaceStyleFromTheme:(id)arg0 defaultInterfaceStyle:(NSInteger)arg1 ;
+(NSInteger)textAlignmentWithSemanticContentAttribute:(NSInteger)arg0 ;
+(NSUInteger)minimumNumberOfItemsToEnableSeeAllButton;
+(id)VideosUIBundle;
+(id)colorFromHexStr:(id)arg0 ;
+(id)colorFromRGBStr:(id)arg0 ;
+(id)getCurrentQueueLabel;
+(id)getOSVersion;
+(id)gradientLayerLocationsFromSpacings:(id)arg0 height:(CGFloat)arg1 ;
+(id)placeholderImageResourceName:(NSInteger)arg0 ;
+(id)randomColor;
+(struct CGRect )vuiRectCenteredXInRect:(struct CGRect )arg0 boundsToCenterIn:(struct CGRect )arg1 offset:(CGFloat)arg2 ;
+(struct CGSize )imageSizeWithAspectRatio:(CGFloat)arg0 scaleToSize:(struct CGSize )arg1 ;
+(struct TVCornerRadii )imageCornerRadiiWithStyle:(NSInteger)arg0 ;
+(void)gradientConfigForCollection:(id)arg0 gradientMask:(NSInteger)arg1 properties:(id)arg2 configuration:(struct ? *)arg3 ;


@end


#endif