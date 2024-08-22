// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCREMOVEPROFILEVIEWCONTROLLER_H
#define MCREMOVEPROFILEVIEWCONTROLLER_H

@class NSString, UITextField, MCProfile;
@protocol MCProfileViewControllerDelegate, DevicePINControllerDelegate;


#import "MCInstallProfileViewController.h"

@interface MCRemoveProfileViewController : MCInstallProfileViewController <MCProfileViewControllerDelegate, DevicePINControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextField *passwordField; // ivar: _passwordField
@property (nonatomic) BOOL profileWantsToReEnroll; // ivar: _profileWantsToReEnroll
@property (readonly) Class superclass;
@property (retain, nonatomic) MCProfile *updatingProfile; // ivar: _updatingProfile


-(BOOL)profileViewControllerIsProfileInstalled;
-(BOOL)profileViewControllerShouldDisplayPoll:(id)arg0 ;
-(id)_mdmProfileRemovalAlertBody;
-(id)initWithProfile:(id)arg0 ;
-(void)_didFinishEnteringPINWithCompletion:(id)arg0 ;
-(void)_leaveRemoteManagementAndErase;
-(void)_performReEnroll;
-(void)_performReEnrollAfterPINVerification;
-(void)_resetWithMode:(int)arg0 ;
-(void)_showEraseDeviceAlert;
-(void)_showLeaveRemoteManagementAlert;
-(void)_showRemovalWarningActionSheet;
-(void)_showRemovalWarningAfterPINVerification;
-(void)_showRemovalWarningAlert;
-(void)_showWrongRemovalPasswordAlert;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)profileRemovalDidFinish;
-(void)profileViewControllerDidSelectPoll:(id)arg0 ;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg0 ;
-(void)profileViewControllerDidSelectUpdateProfile:(id)arg0 ;
-(void)setInstallState:(int)arg0 animated:(BOOL)arg1 ;
-(void)updateBarButtonItemsForProfileInstallationState:(int)arg0 animated:(BOOL)arg1 ;
-(void)updateTitleForProfileInstallationState:(int)arg0 ;


@end


#endif