// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCENROLLMENTINTERFACE_H
#define DMCENROLLMENTINTERFACE_H

@class DMCEnrollmentFlowController, UIViewController, DMCUnenrollmentFlowController;
@protocol DMCEnrollmentFlowMCBridge;

#import <Foundation/Foundation.h>

#import "DMCAccountSpecifierProvider.h"

@interface DMCEnrollmentInterface : NSObject

@property (retain, nonatomic) DMCAccountSpecifierProvider *accountSpecifierProvider; // ivar: _accountSpecifierProvider
@property (retain, nonatomic) DMCEnrollmentFlowController *enrollmentFlowController; // ivar: _enrollmentFlowController
@property (copy, nonatomic) id *enrollmentResultBlock; // ivar: _enrollmentResultBlock
@property (nonatomic) BOOL isUpdatingEnrollment; // ivar: _isUpdatingEnrollment
@property (retain, nonatomic) NSObject<DMCEnrollmentFlowMCBridge> *mcHelper; // ivar: _mcHelper
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (retain, nonatomic) DMCUnenrollmentFlowController *unenrollmentFlowController; // ivar: _unenrollmentFlowController


+(Class)preferredViewControllerClassForAccount:(id)arg0 preferiCloudAccount:(BOOL)arg1 ;
+(id)accountControllerFromSpecifier:(id)arg0 baseViewController:(id)arg1 preferiCloudAccount:(BOOL)arg2 ;
-(id)_specifiersForManagedAccountSignIn;
-(id)initFromViewController:(id)arg0 enrollmentResultBlock:(id)arg1 ;
// -(id)initFromViewController:(id)arg0 enrollmentResultBlock:(id)arg1 managedConfigurationHelper:(unk)arg2  ;
-(id)specifiersForManagedAccounts;
-(void)startBYODEnrollment;
-(void)startUnenrollmentWithAltDSID:(id)arg0 ;


@end


#endif