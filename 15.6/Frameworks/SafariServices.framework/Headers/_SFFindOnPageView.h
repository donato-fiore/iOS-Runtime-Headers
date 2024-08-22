// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFFINDONPAGEVIEW_H
#define _SFFINDONPAGEVIEW_H

@class UIView, NSString, UITextInputPasswordRules, WKWebView;
@protocol _SFFindOnPageToolbarDelegate, _WKFindDelegate, UIKeyInput, _SFFindOnPageViewDelegate;


#import "_SFFindOnPageToolbar.h"

@interface _SFFindOnPageView : UIView <_SFFindOnPageToolbarDelegate, _WKFindDelegate, UIKeyInput>

 {
    BOOL _requiresKeyboard;
    _SFFindOnPageToolbar *_toolbar;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<_SFFindOnPageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (copy, nonatomic) NSString *findString; // ivar: _findString
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger highlightedMatchIndex; // ivar: _highlightedMatchIndex
@property (readonly, nonatomic) BOOL isFocused;
@property (readonly, nonatomic) BOOL isShowing; // ivar: _isShowing
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) NSUInteger numberOfFindMatches; // ivar: _numberOfFindMatches
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (readonly, nonatomic) BOOL shouldDisplayFindNextPreviousInDiscoverabilityHUD;
@property (nonatomic) BOOL shouldFocusTextField; // ivar: _shouldFocusTextField
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) BOOL usesNarrowLayout; // ivar: _usesNarrowLayout
@property (weak, nonatomic) WKWebView *webView; // ivar: _webView


+(NSInteger)_undefinedMatchIndex;
+(NSUInteger)_maximumNumberOfMatches;
+(NSUInteger)_undefinedNumberOfMatches;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)_wantsPriorityOverFocusUpdates;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)hasMatches;
-(BOOL)hideFindOnPage;
-(NSUInteger)_findOptions;
-(id)findTextField;
-(id)initWithDelegate:(id)arg0 ;
-(id)inputAccessoryView;
-(id)keyCommands;
-(id)matchLabelText;
-(id)textForToolbarLabel;
-(id)toolbar;
-(void)_selectAllIfNeeded;
-(void)_setFindingInWebViewIfNeeded;
-(void)_webView:(id)arg0 didCountMatches:(NSUInteger)arg1 forString:(id)arg2 ;
-(void)_webView:(id)arg0 didFailToFindString:(id)arg1 ;
-(void)_webView:(id)arg0 didFindMatches:(NSUInteger)arg1 forString:(id)arg2 withMatchIndex:(NSInteger)arg3 ;
-(void)cancelKeyPressed;
-(void)deleteBackward;
-(void)didMoveToSuperview;
-(void)dismissFindOnPage;
-(void)done;
-(void)insertText:(id)arg0 ;
-(void)next;
-(void)nextFindResultKeyPressed;
-(void)prepareFindOnPage;
-(void)prepareFindOnPageWithString:(id)arg0 ;
-(void)previous;
-(void)previousFindResultKeyPressed;
-(void)selectFindOnPageText;
-(void)showFindOnPage;
-(void)takeFindStringFromSelection;
-(void)updateSearchText:(id)arg0 ;
-(void)updateUI;


@end


#endif