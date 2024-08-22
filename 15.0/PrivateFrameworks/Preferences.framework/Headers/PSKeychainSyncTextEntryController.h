// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSKEYCHAINSYNCTEXTENTRYCONTROLLER_H
#define PSKEYCHAINSYNCTEXTENTRYCONTROLLER_H

@class UIView<UIKeyInput>, NSString;
@protocol KeychainSyncPasscodeFieldDelegate;


#import "PSKeychainSyncViewController.h"
#import "PSTableCell.h"
#import "PSSpecifier.h"

@interface PSKeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate>

 {
    PSTableCell *_textEntryCell;
    UIView<UIKeyInput> *_textEntryView;
    PSSpecifier *_textEntrySpecifier;
}


@property (nonatomic) BOOL convertsNumeralsToASCII; // ivar: _convertsNumeralsToASCII
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesNextButton; // ivar: _hidesNextButton
@property (nonatomic) NSUInteger numberOfPasscodeFields; // ivar: _numberOfPasscodeFields
@property (nonatomic) BOOL secureTextEntry; // ivar: _secureTextEntry
@property (readonly) Class superclass;
@property (nonatomic) int textEntryType; // ivar: _textEntryType
@property (nonatomic) BOOL textFieldHasRoundBorder; // ivar: _textFieldHasRoundBorder
@property (retain, nonatomic) NSString *textValue; // ivar: _textValue


-(BOOL)becomeFirstResponder;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(Class)textEntryCellClass;
-(id)getTextValueForSpecifier:(id)arg0 ;
-(id)init;
-(id)placeholderText;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)textEntryCell;
-(id)textEntrySpecifier;
-(id)textEntryText;
-(id)textEntryView;
-(void)dealloc;
-(void)didFinishEnteringText:(id)arg0 ;
-(void)loadView;
-(void)nextPressed;
-(void)passcodeField:(id)arg0 didUpdateEnteredPasscode:(id)arg1 ;
-(void)setTextEntryText:(id)arg0 ;
-(void)textEntryViewDidChange:(id)arg0 ;
-(void)textFieldChanged:(id)arg0 ;
-(void)updateNextButton;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willBecomeActive;


@end


#endif