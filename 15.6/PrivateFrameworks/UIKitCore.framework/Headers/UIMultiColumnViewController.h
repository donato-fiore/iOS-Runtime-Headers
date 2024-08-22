// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMULTICOLUMNVIEWCONTROLLER_H
#define UIMULTICOLUMNVIEWCONTROLLER_H

@class NSMutableArray, NSArray;
@protocol UIMultiColumnViewControllerDelegate;


#import "UIViewController.h"
#import "UIBarButtonItem.h"
#import "UIImage.h"

@interface UIMultiColumnViewController : UIViewController {
    NSUInteger _lastColumnCount;
    NSUInteger _animatingTargetColumnCount;
    UIBarButtonItem *_showSecondColumnBarButtonItem;
    UIBarButtonItem *_hideSecondColumnBarButtonItem;
    ? _mcvcFlags;
    NSMutableArray *_borderViews;
    CGRect _lastFrameInWindow;
    CGSize _containerSizeAtLastUpdate;
    NSArray *_possibleStatesAtLastUpdate;
}


@property (retain, nonatomic, setter=_setColumnToggleButtonImage:) UIImage *_columnToggleButtonImage; // ivar: __columnToggleButtonImage
@property (readonly, nonatomic) NSUInteger columnCount;
@property (retain, nonatomic) NSArray *columnWidths; // ivar: _columnWidths
@property (weak, nonatomic) NSObject<UIMultiColumnViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat keyboardInset; // ivar: _keyboardInset
@property (retain, nonatomic) NSArray *navControllers; // ivar: _navControllers
@property (retain, nonatomic) NSArray *viewControllers; // ivar: _viewControllers


-(BOOL)_allowMultipleColumnsForPossibleStates:(id)arg0 containerSize:(struct CGSize )arg1 ;
-(BOOL)_canShowColumnIndex:(NSUInteger)arg0 ;
-(BOOL)sizeMightAllowMultipleColumns:(struct CGSize )arg0 ;
-(CGFloat)_unsafeAreaPaddingForFirstVisibleColumn;
-(NSUInteger)_columnCountForPossibleStates:(id)arg0 containerSize:(struct CGSize )arg1 ;
-(id)_addSecondColumnBarButton:(NSInteger)arg0 toNavItem:(id)arg1 ;
-(id)_contentSizesForColumnWidths:(id)arg0 ;
-(id)_effectiveColumnWidths;
-(id)_liveVCs;
-(id)_navigationBarForDragAffordance;
-(id)_possibleContentSizes;
-(id)_preferredContentSizes;
-(id)_removeSecondColumnBarButton:(NSInteger)arg0 fromNavItem:(id)arg1 ;
-(id)_secondColumnBarButtonItem:(NSInteger)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)_sideBarImage;
-(id)_splitViewControllerImageForDisplayModeButtonToShowPrimary:(id)arg0 ;
-(id)childViewControllerForStatusBarStyle;
-(id)description;
-(id)initWithNavController:(id)arg0 viewControllers:(id)arg1 ;
-(id)initWithNavController:(id)arg0 viewControllers:(id)arg1 columnWidths:(id)arg2 ;
-(id)separateSecondaryViewControllerForSplitViewController:(id)arg0 ;
-(id)title;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)arg0 ;
-(void)_collapseSecondaryViewController:(id)arg0 forSplitViewController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_hideSecondColumn:(id)arg0 ;
-(void)_marginInfoForChild:(id)arg0 leftMargin:(*CGFloat)arg1 rightMargin:(*CGFloat)arg2 ;
-(void)_moveViewControllersForColumnCount:(NSUInteger)arg0 ;
-(void)_navigationControllerChangedViewControllers:(id)arg0 ;
-(void)_setAllowNestedNavigationControllers:(BOOL)arg0 ;
-(void)_showSecondColumn:(id)arg0 ;
-(void)_splitViewControllerDidUpdate:(id)arg0 withSize:(struct CGSize )arg1 ;
-(void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg0 ;
-(void)_updateButtonsForColumnCount:(NSUInteger)arg0 animatingChange:(BOOL)arg1 ;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)_willShowColumnCount:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)requestColumnCount:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)showViewController:(id)arg0 sender:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif