// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTVIEWSET_H
#define UIINPUTVIEWSET_H


#import <Foundation/Foundation.h>

#import "UIInputViewController.h"
#import "UIResponder.h"
#import "UIView.h"
#import "UIKeyboard.h"
#import "UIKBRenderConfig.h"

@interface UIInputViewSet : NSObject {
    BOOL _restoreUsingBecomeFirstResponder;
}


@property (readonly, nonatomic) BOOL _inputViewIsSplit;
@property (retain, nonatomic) UIInputViewController *accessoryViewController; // ivar: _accessoryViewController
@property (weak, nonatomic) UIResponder *accessoryViewNextResponder; // ivar: _accessoryViewNextResponder
@property (retain, nonatomic) UIInputViewController *assistantViewController; // ivar: _assistantViewController
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) BOOL hasNonPlaceholderViews;
@property (retain, nonatomic) UIView *inputAccessoryView; // ivar: _inputAccessoryView
@property (readonly, nonatomic) CGRect inputAccessoryViewBounds;
@property (retain, nonatomic) UIView *inputAssistantView; // ivar: _inputAssistantView
@property (readonly, nonatomic) CGRect inputAssistantViewBounds; // ivar: _inputAssistantViewBounds
@property (retain, nonatomic) UIView *inputView; // ivar: _inputView
@property (readonly, nonatomic) CGRect inputViewBounds;
@property (retain, nonatomic) UIInputViewController *inputViewController; // ivar: _inputViewController
@property (readonly, nonatomic) BOOL inputViewKeyboardCanSplit;
@property (nonatomic) BOOL isCustomInputView; // ivar: _isCustomInputView
@property (readonly, nonatomic) BOOL isInputAccessoryViewPlaceholder;
@property (readonly, nonatomic) BOOL isInputAssistantViewPlaceholder;
@property (readonly, nonatomic) BOOL isInputViewPlaceholder;
@property (readonly, nonatomic) BOOL isLocalMinimumHeightInputView;
@property (readonly, nonatomic) BOOL isNullInputView; // ivar: _isNullInputView
@property (nonatomic) BOOL isRemoteKeyboard; // ivar: _isRemoteKeyboard
@property (readonly, nonatomic) BOOL isSplit; // ivar: _isSplit
@property (readonly, nonatomic) UIKeyboard *keyboard;
@property (readonly, nonatomic) UIView *layeringView;
@property (retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // ivar: _restorableRenderConfig
@property (weak, nonatomic) UIResponder *restorableResponder; // ivar: _restorableResponder
@property (nonatomic) BOOL restoreUsingBecomeFirstResponder;
@property (readonly, nonatomic) UIView *splitExemptSubview;
@property (nonatomic) CGFloat splitHeightDelta; // ivar: _splitHeightDelta
@property (readonly, nonatomic) BOOL supportsSplit;
@property (readonly, nonatomic) BOOL usesKeyClicks;
@property (readonly, nonatomic) BOOL visible;


+(id)emptyInputSet;
+(id)inputSetWithInputView:(id)arg0 accessoryView:(id)arg1 ;
+(id)inputSetWithInputView:(id)arg0 accessoryView:(id)arg1 assistantView:(id)arg2 ;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg0 ;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg0 assistantView:(id)arg1 ;
+(id)inputSetWithOriginalInputSet:(id)arg0 duplicateInputView:(BOOL)arg1 duplicateInputAccessoryView:(BOOL)arg2 duplicateInputAssistantView:(BOOL)arg3 ;
+(id)inputSetWithPlaceholderAndAccessoryView:(id)arg0 ;
-(BOOL)__isCKAccessoryView;
-(BOOL)_accessorySuppressesShadow;
-(BOOL)_actLikeInputAccessoryViewSupportsSplit;
-(BOOL)_isFullscreen;
-(BOOL)_isKeyboard;
-(BOOL)canAnimateToInputViewSet:(id)arg0 ;
-(BOOL)containsResponder:(id)arg0 ;
-(BOOL)containsView:(id)arg0 ;
-(BOOL)hierarchyContainsView:(id)arg0 ;
-(BOOL)inSyncWithOrientation:(NSInteger)arg0 forKeyboard:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStrictSupersetOfViewSet:(id)arg0 ;
-(BOOL)setAccessoryViewVisible:(BOOL)arg0 delay:(CGFloat)arg1 ;
-(NSInteger)keyboardOrientation:(id)arg0 ;
-(id)_splittableInputAccessoryView;
-(id)_themableInputAccessoryView;
-(id)description;
-(id)initWithInputView:(id)arg0 accessoryView:(id)arg1 assistantView:(id)arg2 isKeyboard:(BOOL)arg3 ;
-(id)inputSetWithInputAccessoryViewFromInputSet:(id)arg0 ;
-(id)inputSetWithInputAccessoryViewOnly;
-(id)normalizePlaceholders;
-(struct CGRect )_leftInputViewSetFrame;
-(struct CGRect )_rightInputViewSetFrame;
-(void)_beginSplitTransitionIfNeeded;
-(void)_endSplitTransitionIfNeeded;
-(void)_forceRestoreUsingBecomeFirstResponder:(BOOL)arg0 ;
-(void)_setRenderConfig:(id)arg0 ;
-(void)_setSplitProgress:(CGFloat)arg0 ;
-(void)dealloc;
-(void)inheritNullState:(id)arg0 ;
-(void)refreshPresentation;


@end


#endif