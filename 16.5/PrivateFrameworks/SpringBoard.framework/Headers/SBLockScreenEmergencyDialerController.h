// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENEMERGENCYDIALERCONTROLLER_H
#define SBLOCKSCREENEMERGENCYDIALERCONTROLLER_H

@class NSString, UIViewController;
@protocol SBLockScreenEmergencyCallViewControllerDelegate, SBLockScreenEmergencyDialerDelegate;

#import <Foundation/Foundation.h>


@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate>



@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBLockScreenEmergencyDialerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(void)activateWithCompletion:(id)arg0 ;
-(void)deactivate;
-(void)dismissEmergencyCallViewController:(id)arg0 ;
-(void)emergencyCallViewController:(id)arg0 didExitWithError:(id)arg1 ;


@end


#endif