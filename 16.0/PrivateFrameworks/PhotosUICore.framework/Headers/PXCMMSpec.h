// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMSPEC_H
#define PXCMMSPEC_H

@class UIColor;


#import "PXFeatureSpec.h"

@interface PXCMMSpec : PXFeatureSpec

@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (readonly, nonatomic) UIColor *bubbleBackgroundColor;
@property (readonly, nonatomic) CGFloat bubbleStatusIconCornerRadius; // ivar: _bubbleStatusIconCornerRadius
@property (readonly, nonatomic) CGFloat composeCornerRadius; // ivar: _composeCornerRadius
@property (readonly, nonatomic) UIEdgeInsets composeFooterInsets; // ivar: _composeFooterInsets
@property (readonly, nonatomic) UIEdgeInsets composeFooterMargins; // ivar: _composeFooterMargins
@property (readonly, nonatomic) UIEdgeInsets composeHeaderLabelMargins; // ivar: _composeHeaderLabelMargins
@property (readonly, nonatomic) CGFloat composeHeaderVerticalPadding; // ivar: _composeHeaderVerticalPadding
@property (readonly, nonatomic) CGFloat composePrivacyMessageInset; // ivar: _composePrivacyMessageInset
@property (readonly, nonatomic) UIColor *composeRecipientViewBackgroundColor; // ivar: _composeRecipientViewBackgroundColor
@property (readonly, nonatomic) UIColor *reviewBackgroundColor; // ivar: _reviewBackgroundColor
@property (readonly, nonatomic) CGFloat reviewBannerHeight; // ivar: _reviewBannerHeight
@property (readonly, nonatomic) UIEdgeInsets reviewContentInsets; // ivar: _reviewContentInsets
@property (readonly, nonatomic) CGFloat reviewFooterBottomInset; // ivar: _reviewFooterBottomInset
@property (readonly, nonatomic) UIEdgeInsets reviewGridContentInsets; // ivar: _reviewGridContentInsets
@property (readonly, nonatomic) NSInteger reviewGridContentMode; // ivar: _reviewGridContentMode
@property (readonly, nonatomic) CGSize reviewGridInterItemSpacing; // ivar: _reviewGridInterItemSpacing
@property (readonly, nonatomic) CGSize reviewGridItemSize; // ivar: _reviewGridItemSize
@property (readonly, nonatomic) CGFloat reviewHeaderCornerRadius; // ivar: _reviewHeaderCornerRadius
@property (readonly, nonatomic) CGFloat reviewHeaderTopInset; // ivar: _reviewHeaderTopInset
@property (readonly, nonatomic) UIEdgeInsets reviewSafeAreaInsets; // ivar: _reviewSafeAreaInsets
@property (readonly, nonatomic) CGFloat reviewSectionHeaderHeight; // ivar: _reviewSectionHeaderHeight
@property (readonly, nonatomic) CGFloat reviewSendBackFooterHeight; // ivar: _reviewSendBackFooterHeight


+(CGFloat)maxBubbleWidthForDisplayScale:(CGFloat)arg0 ;
-(CGFloat)_reviewSectionHeaderHeightForContentSize:(id)arg0 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 activityType:(NSUInteger)arg2 ;


@end


#endif