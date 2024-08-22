// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSKEYCHAINSYNCSECURITYCODECONTROLLER_H
#define PSKEYCHAINSYNCSECURITYCODECONTROLLER_H

@class UIButton, UILabel, NSString;


#import "PSKeychainSyncTextEntryController.h"

@interface PSKeychainSyncSecurityCodeController : PSKeychainSyncTextEntryController {
    UIButton *_footerButton;
    UILabel *_footerLabel;
    NSString *_generatedCode;
    CGFloat _keyboardHeight;
}


@property (retain, nonatomic) NSString *firstPasscodeEntry; // ivar: _firstPasscodeEntry
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) int securityCodeType; // ivar: _securityCodeType
@property (nonatomic) BOOL showsAdvancedSettings; // ivar: _showsAdvancedSettings


-(Class)textEntryCellClass;
-(id)_configureTextEntryCell;
-(id)init;
-(id)placeholderText;
-(id)specifiers;
-(id)textEntryCell;
-(void)animatePasscodeFieldLeft:(BOOL)arg0 ;
-(void)dealloc;
-(void)didFinishEnteringText:(id)arg0 ;
-(void)dismissAlerts;
-(void)forgotSecurityCode;
-(void)generateRandomCode;
-(void)keyboardWillShow:(id)arg0 ;
-(void)showAdvancedOptions;
-(void)textEntryViewDidChange:(id)arg0 ;
-(void)updateNextButton;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif