// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIFINGERPRINTCONTROLLER_H
#define PSUIFINGERPRINTCONTROLLER_H

@class PSListController;



@interface PSUIFingerprintController : PSListController

@property (retain, nonatomic) id *effectiveSettingsChangedNotificationObserver; // ivar: _effectiveSettingsChangedNotificationObserver


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)fingerprintName;
-(id)passcodeController;
-(id)representedBiometricIdentity;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)deleteFingerprint:(id)arg0 ;
-(void)fetchBiometricTemplateForCurrentBiometricIdentity:(id)arg0 ;
-(void)presentAlertIfNeededBeforeDeletingFingerPrint:(id)arg0 ;
-(void)presentAlertSheetForFingerprintBindingToGovernmentID:(id)arg0 ;
-(void)presentPopUpAlertForFingerprintBindingToGovernmentID:(id)arg0 ;
-(void)replaceFingerprint:(id)arg0 ;
-(void)setFingerprintName:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif