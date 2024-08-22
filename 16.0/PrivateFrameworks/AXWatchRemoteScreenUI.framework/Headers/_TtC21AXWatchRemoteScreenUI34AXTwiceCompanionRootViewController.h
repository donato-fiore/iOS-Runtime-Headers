// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC21AXWATCHREMOTESCREENUI34AXTWICECOMPANIONROOTVIEWCONTROLLER_H
#define _TTC21AXWATCHREMOTESCREENUI34AXTWICECOMPANIONROOTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC21AXWatchRemoteScreenUI34AXTwiceCompanionRootViewController : UIViewController {
    ? eventSerialQueue;
    ? $__lazy_storage_$_airplayReceiver;
    ? lastHIDEvent;
    ? intervalHIDThreshold;
    ? $__lazy_storage_$_distanceHIDThreshold;
    ? hidEventReason;
    ? $__lazy_storage_$_eventProcessor;
    ? gizmoErrorRetryLimit;
    ? remoteMessenger;
    ? currentState;
    ? inactiveDate;
    ? inactiveTimeInterval;
    ? $__lazy_storage_$_inactiveTimer;
    ? mainVC;
    ? viewDidAppearDate;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif