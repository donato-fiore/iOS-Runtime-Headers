// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDEMERGENCYDIALERVIEWCONTROLLER_H
#define SBDASHBOARDEMERGENCYDIALERVIEWCONTROLLER_H

@class TUCallCenter, NSString;
@protocol SBLockScreenEmergencyDialerDelegate;


#import "SBHomeGestureDismissableCoverSheetViewController.h"
#import "SBLockScreenEmergencyDialerController.h"

@interface SBDashBoardEmergencyDialerViewController : SBHomeGestureDismissableCoverSheetViewController <SBLockScreenEmergencyDialerDelegate>

 {
    TUCallCenter *_callCenter;
    SBLockScreenEmergencyDialerController *_controller;
    BOOL _inEmergencyCall;
    BOOL _inEmergencyCallMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSInteger)presentationPriority;
-(NSInteger)presentationType;
-(void)_activateEmergencyDialerController;
-(void)_deactivateEmergencyDialerController;
-(void)_updateEmergencyCallMode:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)dealloc;
-(void)emergencyDialer:(id)arg0 willDeactivateWithError:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif