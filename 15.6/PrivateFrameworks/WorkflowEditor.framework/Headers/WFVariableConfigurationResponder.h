// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLECONFIGURATIONRESPONDER_H
#define WFVARIABLECONFIGURATIONRESPONDER_H

@class UIResponder, NSString, UIView, UITextInputPasswordRules, WFVariable;
@protocol WFVariableConfigurationAccessoryViewDelegate, WFVariableConfigurationViewControllerDelegate, WFVariableDelegate, UIKeyInput, WFVariableConfigurationResponderDelegate;


#import "WFVariableConfigurationAccessoryView.h"
#import "WFVariableConfigurationView.h"

@interface WFVariableConfigurationResponder : UIResponder <WFVariableConfigurationAccessoryViewDelegate, WFVariableConfigurationViewControllerDelegate, WFVariableDelegate, UIKeyInput>



@property (readonly, nonatomic) WFVariableConfigurationAccessoryView *accessoryView; // ivar: _accessoryView
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) WFVariableConfigurationView *configurationView; // ivar: _configurationView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFVariableConfigurationResponderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) NSUInteger exitAccessory; // ivar: _exitAccessory
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (weak, nonatomic) UIView *nextResponder; // ivar: _nextResponder
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSUInteger resultType;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) BOOL showsAccessoryActions; // ivar: _showsAccessoryActions
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) WFVariable *variable; // ivar: _variable


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithVariable:(id)arg0 ;
-(id)inputAccessoryView;
-(id)inputView;
-(void)accessoryViewDidDelete:(id)arg0 ;
-(void)accessoryViewDidDismiss:(id)arg0 ;
-(void)accessoryViewDidRename:(id)arg0 ;
-(void)accessoryViewDidReturnToKeyboard:(id)arg0 ;
-(void)accessoryViewDidRevealAction:(id)arg0 ;
-(void)configurationViewController:(id)arg0 didUpdateVariable:(id)arg1 ;
// -(void)configurationViewController:(id)arg0 presentPromptWithTitle:(id)arg1 message:(id)arg2 fieldConfigurationHandler:(id)arg3 commitHandler:(unk)arg4  ;
-(void)dealloc;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)updateAccessoryView;
-(void)variableDidChange:(id)arg0 ;


@end


#endif