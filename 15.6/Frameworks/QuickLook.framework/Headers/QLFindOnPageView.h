// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLFINDONPAGEVIEW_H
#define QLFINDONPAGEVIEW_H

@class UIView, NSString, UITextInputPasswordRules;
@protocol QLFindOnPageToolbarDelegate, QLFindOnPageNavigatorInterfaceHandler, UIKeyInput, QLFindOnPageViewDelegate, QLFindOnPageNavigator;


#import "QLFindOnPageInputView.h"

@interface QLFindOnPageView : UIView <QLFindOnPageToolbarDelegate, QLFindOnPageNavigatorInterfaceHandler, UIKeyInput>

 {
    BOOL _requiresKeyboard;
    id *_dismissCompletionHandler;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<QLFindOnPageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (retain, nonatomic) QLFindOnPageInputView *findOnPageInputView; // ivar: _findOnPageInputView
@property (copy, nonatomic) NSString *findString; // ivar: _findString
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger highlightedMatchIndex; // ivar: _highlightedMatchIndex
@property (readonly, nonatomic) BOOL isShowing; // ivar: _isShowing
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) NSInteger keyboardVisibility; // ivar: _keyboardVisibility
@property (weak, nonatomic) NSObject<QLFindOnPageNavigator> *navigator; // ivar: _navigator
@property (nonatomic) NSUInteger numberOfFindMatches; // ivar: _numberOfFindMatches
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) BOOL shouldFocusTextField; // ivar: _shouldFocusTextField
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) BOOL usesNarrowLayout; // ivar: _usesNarrowLayout


-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)hasMatches;
-(BOOL)hideFindOnPage;
-(BOOL)isFocused;
-(NSUInteger)_findOptions;
-(id)findTextField;
-(id)initWithNavigator:(id)arg0 ;
-(id)inputAccessoryView;
-(id)keyCommands;
-(id)matchLabelText;
-(id)registeredKeyCommands;
-(id)textForToolbarLabel;
-(void)_advance:(id)arg0 ;
-(void)_dismiss:(id)arg0 ;
-(void)_handleKeyboardDidHide;
-(void)_handleKeyboardDidShow;
-(void)_handleKeyboardWillHide;
-(void)_handlePossibleKeyboardHideEvent:(NSInteger)arg0 forFrameChangeNotification:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg0 ;
-(void)_keyboardDidHide:(id)arg0 ;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_registerForKeyboardNotifications;
-(void)dealloc;
-(void)deleteBackward;
-(void)didMoveToSuperview;
-(void)dismissFindOnPageWithCompletionHandler:(id)arg0 ;
-(void)done;
-(void)insertText:(id)arg0 ;
-(void)navigator:(id)arg0 isDisplayingResultAtIndex:(NSUInteger)arg1 numberOfResults:(NSUInteger)arg2 ;
-(void)navigatorDoesNotHaveAnyResultToDisplay:(id)arg0 ;
-(void)next;
-(void)previous;
-(void)selectFindOnPageText;
-(void)showFindOnPage;
-(void)updateSearchText:(id)arg0 ;
-(void)updateUI;
-(void)willEnd;


@end


#endif