// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KEYCHAINSYNCPHONENUMBERCONTROLLER_H
#define KEYCHAINSYNCPHONENUMBERCONTROLLER_H

@class UILabel, NSString;
@protocol KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController;


#import "PSKeychainSyncViewController.h"
#import "KeychainSyncPhoneSettingsFragment.h"

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController>

 {
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    UILabel *_footerLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)specifiers;
-(void)controllerDone;
-(void)loadView;
-(void)nextPressed;
-(void)phoneSettingsFragment:(id)arg0 didChangePhoneNumber:(id)arg1 countryInfo:(id)arg2 ;
-(void)reloadSpecifiers;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif