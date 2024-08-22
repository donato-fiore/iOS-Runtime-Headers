// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KEYCHAINSYNCSMSVERIFICATIONCONTROLLER_H
#define KEYCHAINSYNCSMSVERIFICATIONCONTROLLER_H

@class UIButton, NSString;
@protocol UIAlertViewDelegate;


#import "PSKeychainSyncTextEntryController.h"
#import "PSKeychainSyncManager.h"

@interface KeychainSyncSMSVerificationController : PSKeychainSyncTextEntryController <UIAlertViewDelegate>

 {
    UIButton *_footerButton;
}


@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *dialingPrefix; // ivar: _dialingPrefix
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSKeychainSyncManager *keychainSyncManager; // ivar: _keychainSyncManager
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly) Class superclass;


-(id)init;
-(id)specifiers;
-(void)dismissAlerts;
-(void)loadView;
-(void)showSupportVerification;
-(void)viewDidLayoutSubviews;


@end


#endif