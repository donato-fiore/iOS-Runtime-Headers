// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTDOCUMENTINTERFACE_H
#define _UITEXTDOCUMENTINTERFACE_H

@class NSString, NSUUID, TIDocumentState, TIKeyboardOutput, TITextInputTraits;
@protocol UITextDocumentProxy, UITextDocumentProxy_Private, _UITextDocumentInterfaceDelegate;


#import "UIInputViewControllerInterface.h"
#import "_UIInputViewControllerOutput.h"
#import "_UIInputViewControllerState.h"
#import "UITextInputMode.h"
#import "UITextInputPasswordRules.h"

@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy, UITextDocumentProxy_Private>



@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (retain, nonatomic, getter=_controllerOutput) _UIInputViewControllerOutput *controllerOutput; // ivar: _controllerOutput
@property (retain, nonatomic, getter=_controllerState) _UIInputViewControllerState *controllerState; // ivar: _controllerState
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_delegate) NSObject<_UITextDocumentInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentContextAfterInput;
@property (readonly, nonatomic) NSString *documentContextBeforeInput;
@property (readonly, copy, nonatomic) NSUUID *documentIdentifier;
@property (readonly, nonatomic) UITextInputMode *documentInputMode;
@property (readonly, nonatomic, getter=_documentState) TIDocumentState *documentState;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (readonly, nonatomic, getter=_keyboardOutput) TIKeyboardOutput *keyboardOutput; // ivar: _keyboardOutput
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) NSString *markedText;
@property (readonly, nonatomic) BOOL needsInputModeSwitchKey;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (readonly, nonatomic) NSString *selectedText;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic, getter=_textInputTraits) TITextInputTraits *textInputTraits;


-(void)_createControllerOutputIfNecessary;
-(void)_didPerformOutputOperation;
-(void)_handleInputViewControllerState:(id)arg0 ;
-(void)_setHasDictation:(BOOL)arg0 ;
-(void)_setInputModeList:(NSInteger)arg0 touchBegan:(CGFloat)arg1 fromLocation:(struct CGPoint )arg2 updatePoint:(struct CGPoint )arg3 ;
-(void)_setPrimaryLanguage:(id)arg0 ;
-(void)_setProceedShouldReturnIfPossibleForASP;
-(void)_setShouldAdvanceInputMode;
-(void)_setShouldDismiss;
-(void)_willPerformOutputOperation;
-(void)adjustTextPositionByCharacterOffset:(NSInteger)arg0 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)setForwardingInterface:(id)arg0 ;
-(void)unmarkText;


@end


#endif