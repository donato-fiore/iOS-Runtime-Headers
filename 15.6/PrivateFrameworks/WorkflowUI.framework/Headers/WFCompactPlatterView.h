// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPACTPLATTERVIEW_H
#define WFCOMPACTPLATTERVIEW_H

@class UIView, UIInterfaceActionGroup, UIInterfaceActionGroupView, WFIcon, NSString, UILabel;
@protocol WFCompactTitledPlatterViewDelegate, UIInterfaceActionHandlerInvocationDelegate, MTVisualStylingProviding, WFCompactPlatterContentClippingDelegate, WFCompactPlatterSizingDelegate;


#import "WFCompactTitledPlatterView.h"

@interface WFCompactPlatterView : UIView <WFCompactTitledPlatterViewDelegate, UIInterfaceActionHandlerInvocationDelegate, MTVisualStylingProviding>



@property (retain, nonatomic) UIInterfaceActionGroup *actionGroup; // ivar: _actionGroup
@property (weak, nonatomic) UIInterfaceActionGroupView *actionGroupView; // ivar: _actionGroupView
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
@property (weak, nonatomic) NSObject<WFCompactPlatterSizingDelegate> *sizingDelegate; // ivar: _sizingDelegate
@property (readonly) Class superclass;


-(CGFloat)separatorHeight;
-(id)allowedActionLayoutAxisByPriority;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )staticContentSizeForSize:(struct CGSize )arg0 ;
-(void)_labelContentChanged;
// -(void)interfaceAction:(id)arg0 invokeActionHandler:(id)arg1 completion:(unk)arg2  ;
-(void)layoutContentInsideClippingView;
-(void)layoutCustomContentViewForPlatterView:(id)arg0 ;
-(void)setNeedsLayoutAndSizeInvalidation;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentViewSeparatorVisibility;


@end


#endif