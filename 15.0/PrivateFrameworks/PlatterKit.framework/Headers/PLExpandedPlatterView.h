// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLEXPANDEDPLATTERVIEW_H
#define PLEXPANDEDPLATTERVIEW_H

@class UIView, MTMaterialView, NSDate, NSString, UIControl, NSArray, UIScrollView, NSTimeZone, UIButton;
@protocol UIGestureRecognizerDelegate, UIScrollViewDelegate, UIPointerInteractionDelegate, PLExpandedPlatter, PLTitled, PLContentSizeCategoryAdjusting, PLExpandedPlatterViewDelegate;


#import "PLPlatterHeaderContentView.h"
#import "PLInterfaceActionGroupView.h"

@interface PLExpandedPlatterView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, UIPointerInteractionDelegate, PLExpandedPlatter, PLTitled, PLContentSizeCategoryAdjusting>

 {
    UIView *_headerContainerView;
    UIView *_headerBackgroundView;
    UIView *_headerKeyLineView;
    UIView *_headerTintView;
    PLPlatterHeaderContentView *_headerContentView;
    UIView *_scrollViewContentView;
    UIView *_topRubberbandingView;
    MTMaterialView *_actionsBackgroundView;
    PLInterfaceActionGroupView *_actionsView;
}


@property (nonatomic, getter=isActionsHidden) BOOL actionsHidden; // ivar: _actionsHidden
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (nonatomic) BOOL clipsVisibleContentToBounds; // ivar: _clipsVisibleContentToBounds
@property (nonatomic) CGFloat contentBottomInset; // ivar: _contentBottomInset
@property (nonatomic) CGSize customContentSize; // ivar: _customContentSize
@property (readonly, nonatomic) UIView *customContentView; // ivar: _customContentView
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) NSInteger dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PLExpandedPlatterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIControl *dismissControl; // ivar: _dismissControl
@property (nonatomic, getter=isDismissControlEnabled) BOOL dismissControlEnabled; // ivar: _dismissControlEnabled
@property (readonly, nonatomic) UIEdgeInsets dismissControlInsets;
@property (nonatomic) NSInteger dismissControlPosition; // ivar: _dismissControlPosition
@property (nonatomic) BOOL hasShadow;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_headerContentView) UIView *headerContentView;
@property (nonatomic, getter=isHeaderEnabled) BOOL headerEnabled; // ivar: _headerEnabled
@property (readonly, nonatomic) NSArray *iconButtons;
@property (copy, nonatomic) NSArray *icons;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (readonly, nonatomic, getter=_mainContentView) UIView *mainContentView;
@property (retain, nonatomic, getter=_mainContentView) UIView *mainContentView; // ivar: _mainContentView
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *utilityButton;


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(CGFloat)_headerKeyLineAlphaForContentOffset;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_actionsViewFrame;
-(struct CGRect )_boundsInsetHorizontallyFromDismissControlIfNecessary;
-(struct CGRect )_effectiveMainContentViewFrame;
-(struct CGRect )_headerFrame;
-(struct CGRect )frameForPlatterFrame:(struct CGRect )arg0 ;
-(struct CGRect )platterFrameForFrame:(struct CGRect )arg0 ;
-(struct CGSize )_actionsSizeThatFits:(struct CGSize )arg0 includingPadding:(BOOL)arg1 ;
-(struct CGSize )_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize )arg0 ;
-(struct CGSize )_contentViewSize;
-(struct CGSize )_flexibleAreaSizeForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_sizeThatFitsContentExcludingActionsWithSize:(struct CGSize )arg0 ;
-(struct CGSize )actionsSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )contentSizeExcludingActions;
-(struct CGSize )contentSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeExcludingActions;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )minimumScrollViewContentInsets;
-(void)_configureActionViewIfNecessaryWithActions:(id)arg0 ;
-(void)_configureActionsBackgroundViewIfNecessaryWithActions:(id)arg0 ;
-(void)_configureCustomContentView;
-(void)_configureCustomContentViewIfNecessary;
-(void)_configureDismissControlIfNecessary;
-(void)_configureHeaderBackgroundDefaultIfNecessary;
-(void)_configureHeaderBackgroundForReduceTransparencyIfNecessary;
-(void)_configureHeaderBackgroundViewsIfCanScroll;
-(void)_configureHeaderBackgroundViewsIfNecessary;
-(void)_configureHeaderContainerViewIfNecessary;
-(void)_configureHeaderContentViewIfNecessary;
-(void)_configureMainContentViewIfNecessary;
-(void)_configureScrollViewContentViewIfNecessary;
-(void)_configureScrollViewIfNecessary;
-(void)_layoutActionsView;
-(void)_layoutCustomContentView;
-(void)_layoutDismissControl;
-(void)_layoutHeaderBackgroundViewsWithFrame:(struct CGRect )arg0 ;
-(void)_layoutHeaderContainerViewWithFrame:(struct CGRect )arg0 ;
-(void)_layoutHeaderContentViewWithFrame:(struct CGRect )arg0 ;
-(void)_layoutMainContentView;
-(void)_layoutMainContentViewIfNecessary;
-(void)_layoutScrollView;
-(void)_layoutScrollViewContentView;
-(void)_layoutTopRubberbandingView;
-(void)_reduceTransparencyDidChange:(id)arg0 ;
-(void)_updateHeaderKeyLineAlphaIfNecessaryAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif