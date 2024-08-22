// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIPASSCODEVALIDATECONTROLLER_H
#define AAUIPASSCODEVALIDATECONTROLLER_H

@class PSSetupController, NSString;
@protocol DevicePINControllerDelegate, AAUIPasscodeValidationDelegate;

#import <Foundation/Foundation.h>

#import "AAUICDPHelper.h"
#import "AAUIDevicePINController.h"

@interface AAUIPasscodeValidateController : NSObject <DevicePINControllerDelegate>

 {
    AAUICDPHelper *_helper;
    PSSetupController *_navController;
    AAUIDevicePINController *_pinController;
    id *_passcodeValidationCompletion;
    os_unfair_lock_s _completionLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIPasscodeValidationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)stingrayControllerWithPresenter:(id)arg0 ;
+(id)stingrayControllerWithPresenter:(id)arg0 forceInline:(BOOL)arg1 ;
-(id)_presentingViewController;
-(id)_specifierForMode:(int)arg0 ;
-(id)passcodeValidationCompletion:(SEL)arg0 ;
-(void)_setupNavController;
-(void)_showPasscodePromptWithMode:(int)arg0 ;
-(void)createPasscodeStateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)devicePINController:(id)arg0 canCancelWithCompletion:(id)arg1 ;
-(void)devicePINController:(id)arg0 didAcceptSetPIN:(id)arg1 ;
-(void)devicePINController:(id)arg0 didFailToSetPinWithError:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)dismissFlowWithLocalSecret:(id)arg0 error:(id)arg1 ;
-(void)setPasscodeValidationCompletion:(id)arg0 ;
-(void)validatePasscodeStateWithCompletion:(id)arg0 ;
-(void)validateStingrayPasscodeStateWithCompletion:(id)arg0 ;


@end


#endif