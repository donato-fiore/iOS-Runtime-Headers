// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI23STACKTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI23STACKTEMPLATECONTROLLER_H

@class TtC8VideosUI19StackViewController;



@interface _TtC8VideosUI23StackTemplateController : TtC8VideosUI19StackViewController {
    ? supportsTabBarChildControllerBehaviours;
    ? supportsTabBarChildContentInsets;
    ? hasInAppBanner;
    ? anchorIdToHighlight;
    ? showcasePercentageObserver;
    ? lastShowcasePercentage;
    ? notificationCenter;
    ? statusBarStyle;
    ? navBarGradientView;
    ? statusBarGradientView;
    ? pagePerformanceProvider;
}


@property (nonatomic, readonly) NSInteger preferredStatusBarStyle;
@property (nonatomic, readonly) NSInteger preferredStatusBarUpdateAnimation;


-(id)initWithCoder:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)vuiScrollViewDidScroll:(id)arg0 ;
-(void)vui_didMoveToParentViewController:(id)arg0 ;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;


@end


#endif