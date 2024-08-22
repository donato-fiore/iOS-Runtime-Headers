// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT33FREEZEFRAMEPAGEFLIPPINGCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT33FREEZEFRAMEPAGEFLIPPINGCONTROLLER_H

@class TtC16MagnifierSupport27LensFilteringViewController;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate;



@interface _TtC16MagnifierSupport33FreezeFramePageFlippingController : TtC16MagnifierSupport27LensFilteringViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>

 {
    ? freezeFrameDisplayAppearanceSubscription;
    ? cancellables;
    ? pages;
    ? thumbnailScrollingSubscriber;
    ? activePageIndexPath;
    ? pageSpacing;
    ? $__lazy_storage_$_pageController;
    ? $__lazy_storage_$_assetURLs;
    ? $__lazy_storage_$_shareBarButtonItem;
}


@property (nonatomic, readonly) BOOL prefersStatusBarHidden;


-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(void)loadView;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)singleTap:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif