// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTDEBUGVIEWCONTROLLER_H
#define PKACCOUNTDEBUGVIEWCONTROLLER_H

@class UIViewController;


#import "_PKAccountDebugViewController.h"
#import "PKAccountViewInterfaceConfiguration.h"

@interface PKAccountDebugViewController : UIViewController {
    _PKAccountDebugViewController *_viewController;
    PKAccountViewInterfaceConfiguration *_config;
}




-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_handleShareButton:(id)arg0 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif