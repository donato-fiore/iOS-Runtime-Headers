// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDEMERGENCYDIALERCONTROLLER_H
#define SBDASHBOARDEMERGENCYDIALERCONTROLLER_H

@class CSCoverSheetViewController, NSString;
@protocol PTSettingsKeyObserver, CSEmergencyCalling, SBLockScreenCallHandling;

#import <Foundation/Foundation.h>

#import "SBDashBoardEmergencyDialerViewController.h"

@interface SBDashBoardEmergencyDialerController : NSObject <PTSettingsKeyObserver, CSEmergencyCalling, SBLockScreenCallHandling>

 {
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardEmergencyDialerViewController *_emergencyDialerViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isMakingEmergencyCall;
-(id)initWithCoverSheetViewController:(id)arg0 ;
-(void)dealloc;
-(void)emergencyDialerExitedWithError:(id)arg0 ;
-(void)exitEmergencyDialerAnimated:(BOOL)arg0 ;
-(void)launchEmergencyDialer;
-(void)launchEmergencyDialerAnimated:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif