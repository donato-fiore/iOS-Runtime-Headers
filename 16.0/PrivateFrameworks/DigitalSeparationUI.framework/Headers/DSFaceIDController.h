// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSFACEIDCONTROLLER_H
#define DSFACEIDCONTROLLER_H

@class CIDVUIBiometricBindingFlowManager, LAContext, OBBoldTrayButton, NSString, UINavigationController;
@protocol BKUIPearlEnrollControllerDelegate, DSController, DSNavigationDelegate;


#import "DSOBWelcomeController.h"

@interface DSFaceIDController : DSOBWelcomeController <BKUIPearlEnrollControllerDelegate, DSController>



@property (retain, nonatomic) CIDVUIBiometricBindingFlowManager *_biometricBindingFlowManager; // ivar: __biometricBindingFlowManager
@property (retain, nonatomic) LAContext *authContext; // ivar: _authContext
@property (retain, nonatomic) OBBoldTrayButton *boldButton; // ivar: _boldButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UINavigationController *faceIDEnrollmentNavigationController; // ivar: _faceIDEnrollmentNavigationController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasAlternateAppearance;
+(BOOL)isPearlEnrolled;
+(BOOL)supportsPearl;
+(id)pearlIdentities;
-(BOOL)shouldShow;
-(id)init;
-(void)_didTapCancelButton;
-(void)beginFaceIDEnrollment;
-(void)configurePeriocularEnabled:(BOOL)arg0 ;
-(void)deleteAllIdentities;
-(void)deleteGlobalAuthACL;
-(void)pearlEnrollController:(id)arg0 finishedEnrollWithError:(id)arg1 ;
-(void)resetFaceID;
-(void)updateFaceIDPaneConfiguration;
-(void)viewDidLoad;


@end


#endif