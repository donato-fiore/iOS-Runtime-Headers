// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOLLECTIONVIEWCONTROLLER_H
#define UICOLLECTIONVIEWCONTROLLER_H

@class NSString, UIScrollView<_UIKeyboardAutoRespondingScrollView>;
@protocol _UIKeyboardAutoRespondingScrollViewController, UICollectionViewFocusDelegate_Legacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UICollectionViewDelegate, UICollectionViewDataSource;


#import "UIViewController.h"
#import "UICollectionViewLayout.h"
#import "UICollectionView.h"
#import "UILongPressGestureRecognizer.h"
#import "UIAutoRespondingScrollViewControllerKeyboardSupport.h"

@interface UICollectionViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UICollectionViewFocusDelegate_Legacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UICollectionViewDelegate, UICollectionViewDataSource>

 {
    UICollectionViewLayout *_layout;
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_reorderingGesture;
    UIAutoRespondingScrollViewControllerKeyboardSupport *_keyboardSupport;
    ? _collectionViewControllerFlags;
}


@property (nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL installsStandardGestureForInteractiveMovement;
@property (readonly, retain, nonatomic, getter=_scrollView) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useLayoutToLayoutNavigationTransitions;


-(BOOL)_shouldRespondToPreviewingMethods;
-(BOOL)shouldCrossFadeBottomBars;
-(BOOL)shouldCrossFadeNavigationBar;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_animatorForOperation:(NSInteger)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id)_newCollectionViewWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(id)_shim_contentScrollView;
-(id)_uiCollectionView;
-(id)_wrappingView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)dataSource;
-(id)delegate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)preferredFocusedView;
-(id)previewViewControllerForItemAtIndexPath:(id)arg0 ;
-(id)previewViewControllerForLocation:(struct CGPoint )arg0 inSourceView:(id)arg1 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(void)__viewDidAppear:(BOOL)arg0 ;
-(void)__viewWillAppear:(BOOL)arg0 ;
-(void)_clearSharedView;
-(void)_handleReorderingGesture:(id)arg0 ;
-(void)_installReorderingGestureIfNecessary;
-(void)_setSharedCollectionView:(id)arg0 ;
-(void)_updateCollectionViewLayoutAndDelegate:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadView;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setView:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillUnload;
-(void)willPresentPreviewViewController:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg0 forPosition:(struct CGPoint )arg1 inSourceView:(id)arg2 ;


@end


#endif