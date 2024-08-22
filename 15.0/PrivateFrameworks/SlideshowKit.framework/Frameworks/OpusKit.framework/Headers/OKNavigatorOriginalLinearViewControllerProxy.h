// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKNAVIGATORORIGINALLINEARVIEWCONTROLLERPROXY_H
#define OKNAVIGATORORIGINALLINEARVIEWCONTROLLERPROXY_H

@class UIPageViewController, NSArray, NSString;
@protocol UIPageViewControllerDelegate, UIPageViewControllerDataSource;


#import "OKNavigatorViewController.h"

@interface OKNavigatorOriginalLinearViewControllerProxy : OKNavigatorViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource>

 {
    UIPageViewController *_pagesViewController;
    NSArray *_orderedPagesNames;
    NSInteger _transitionStyle;
    NSInteger _navigationOrientation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay;
-(BOOL)prepareForUnload;
-(BOOL)prepareForWarmup;
-(id)nameForPageAfterPage:(id)arg0 ;
-(id)nameForPageBeforePage:(id)arg0 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(void)applySettings;
-(void)commonInit;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)gotoNext:(id)arg0 ;
-(void)gotoPrevious:(id)arg0 ;
-(void)navigateToPageWithName:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)prepareAdjacentPageViewControllers;
-(void)reloadPagesViewController;
-(void)setSettingOrientation:(NSUInteger)arg0 ;
-(void)setSettingTransition:(NSUInteger)arg0 ;
-(void)updatePagesViewController;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif