// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUITOUCHIDPASSCODECONTROLLER_H
#define PSUITOUCHIDPASSCODECONTROLLER_H

@class NSString, BiometricKit;
@protocol UIPopoverControllerDelegate, BiometricKitDelegate, BiometricKitUIEnrollResultDelegate, OS_dispatch_queue;


#import "PSUIBiometricController.h"

@interface PSUITouchIDPasscodeController : PSUIBiometricController <UIPopoverControllerDelegate, BiometricKitDelegate, BiometricKitUIEnrollResultDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BiometricKit *highlightMatcher; // ivar: _highlightMatcher
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *highlightQueue; // ivar: _highlightQueue
@property (readonly) Class superclass;


-(BOOL)isBiometricIdentityMatchingGovernmentIDTemplate:(id)arg0 ;
-(id)_fingerprintSpecifierForIdentity:(id)arg0 ;
-(id)biometricLogo;
-(id)biometricNameDescription;
-(id)fingerprintSpecifiers;
-(id)headerForUseBiometricSection;
-(id)init;
-(id)specifiers;
-(void)_cancelMatching;
-(void)_setupMatching;
-(void)addEnrollment:(id)arg0 ;
-(void)biometricBindingDeleted;
-(void)cancelModalFlow;
-(void)cancelModalFlowWithCompletion:(id)arg0 ;
-(void)configureBiometricTemplateMatching;
-(void)dealloc;
-(void)enrollBiometric;
-(void)enrollResult:(int)arg0 bkIdentity:(id)arg1 ;
-(void)enrollResult:(int)arg0 identity:(id)arg1 ;
-(void)enrollmentControllerDidDismiss;
-(void)highlightFingerprintSpecifier:(id)arg0 ;
-(void)matchBiometricIdentitiesWithBiometricTemplates;
-(void)matchResult:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)statusMessage:(unsigned int)arg0 ;
-(void)suspend;
-(void)unhighlightFingerprintSpecifiersAfterDelay:(CGFloat)arg0 ;
-(void)updateAddFingerprintSpecifier;
-(void)updateWithReplacedUUIDs:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif