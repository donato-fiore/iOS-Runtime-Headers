// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMESSAGEDISPLAYMETRICS_H
#define MFMESSAGEDISPLAYMETRICS_H

@class UIView, UITraitCollection;

#import <Foundation/Foundation.h>

#import "ConversationFooterViewDisplayMetrics.h"

@interface MFMessageDisplayMetrics : NSObject

@property (readonly, nonatomic) CGFloat avatarDiameterForCurrentContentSize;
@property (readonly, nonatomic) CGFloat baselineToBaselineSpacing; // ivar: _baselineToBaselineSpacing
@property (readonly, nonatomic) CGFloat baselineToBaselineSpacingInConversation;
@property (readonly, nonatomic) CGFloat baselineToBaselineSpacingInConversationForMailActionHeader;
@property (readonly, nonatomic) CGFloat baselineToBaselineSpacingInMailActionCardHorizontalGroup;
@property (readonly, nonatomic) CGFloat bottomSpacingInMailActionCardHorizontalGroup;
@property (readonly, nonatomic) CGFloat bottomToLastBaselineInMailActionCardVerticalGroup;
@property (readonly, nonatomic) CGFloat cellHeightToStartScroll;
@property (readonly, nonatomic) CGFloat conversationHeaderViewCollapsedSuperTitleTopToFirstBaseline;
@property (readonly, nonatomic) CGFloat conversationHeaderViewCollapsedTitleBottomToLastBaseline;
@property (readonly, nonatomic) CGFloat conversationHeaderViewCollapsedTitleTopToFirstBaseline;
@property (readonly, nonatomic) CGFloat conversationHeaderViewExpandedTitleTopToFirstBaseline;
@property (readonly, nonatomic) BOOL conversationHeaderViewShouldHideCollapsedSuperTitle;
@property (readonly, nonatomic) CGFloat estimatedFooterViewHeight;
@property (readonly, nonatomic) CGFloat firstSeparatorToSubjectBaseline; // ivar: _firstSeparatorToSubjectBaseline
@property (nonatomic) CGFloat footerViewButtonsAnimationOffset; // ivar: _footerViewButtonsAnimationOffset
@property (retain, nonatomic) ConversationFooterViewDisplayMetrics *footerViewDisplayMetrics; // ivar: _footerViewDisplayMetrics
@property (readonly, nonatomic) CGFloat footerViewTopToBaseline;
@property (readonly, nonatomic) CGFloat footerViewTrailingButtonOrigin;
@property (readonly, nonatomic) BOOL hasCompactLayout;
@property (readonly, nonatomic) BOOL hasGenerousMargins;
@property (readonly, nonatomic) CGFloat headerBottomPadding; // ivar: _headerBottomPadding
@property (nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (readonly, nonatomic) CGFloat mailActionCardLargerMediumDetentCoverage;
@property (readonly, nonatomic) CGFloat mailActionCardMaximumContainerViewHeightForLargerMediumDetent;
@property (readonly, nonatomic) CGFloat mailActionCardPreferredHeightForPad;
@property (readonly, nonatomic) CGFloat mailActionCardSmallerMediumDetentCoverage;
@property (readonly, nonatomic) CGFloat messageBottomPaddingInConversation;
@property (readonly, nonatomic) CGFloat messageBottomPaddingInConversationForMailActionHeader;
@property (readonly, nonatomic) CGFloat messageTopPaddingInConversation;
@property (readonly, nonatomic) CGFloat messageTopPaddingInConversationForMailActionHeader;
@property (readonly, nonatomic) CGFloat minHorizontalSpacing;
@property (readonly, nonatomic) BOOL prefersFlushSeparator;
@property (readonly, nonatomic) CGFloat recipientBaselineToFirstSeparator; // ivar: _recipientBaselineToFirstSeparator
@property (readonly, nonatomic) CGFloat recipientBaselineToFirstSeparatorInConversation;
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly, nonatomic) CGFloat statusIndicatorHorizontalSpacing;
@property (readonly, nonatomic) CGFloat statusIndicatorVerticalSpacing; // ivar: _statusIndicatorVerticalSpacing
@property (readonly, nonatomic) CGFloat topToFirstBaselineSpacingInMailActionCardVerticalGroup;
@property (readonly, nonatomic) CGFloat topToGlyphBaselineInMailActionCardHorizontalGroup;
@property (readonly, nonatomic) CGFloat topToSenderBaseline; // ivar: _topToSenderBaseline
@property (readonly, nonatomic) CGFloat topToSenderBaselineInConversation;
@property (readonly, nonatomic) CGFloat topToSenderBaselineInConversationForMailActionHeader;
@property (retain, nonatomic) UIView *trailingButtonView; // ivar: _trailingButtonView
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) BOOL usePhoneLandscapeSymbolConfiguration;


+(CGFloat)avatarDiameter;
+(id)displayMetricsWithTraitCollection:(id)arg0 layoutMargins:(struct UIEdgeInsets )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 interfaceOrientation:(NSInteger)arg3 ;
+(id)displayMetricsWithTraitCollection:(id)arg0 layoutMargins:(struct UIEdgeInsets )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 interfaceOrientation:(NSInteger)arg3 trailingButtonView:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_calculateFooterViewButtonsAnimationOffset;
-(CGFloat)_scaledFloatWithValue:(CGFloat)arg0 fontStyle:(id)arg1 ;
-(CGFloat)_scaledFloatWithValue:(CGFloat)arg0 fontStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
-(NSUInteger)hash;
-(id)_cachedFontForStyle:(id)arg0 ;
-(id)description;
-(id)fontCacheKeyPrefix;


@end


#endif