// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISLIDESHOWVIEWCONTROLLER_H
#define SKUISLIDESHOWVIEWCONTROLLER_H

@class UIViewController, UIPageViewController, NSOperationQueue, NSMutableDictionary, NSString;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate, SKUISlideshowItemViewControllerDelegate, UIViewControllerTransitioningDelegate, SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;


#import "SKUIClientContext.h"

@interface SKUISlideshowViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SKUISlideshowItemViewControllerDelegate, UIViewControllerTransitioningDelegate>

 {
    UIPageViewController *_pageViewController;
    NSOperationQueue *_remoteLoadQueue;
    NSMutableDictionary *_itemViewControllersCache;
    BOOL _overlayVisible;
    BOOL _shouldCancelDelayedOverlayVisibilityChange;
    BOOL _overlayVisibilityWillChangeWithDelay;
    BOOL _lockOverlayControlsVisible;
    ? _savedStatusBarState;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (nonatomic) NSInteger currentIndex; // ivar: _currentIndex
@property (weak, nonatomic) NSObject<SKUISlideshowViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUISlideshowViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)supportedInterfaceOrientations;
-(id)_itemViewControllerForIndex:(NSInteger)arg0 ;
-(id)animatorForDismissedController:(id)arg0 ;
-(id)animatorForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)currentItemViewController;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(void)_contentViewTapped:(id)arg0 ;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)_fadeOutOverlayAfterDelay:(NSUInteger)arg0 ;
-(void)_restoreStatusBarAppearanceState;
-(void)_saveStatusBarAppearanceState;
-(void)_setOverlayVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_toggleFadeOverlay;
-(void)_updateCurrentIndex;
-(void)_updateTitleWithIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)reloadData;
-(void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg0 ;
-(void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg0 ratio:(CGFloat)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif