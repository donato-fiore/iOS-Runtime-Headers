// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUARTICLECONTAINERVIEWCONTROLLER_H
#define NUARTICLECONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIPageViewControllerDelegate, UIPageViewControllerDataSource, NUPageViewControllerDelegate, NUPageViewControllerDataSource, NUArticleBarButtonItemManagerDelegate, NUNavigationControl, NULoadingDelegate, NUArticleContainerViewControllerDelegate, NUPaging, NUPagingFactory, NURouter;


#import "NUArticleBarButtonItemManager.h"
#import "NUArticleNavigationController.h"
#import "NUPageViewController.h"

@interface NUArticleContainerViewController : UIViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, NUPageViewControllerDelegate, NUPageViewControllerDataSource, NUArticleBarButtonItemManagerDelegate, NUNavigationControl, NULoadingDelegate>



@property (readonly, nonatomic) NUArticleBarButtonItemManager *barButtonItemManager; // ivar: _barButtonItemManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NUArticleContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLinkPreviewing) BOOL linkPreviewing; // ivar: _linkPreviewing
@property (readonly, nonatomic) NUArticleNavigationController *navigationController; // ivar: _navigationController
@property (readonly, nonatomic) NUPageViewController *pageViewController; // ivar: _pageViewController
@property (retain, nonatomic) NSObject<NUPaging> *paging; // ivar: _paging
@property (readonly, nonatomic) NSObject<NUPagingFactory> *pagingFactory; // ivar: _pagingFactory
@property (readonly, nonatomic) NSObject<NURouter> *router; // ivar: _router
@property (readonly) Class superclass;


-(id)childViewControllerForStatusBarHidden;
-(id)init;
-(id)initWithPagingFactory:(id)arg0 router:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(id)viewControllerPageableForViewController:(id)arg0 ;
-(void)articleBarButtonItemManager:(id)arg0 performDoneActionForBarButtonItem:(id)arg1 ;
-(void)articleBarButtonItemManager:(id)arg0 performNextActionForBarButtonItem:(id)arg1 ;
-(void)articleBarButtonItemManager:(id)arg0 performShareActionForBarButtonItem:(id)arg1 ;
-(void)articleBarButtonItemManagerDidLayoutBarButtonItems:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)enableNavigation:(BOOL)arg0 ;
-(void)loadWithArticleIDs:(id)arg0 ;
-(void)loadingDidFinishWithError:(id)arg0 ;
-(void)loadingWillStart;
-(void)pageViewController:(id)arg0 didChangeVisibleViewControllerFromViewController:(id)arg1 direction:(NSUInteger)arg2 ;
-(void)pageViewController:(id)arg0 viewController:(id)arg1 changedVisibilityFactor:(CGFloat)arg2 ;
-(void)styleNavigationForPage:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif