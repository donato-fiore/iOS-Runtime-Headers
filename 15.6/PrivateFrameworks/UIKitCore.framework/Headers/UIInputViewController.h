// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTVIEWCONTROLLER_H
#define UIINPUTVIEWCONTROLLER_H

@class NSString;
@protocol _UITextDocumentInterfaceDelegate, UITextInputDelegate, UITextDocumentProxy;


#import "UIViewController.h"
#import "UIKeyboard.h"
#import "UIInputView.h"

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate>

 {
    BOOL _commitInputModeOnTouchEnd;
    BOOL _inputModeListIsShown;
    BOOL _viewConformsToRemotePlaceholder;
    CGFloat _touchBegan;
}


@property (nonatomic) BOOL _alignsToContentViewController; // ivar: _alignsToContentViewController
@property (nonatomic, setter=_setAutosizeToCurrentKeyboard:) BOOL _autosizeToCurrentKeyboard; // ivar: _autosizeToCurrentKeyboard
@property (readonly, nonatomic) BOOL _isPlaceholder;
@property (readonly, nonatomic) UIKeyboard *_keyboard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDictationKey; // ivar: _hasDictationKey
@property (readonly, nonatomic) BOOL hasFullAccess;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIInputView *inputView;
@property (readonly, nonatomic) BOOL needsInputModeSwitchKey;
@property (copy, nonatomic) NSString *primaryLanguage; // ivar: _primaryLanguage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<UITextDocumentProxy> *textDocumentProxy; // ivar: _textDocumentProxy


+(BOOL)_requiresProxyInterface;
+(void)presentDialogForAddingKeyboard;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)_canResignIfContainsFirstResponder;
-(BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
-(BOOL)_usesCustomBackground;
-(id)_compatibilityController;
-(id)_extensionContext;
-(id)_proxyInterface;
-(id)_textDocumentInterface;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )_systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_didResetDocumentState;
-(void)_setExtensionContextUUID:(id)arg0 ;
-(void)_setupInputController;
-(void)_updateConformanceCache;
-(void)_willResetDocumentState;
-(void)advanceToNextInputMode;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)dismissKeyboard;
-(void)handleInputModeListFromView:(id)arg0 withEvent:(id)arg1 ;
-(void)loadView;
-(void)proceedShouldReturnIfPossibleForASP;
-(void)requestSupplementaryLexiconWithCompletion:(id)arg0 ;
-(void)returnToPreviousInputMode;
-(void)selectionDidChange:(id)arg0 ;
-(void)selectionWillChange:(id)arg0 ;
-(void)setView:(id)arg0 ;
-(void)set_autosizeToCurrentKeyboard:(BOOL)arg0 ;
-(void)textDidChange:(id)arg0 ;
-(void)textWillChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif