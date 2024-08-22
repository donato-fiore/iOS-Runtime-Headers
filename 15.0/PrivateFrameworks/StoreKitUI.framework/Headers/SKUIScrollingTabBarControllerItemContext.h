// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISCROLLINGTABBARCONTROLLERITEMCONTEXT_H
#define SKUISCROLLINGTABBARCONTROLLERITEMCONTEXT_H

@class UIScrollView, NSString, UIViewController;
@protocol SKUINavigationStackObserver, SKUIScrollingTabBarControllerItemContextDelegate;

#import <Foundation/Foundation.h>

#import "SKUIViewControllerContainerCollectionViewCell.h"

@interface SKUIScrollingTabBarControllerItemContext : NSObject <SKUINavigationStackObserver>

 {
    BOOL _adjustingNestedPagingScrollViewContentOffset;
    UIEdgeInsets _appliedContentInsetsAdjustment;
    ? _desiredContentInsetAdjustmentDescriptor;
    UIScrollView *_insetAdjustedContentScrollView;
    CGFloat _lastSeenContentWidth;
    ? _lastSentAppearanceStatus;
    UIScrollView *_observedNestedPagingScrollView;
    NSUInteger _originalAutoresizingMask;
    BOOL _readyForDisplay;
    char _viewControllerIsNavigationController;
}


@property (retain, nonatomic) SKUIViewControllerContainerCollectionViewCell *collectionViewCell; // ivar: _collectionViewCell
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIScrollingTabBarControllerItemContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastSelectedPageIndex; // ivar: _lastSelectedPageIndex
@property (readonly, nonatomic) UIScrollView *nestedPagingScrollView;
@property (readonly, nonatomic) CGFloat nestedPagingScrollViewContentWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (readonly, nonatomic) BOOL viewControllerIsNavigationController;


-(id)_appearanceStatusObserver;
-(id)_nestedPagedScrollingConformingViewControllerForcingViewLoading:(BOOL)arg0 ;
-(id)init;
-(id)initWithViewController:(id)arg0 ;
-(id)viewControllerInNestedPagingScrollViewAtPageIndex:(NSUInteger)arg0 ;
-(void)_applyNewContentInset:(struct UIEdgeInsets )arg0 withOldContentInset:(struct UIEdgeInsets )arg1 toContentScrollView:(id)arg2 ;
-(void)_notifyDelegateOfUpdatedContentWidthInObservedNestedPagingScrollView;
-(void)_prepareViewControllerForDisplayWithViewFrame:(struct CGRect )arg0 updateContentOffset:(BOOL)arg1 contentOffset:(struct CGPoint )arg2 ;
-(void)_prepareViewControllerForTearDown;
-(void)_updateAppliedContentInsetsAdjustment;
-(void)applyNewContentInsetDescriptor:(struct ? )arg0 ;
-(void)dealloc;
-(void)notifyOfUpdatedAppearanceStatus:(struct ? )arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)observedNavigationStackDidChange:(id)arg0 ;
-(void)prepareViewControllerForDisplayWithSize:(struct CGSize )arg0 ;
-(void)prepareViewControllerForTearDown;
-(void)updateForPossibleNestedPagingScrollViewChange;
-(void)updateNestedPagingScrollViewContentOffset:(struct CGPoint )arg0 ;


@end


#endif