// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI22DOCUMENTVIEWCONTROLLER_H
#define _TTC8VIDEOSUI22DOCUMENTVIEWCONTROLLER_H

@class TtC8VideosUI17VUIViewController, UIViewController, NSArray;



@interface _TtC8VideosUI22DocumentViewController : TtC8VideosUI17VUIViewController {
    ? viewWillAppearAfterTabSwitch;
    ? templateViewController;
    ? deferLoadingTemplateController;
    ? documentDelegate;
    ? ignoreDidMoveToNilParent;
    ? rebaseIdentifier;
    ? document;
    ? isTransitioning;
    ? loadingView;
    ? navBarOpacity;
    ? navBarTitleOpacity;
    ? navBarTintColor;
    ? navBarPrefersLargeTitles;
    ? navBarTitleView;
    ? navBarTitle;
    ? navBarCachedWidth;
    ? needsConfigurationWhenMovesToParent;
    ? pagePerformanceReporter;
}


@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) NSInteger preferredStatusBarStyle;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL vuiShouldAutomaticallyForwardAppearanceMethods;


-(id)customAnimatorForNavigationControllerOperation:(NSInteger)arg0 fromViewController:(id)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(NSInteger)arg0 toViewController:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeActive:(id)arg0 ;
-(void)scrollToTop;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)vui_didMoveToParentViewController:(id)arg0 ;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive:(id)arg0 ;
-(void)willTerminate:(id)arg0 ;


@end


#endif