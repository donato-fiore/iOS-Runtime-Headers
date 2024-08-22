// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBWELCOMECONTROLLER_H
#define OBWELCOMECONTROLLER_H

@class UIView, NSLayoutConstraint, NSString, UINavigationController, UIScrollView;
@protocol UIScrollViewDelegate, _UIScrollViewLayoutObserver, OBNavigationBarTitleTransistor;


#import "OBBaseWelcomeController.h"
#import "OBBulletedList.h"
#import "OBButtonTray.h"
#import "OBNavigationBarDisplayState.h"
#import "OBContentView.h"
#import "OBHeaderView.h"

@interface OBWelcomeController : OBBaseWelcomeController <UIScrollViewDelegate, _UIScrollViewLayoutObserver, OBNavigationBarTitleTransistor>



@property (nonatomic) BOOL _shouldInlineButtontray; // ivar: __shouldInlineButtontray
@property (nonatomic) CGFloat availableContentViewHeight; // ivar: _availableContentViewHeight
@property (retain, nonatomic) UIView *bleedView; // ivar: _bleedView
@property (retain, nonatomic) OBBulletedList *bulletedList; // ivar: _bulletedList
@property (retain, nonatomic) OBButtonTray *buttonTray; // ivar: _buttonTray
@property (retain, nonatomic) NSLayoutConstraint *buttonTrayScrollContainerHeightConstraint; // ivar: _buttonTrayScrollContainerHeightConstraint
@property (retain, nonatomic) UIView *buttonTrayScrollContainerView; // ivar: _buttonTrayScrollContainerView
@property (retain, nonatomic) OBNavigationBarDisplayState *cachedBarState; // ivar: _cachedBarState
@property (retain, nonatomic) OBContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // ivar: _contentViewHeightConstraint
@property (nonatomic) NSInteger contentViewLayout; // ivar: _contentViewLayout
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopOffsetConstraint; // ivar: _contentViewTopOffsetConstraint
@property (nonatomic) BOOL darkMode; // ivar: _darkMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *headerTopOffsetConstraint; // ivar: _headerTopOffsetConstraint
@property (retain, nonatomic) OBHeaderView *headerView; // ivar: _headerView
@property (nonatomic) BOOL includePaddingAboveContentView; // ivar: _includePaddingAboveContentView
@property (nonatomic) CGRect keyboardFrame; // ivar: _keyboardFrame
@property (retain, nonatomic) UINavigationController *retainedNavigationController; // ivar: _retainedNavigationController
@property (retain, nonatomic) UIView *scrollContentView; // ivar: _scrollContentView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic, getter=isScrollingDisabled) BOOL scrollingDisabled; // ivar: _scrollingDisabled
@property (retain, nonatomic) UIView *secondaryContentView; // ivar: _secondaryContentView
@property (retain, nonatomic) NSLayoutConstraint *secondaryContentViewTopOffsetConstraint; // ivar: _secondaryContentViewTopOffsetConstraint
@property (nonatomic) BOOL shouldAdjustButtonTrayForKeyboard; // ivar: _shouldAdjustButtonTrayForKeyboard
@property (nonatomic) BOOL shouldAdjustScrollViewInsetForKeyboard; // ivar: _shouldAdjustScrollViewInsetForKeyboard
@property (nonatomic) BOOL shouldMoveHeaderViewTitleToNavigationTitleWhenScrolledOffScreen; // ivar: _shouldMoveHeaderViewTitleToNavigationTitleWhenScrolledOffScreen
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger templateType; // ivar: _templateType


-(BOOL)_landscapeiPhone;
-(BOOL)_shouldDetachButtonTray;
-(BOOL)isContentCenterAligned;
-(BOOL)shouldInlineButtonTray;
-(CGFloat)_headerTopOffset;
-(NSInteger)navigationBarScrollToEdgeBehavior;
-(NSInteger)preferredUserInterfaceStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_currentContainerView;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)setupHeaderViewIfNeeded:(id)arg0 detailedText:(id)arg1 icon:(id)arg2 ;
-(void)_animatePushTransitionForViews:(id)arg0 transitionSubtype:(id)arg1 ;
-(void)_floatButtonTray;
-(void)_handleKeyboardPresentation:(id)arg0 ;
-(void)_inlineButtonTray;
-(void)_inlineButtonTrayIfNeeded;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_layoutButtonTray;
-(void)_registerForKeyboardNotifications;
-(void)_scrollViewDidLayoutSubviews:(id)arg0 ;
-(void)_setupNavigationBarBleed;
-(void)_setupScrollView;
-(void)_unregisterForKeyboardNotifications;
-(void)_updateButtonTrayBackdrop;
-(void)_updateHeaderTopOffsetConstraint;
-(void)_updateScrollContentViewLayoutMargins;
-(void)_updateScrollViewInsets;
-(void)addBulletedListItemWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 ;
-(void)addBulletedListItemWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 linkButton:(id)arg3 ;
-(void)addBulletedListItemWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 tintColor:(id)arg3 ;
-(void)addBulletedListItemWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 tintColor:(id)arg3 linkButton:(id)arg4 ;
-(void)loadView;
-(void)restoreNavigationBarAppearance;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setCurrentNavigationBarDisplayState:(id)arg0 ;
-(void)setupBulletedListIfNeeded;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDirectionalLayoutMargins;
-(void)updateNavigationBarAnimated:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif