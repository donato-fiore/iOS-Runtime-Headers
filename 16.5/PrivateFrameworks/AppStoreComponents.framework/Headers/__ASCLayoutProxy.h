// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
+(CGFloat)adTransparencyDeveloperNamePointSizeProvider:(id)arg0 ;
+(CGFloat)axOfferButtonHeightForSize:(id)arg0 ;
+(CGFloat)containerViewRotationAngleFor:(id)arg0 screenshots:(id)arg1 trailers:(id)arg2 ;
+(CGFloat)lockupHeadingPointSizeProvider:(id)arg0 ;
+(CGFloat)lockupSubtitlePointSizeProvider:(id)arg0 ;
+(CGFloat)lockupTitlePointSizeProvider:(id)arg0 ;
+(CGFloat)offerButtonFixedHeightForSize:(id)arg0 ;
+(CGFloat)offerButtonHeightForSize:(id)arg0 ;
+(CGFloat)offerButtonRegularWidthForSize:(id)arg0 ;
+(CGFloat)offerProgressDiameterForSize:(id)arg0 ;
+(NSInteger)numberOfViewsInLockupMediaLayoutFor:(id)arg0 with:(id)arg1 and:(id)arg2 ;
+(id)adLockupLayoutWithTraitCollection:(id)arg0 artworkView:(id)arg1 headingText:(id)arg2 titleText:(id)arg3 subtitleText:(id)arg4 offerText:(id)arg5 offerButton:(id)arg6 starRatingView:(id)arg7 ratingCountLabel:(id)arg8 adTransparencyButton:(id)arg9 editorsChoiceView:(id)arg10 descriptionLabel:(id)arg11 ;
+(id)artworkFrom:(id)arg0 and:(id)arg1 ;
+(id)lockupLayoutOfSize:(id)arg0 traitCollection:(id)arg1 artworkView:(id)arg2 headingText:(id)arg3 titleText:(id)arg4 subtitleText:(id)arg5 offerText:(id)arg6 offerButton:(id)arg7 ;
+(id)lockupMediaLayoutFor:(id)arg0 screenshots:(id)arg1 trailers:(id)arg2 containerView:(id)arg3 mediaViews:(id)arg4 ;
+(id)lockupMediaSizingLayoutFor:(id)arg0 screenshots:(id)arg1 trailers:(id)arg2 containerView:(id)arg3 mediaViews:(id)arg4 ;
+(id)offerDisclosureLayoutWithDisclosureIndicator:(id)arg0 ;
+(id)offerEmptyLayoutWithImageView:(id)arg0 titleView:(id)arg1 subtitleView:(id)arg2 ;
+(id)offerIconLayoutForSize:(id)arg0 imageView:(id)arg1 titleView:(id)arg2 subtitleView:(id)arg3 hasTrailingSubtitle:(BOOL)arg4 shouldTopAlign:(BOOL)arg5 topPadding:(CGFloat)arg6 ;
+(id)offerTextLayoutForSize:(id)arg0 titleBackgroundView:(id)arg1 titleView:(id)arg2 subtitleView:(id)arg3 hasTrailingSubtitle:(BOOL)arg4 shouldTopAlign:(BOOL)arg5 topPadding:(CGFloat)arg6 shouldExpandBackground:(BOOL)arg7 ;
+(id)traitEnvironmentWithTraitCollection:(id)arg0 ;
+(id)tvTextPillOverlayWithBackgroundView:(id)arg0 textView:(id)arg1 ;
+(struct CGRect )rectWithLayoutDirectionForRect:(struct CGRect )arg0 inTraitEnvironment:(id)arg1 relativeTo:(struct CGRect )arg2 ;
+(struct CGSize )estimatedMediaContentSizeFor:(id)arg0 screenshots:(id)arg1 trailers:(id)arg2 fitting:(struct CGSize )arg3 in:(id)arg4 ;
+(struct CGSize )lockupMediaPreferredMediaSizeWithFitting:(struct CGSize )arg0 for:(id)arg1 with:(id)arg2 and:(id)arg3 in:(id)arg4 ;
+(struct CGSize )mediumLockupEstimatedSizeFittingSize:(struct CGSize )arg0 compatibleWithTraitCollection:(id)arg1 ;
+(struct CGSize )mediumOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize )arg0 compatibleWithTraitCollection:(id)arg1 ;
+(struct CGSize )miniLockupEstimatedSizeFittingSize:(struct CGSize )arg0 compatibleWithTraitCollection:(id)arg1 ;
+(struct CGSize )smallLockupEstimatedSizeFittingSize:(struct CGSize )arg0 compatibleWithTraitCollection:(id)arg1 ;
+(struct CGSize )smallOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize )arg0 compatibleWithTraitCollection:(id)arg1 ;
+(struct UIEdgeInsets )layoutMarginsFor:(id)arg0 existingLayoutMargins:(struct UIEdgeInsets )arg1 ;
-(id)init;
-(struct CGSize )measuredSizeFittingSize:(struct CGSize )arg0 inTraitEnvironment:(id)arg1 ;
-(struct UIEdgeInsets )alignmentInsetsInTraitEnvironment:(id)arg0 ;
-(void)placeChildrenRelativeToRect:(struct CGRect )arg0 inTraitEnvironment:(id)arg1 ;


@end


#endif