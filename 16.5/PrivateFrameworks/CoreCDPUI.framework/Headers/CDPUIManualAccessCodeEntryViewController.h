// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUIMANUALACCESSCODEENTRYVIEWCONTROLLER_H
#define CDPUIMANUALACCESSCODEENTRYVIEWCONTROLLER_H

@class OBWelcomeController, UIStackView, NSString, UILabel, UITextView;
@protocol CDPUIAccessCodeEntryTextFieldDelegate, CDPUIManualAccessCodeEntryViewControllerDelegate;


#import "CDPUIAccessCodeEntryTextField.h"

@interface CDPUIManualAccessCodeEntryViewController : OBWelcomeController <CDPUIAccessCodeEntryTextFieldDelegate>



@property (retain, nonatomic) UIStackView *codeEntryStackView; // ivar: _codeEntryStackView
@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CDPUIManualAccessCodeEntryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CDPUIAccessCodeEntryTextField *entryTextView; // ivar: _entryTextView
@property (retain, nonatomic) UILabel *errorLabelView; // ivar: _errorLabelView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextView *prefixView; // ivar: _prefixView
@property (readonly) Class superclass;


-(id)_accessCodeEntryStackView;
-(id)_labelView;
-(id)_manualAccessCodeTextView;
-(id)_wrappingKeySubstringFromAccessKey:(id)arg0 ;
-(id)init;
-(void)_setupView;
-(void)accessCodeEntryTextFieldDidReturn:(id)arg0 ;
-(void)accessCodeEntryTextFieldDidUpdate:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif