// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSYNDICATIONPAGEVIEWCONTROLLER_H
#define CKSYNDICATIONPAGEVIEWCONTROLLER_H

@class UIViewController, NSString, NSMutableArray, UIPageControl, UIPageViewController;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIGestureRecognizerDelegate, CKSyndicationOnboardingPageViewControllerDelegate;



@interface CKSyndicationPageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIGestureRecognizerDelegate>



@property (nonatomic) CGFloat buttonTrayHeight; // ivar: _buttonTrayHeight
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKSyndicationOnboardingPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *pageContent; // ivar: _pageContent
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (retain, nonatomic) UIPageViewController *pageViewController; // ivar: _pageViewController
@property (readonly) Class superclass;


-(NSUInteger)indexOfViewController:(id)arg0 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(id)viewControllerAtIndex:(NSUInteger)arg0 ;
-(void)createContentPages;
-(void)pageControlChanged:(id)arg0 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif