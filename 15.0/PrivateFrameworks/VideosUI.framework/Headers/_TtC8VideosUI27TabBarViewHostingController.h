// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI27TABBARVIEWHOSTINGCONTROLLER_H
#define _TTC8VIDEOSUI27TABBARVIEWHOSTINGCONTROLLER_H



#import "VUIBaseViewController.h"

@interface _TtC8VideosUI27TabBarViewHostingController : VUIBaseViewController {
    ? previousSelectedIndex;
    ? tabBarInfo;
    ? cancellable;
    ? $__lazy_storage_$_hostingViewController;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)vui_viewDidLayoutSubviews;


@end


#endif