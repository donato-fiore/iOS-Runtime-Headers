// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOMPACTPLATTERVIEW_H
#define WFCOMPACTPLATTERVIEW_H

@class UIView, NSArray, WFIcon, NSString, UILabel;
@protocol WFCompactTitledPlatterViewDelegate, MTVisualStylingProviding, WFCompactPlatterContentClippingDelegate, WFCompactPlatterSizingDelegate;


#import "WFCompactActionGroupView.h"
#import "WFCompactTitledPlatterView.h"

@interface WFCompactPlatterView : UIView <WFCompactTitledPlatterViewDelegate, MTVisualStylingProviding>



@property (weak, nonatomic) WFCompactActionGroupView *actionGroupView; // ivar: _actionGroupView
@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) BOOL arrangeActionsVertically; // ivar: _arrangeActionsVertically
@property (copy, nonatomic) WFIcon *attributionIcon; // ivar: _attributionIcon
@property (copy, nonatomic) NSString *attributionTitle; // ivar: _attributionTitle
@property (weak, nonatomic) UIView *clippingAutoLayoutContainerView; // ivar: _clippingAutoLayoutContainerView
@property (nonatomic, getter=isClippingContent) BOOL clippingContent; // ivar: _clippingContent
@property (weak, nonatomic) UIView *clippingContentView; // ivar: _clippingContentView
@property (weak, nonatomic) NSObject<WFCompactPlatterContentClippingDelegate> *contentClippingDelegate; // ivar: _contentClippingDelegate
@property (nonatomic) CGFloat contentHeightWhenClipped; // ivar: _contentHeightWhenClipped
@property (nonatomic) CGFloat contentVerticalOffsetWhenClipped; // ivar: _contentVerticalOffsetWhenClipped
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIView *contentViewContainerView;
@property (weak, nonatomic) UIView *contentViewSeparatorView; // ivar: _contentViewSeparatorView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *footerView; // ivar: _footerView
@property (nonatomic) CGFloat footerViewHeight; // ivar: _footerViewHeight
@property (nonatomic) BOOL footerViewHidden; // ivar: _footerViewHidden
@property (weak, nonatomic) UIView *footerViewSeparatorView; // ivar: _footerViewSeparatorView
@property (nonatomic) BOOL hasScheduledSizeInvalidation; // ivar: _hasScheduledSizeInvalidation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesContentViewTopSeparator; // ivar: _hidesContentViewTopSeparator
@property (weak, nonatomic) WFCompactTitledPlatterView *platterView; // ivar: _platterView
@property (weak, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (nonatomic) NSInteger primaryTextAlignment; // ivar: _primaryTextAlignment
@property (weak, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (nonatomic) NSInteger secondaryTextAlignment; // ivar: _secondaryTextAlignment
@property (copy, nonatomic) NSString *secondaryTextFontStyle; // ivar: _secondaryTextFontStyle
@property (readonly, nonatomic) UIEdgeInsets shadowOutsets;
@property (nonatomic) BOOL showsBottomScrollingSeparator; // ivar: _showsBottomScrollingSeparator
@property (nonatomic) BOOL showsTopScrollingSeparator; // ivar: _showsTopScrollingSeparator
@property (weak, nonatomic) NSObject<WFCompactPlatterSizingDelegate> *sizingDelegate; // ivar: _sizingDelegate
@property (readonly) Class superclass;


-(CGFloat)separatorHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )staticContentSizeForSize:(struct CGSize )arg0 ;
-(void)_labelContentChanged;
-(void)layoutContentInsideClippingView;
-(void)layoutCustomContentViewForPlatterView:(id)arg0 ;
-(void)setNeedsLayoutAndSizeInvalidation;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentViewSeparatorVisibility;
-(void)updateFooterViewSeparatorVisibility;


@end


#endif