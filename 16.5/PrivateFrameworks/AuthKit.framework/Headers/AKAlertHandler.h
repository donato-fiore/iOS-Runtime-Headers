// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKALERTHANDLER_H
#define AKALERTHANDLER_H

@protocol AKAlertHandlerUIProvider;

#import <Foundation/Foundation.h>


@interface AKAlertHandler : NSObject

@property (weak, nonatomic) NSObject<AKAlertHandlerUIProvider> *uiProvider; // ivar: _uiProvider


+(id)sharedInstance;
-(BOOL)_shouldShowAlertForManagedAccount:(id)arg0 error:(id)arg1 ;
// -(BOOL)showAlert:(id)arg0 primaryAction:(id)arg1 altAction:(unk)arg2  ;
// -(BOOL)showAlert:(id)arg0 primaryAction:(id)arg1 altAction:(unk)arg2 cancelAction:(id)arg3  ;
-(id)_URLWithString:(id)arg0 byAppendingParameters:(id)arg1 ;
-(id)notificationDictionaryWithTitle:(id)arg0 message:(id)arg1 defaultButton:(id)arg2 alternateButton:(id)arg3 ;
-(void)_openPasscodeSetup;
-(void)_openSpyglass;
-(void)_openUpgradeAccountSecurityLevelWithBundleID:(id)arg0 ;
-(void)_showAlertForAccountNotSupportedWithCompletion:(id)arg0 ;
-(void)_showAlertForCannotFindServerWithCompletion:(id)arg0 ;
-(void)_showAlertForInsufficientSecurityLevelWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)_showAlertForInvalidContextWithCompletion:(id)arg0 ;
-(void)_showAlertForManagedAccount:(id)arg0 error:(id)arg1 withCompletion:(id)arg2 ;
-(void)_showAlertForMissingAppleAccountWithCompletion:(id)arg0 ;
-(void)_showAlertForPasscodeSetupWithCompletion:(id)arg0 ;
-(void)_showAlertForUnderageAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)_showAlertForUnverifiedEmailWithCompletion:(id)arg0 ;
-(void)showAlertForError:(id)arg0 withAuthKitAccount:(id)arg1 withCompletion:(id)arg2 ;
-(void)showAlertForError:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif