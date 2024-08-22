// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI31SETTINGSCONTAINERVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI31SETTINGSCONTAINERVIEWCONTROLLER_H

@class UIViewController, PSRootController, PSSpecifier;



@interface _TtC12GameCenterUI31SettingsContainerViewController : UIViewController {
    ? startTime;
    ? settings;
    ? childViewController;
    ? overlayView;
    ? scrollView;
    ? onboardingNavigationController;
    ? viewDidLayoutSubviewsCallback;
    ? metricsHandler;
}


@property (nonatomic, retain) PSRootController *_rootController; // ivar: _rootController
@property (nonatomic, retain) PSSpecifier *_specifier; // ivar: _specifier


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif