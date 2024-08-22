// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21AXWATCHREMOTESCREENUI34AXTWICECOMPANIONMAINVIEWCONTROLLER_H
#define _TTC21AXWATCHREMOTESCREENUI34AXTWICECOMPANIONMAINVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC21AXWatchRemoteScreenUI34AXTwiceCompanionMainViewController : UIViewController {
    ? titleLabel;
    ? dismissButton;
    ? watchDeviceView;
    ? statusLabel;
    ? pullToDismissManager;
    ? cardBackgroundView;
}


@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cardSwipeDownWithGesture:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif