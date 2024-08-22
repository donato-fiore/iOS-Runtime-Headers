// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICONTENTUNAVAILABLECONSTANTS_IOS_H
#define UICONTENTUNAVAILABLECONSTANTS_IOS_H

@class NSString;
@protocol UIContentUnavailableConstants;

#import <Foundation/Foundation.h>


@interface UIContentUnavailableConstants_IOS : NSObject <UIContentUnavailableConstants>

 {
    id *_buttonTextAttributesTransformer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedConstants;
-(CGFloat)defaultEmptyButtonToSecondaryButtonPadding;
-(CGFloat)defaultEmptyExtraProminentButtonToSecondaryButtonPadding;
-(CGFloat)defaultEmptyExtraProminentImageToTextPadding;
-(CGFloat)defaultEmptyExtraProminentTextToButtonPadding;
-(CGFloat)defaultEmptyExtraProminentTextToSecondaryTextPadding;
-(CGFloat)defaultEmptyImageToTextPadding;
-(CGFloat)defaultEmptyProminentButtonToSecondaryButtonPadding;
-(CGFloat)defaultEmptyProminentImageToTextPadding;
-(CGFloat)defaultEmptyProminentTextToButtonPadding;
-(CGFloat)defaultEmptyProminentTextToSecondaryTextPadding;
-(CGFloat)defaultEmptyTextToButtonPadding;
-(CGFloat)defaultEmptyTextToSecondaryTextPadding;
-(CGFloat)defaultLoadingImageToTextPadding;
-(CGFloat)defaultMaximumWidthForTraitCollection:(id)arg0 ;
-(NSInteger)defaultUserInterfaceRenderingMode;
-(NSUInteger)defaultButtonLayoutAxis;
-(NSUInteger)defaultEmptyViewElements;
-(NSUInteger)defaultLoadingViewElements;
-(id)defaultButtonConfigurationForTraitCollection:(id)arg0 ;
-(id)defaultEmptyExtraProminentImageSymbolConfigurationForTraitCollection:(id)arg0 ;
-(id)defaultEmptyExtraProminentImageTintColor;
-(id)defaultEmptyExtraProminentSecondaryTextFontForTraitCollection:(id)arg0 ;
-(id)defaultEmptyExtraProminentTextColor;
-(id)defaultEmptyExtraProminentTextFontForTraitCollection:(id)arg0 ;
-(id)defaultEmptyImageSymbolConfigurationForTraitCollection:(id)arg0 ;
-(id)defaultEmptyImageTintColor;
-(id)defaultEmptyProminentImageSymbolConfigurationForTraitCollection:(id)arg0 ;
-(id)defaultEmptyProminentImageTintColor;
-(id)defaultEmptyProminentSecondaryTextFontForTraitCollection:(id)arg0 ;
-(id)defaultEmptyProminentTextColor;
-(id)defaultEmptyProminentTextFontForTraitCollection:(id)arg0 ;
-(id)defaultEmptySecondaryTextFontForTraitCollection:(id)arg0 ;
-(id)defaultEmptyTextColor;
-(id)defaultEmptyTextFontForTraitCollection:(id)arg0 ;
-(id)defaultLoadingImageSymbolConfigurationForTraitCollection:(id)arg0 ;
-(id)defaultLoadingImageTintColor;
-(id)defaultLoadingTextColor;
-(id)defaultLoadingTextFontForTraitCollection:(id)arg0 ;
-(id)defaultSecondaryTextColor;
-(struct NSDirectionalEdgeInsets )defaultDirectionalLayoutMarginsForTraitCollection:(id)arg0 ;


@end


#endif