// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __ASCLAYOUTPROXY_H
#define __ASCLAYOUTPROXY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface __ASCLayoutProxy : NSObject {
    ? base;
}


@property (nonatomic, readonly) NSString *description;


+(CGFloat)adTransparencyButtonScaledCapInset:(CGFloat)arg0 in:(id)arg1 ;
+(CGFloat)adTransparencyButtonTitlePointSizeProvider:(id)arg0 ;
+(CGFloat)axOfferButtonHeight;
+(CGFloat)offerButtonHeight;
+(CGFloat)offerButtonRegularWidth;
+(CGFloat)offerProgressDiameter;
+(NSInteger)numberOfViewsInLockupMediaLayoutFor:(id)arg0 and:(id)arg1 ;
+(id)adLockupLayoutWithTraitCollection:(id)arg0 artworkView:(id)arg1 headingText:(id)arg2 titleText:(id)arg3 subtitleText:(id)arg4 offerText:(id)arg5 offerButton:(id)arg6 starRatingView:(id)arg7 ratingCountLabel:(id)arg8 adTransparencyButton:(id)arg9 editorsChoiceView:(id)arg10 descriptionLabel:(id)arg11 ;
+(id)artworkFrom:(id)arg0 and:(id)arg1 ;
+(id)lockupLayoutOfSize:(id)arg0 traitCollection:(id)arg1 artworkView:(id)arg2 headingText:(id)arg3 titleText:(id)arg4 subtitleText:(id)arg5 offerText:(id)arg6 offerButton:(id)arg7 ;
+(id)lockupMediaLayoutWithScreenshots:(id)arg0 trailers:(id)arg1 mediaViews:(id)arg2 ;
+(id)lockupMediaSizingLayoutWithScreenshots:(id)arg0 trailers:(id)arg1 mediaViews:(id)arg2 ;
+(id)offerEmptyLayoutWithImageView:(id)arg0 titleView:(id)arg1 subtitleView:(id)arg2 ;
+(id)offerIconLayoutWithImageView:(id)arg0 titleView:(id)arg1 subtitleView:(id)arg2 hasTrailingSubtitle:(BOOL)arg3 ;
+(id)offerTextLayoutWithTitleBackgroundView:(id)arg0 titleView:(id)arg1 subtitleView:(id)arg2 hasTrailingSubtitle:(BOOL)arg3 ;
+(id)traitEnvironmentWithTraitCollection:(id)arg0 ;
+(id)tvTextPillOverlayWithBackgroundView:(id)arg0 textView:(id)arg1 ;
+(struct CGSize )estimatedMediaContentSizeWithScreenshots:(id)arg0 trailers:(id)arg1 fitting:(struct CGSize )arg2 in:(id)arg3 ;
+(struct CGSize )lockupMediaPreferredMediaSizeWithFitting:(struct CGSize )arg0 for:(id)arg1 and:(id)arg2 in:(id)arg3 ;
+(struct CGSize )mediumLockupEstimatedSizeFittingSize:(struct CGSize )arg0 compatibleWithTraitCollection:(id)arg1 ;
+(struct CGSize )smallLockupEstimatedSizeFittingSize:(struct CGSize )arg0 compatibleWithTraitCollection:(id)arg1 ;
+(struct CGSize )smallOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize )arg0 compatibleWithTraitCollection:(id)arg1 ;
-(id)init;
-(struct CGSize )measuredSizeFittingSize:(struct CGSize )arg0 inTraitEnvironment:(id)arg1 ;
-(struct UIEdgeInsets )alignmentInsetsInTraitEnvironment:(id)arg0 ;
-(void)placeChildrenRelativeToRect:(struct CGRect )arg0 inTraitEnvironment:(id)arg1 ;


@end


#endif