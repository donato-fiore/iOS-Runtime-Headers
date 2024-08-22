// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLEINPUTCOORDINATOR_H
#define WFVARIABLEINPUTCOORDINATOR_H

@class NSSet, NSString, UIView, UIResponder<WFInputViewMutable>, UIColor, WFVariableSuggester;
@protocol WFVariableShortcutsBarDelegate, WFVariableShortcutsTrayDelegate, WFVariableSuggesterDelegate, WFVariableObserver, WFVariableProvider, WFVariableTypingContext, WFVariableUIDelegate;

#import <Foundation/Foundation.h>

#import "WFVariableShortcutsBar.h"
#import "WFVariableShortcutsTray.h"

@interface WFVariableInputCoordinator : NSObject <WFVariableShortcutsBarDelegate, WFVariableShortcutsTrayDelegate, WFVariableSuggesterDelegate, WFVariableObserver>



@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (copy, nonatomic) id *customButtonBlock; // ivar: _customButtonBlock
@property (copy, nonatomic) NSString *customButtonTitle; // ivar: _customButtonTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *inputViewWhenTrayCollapsed; // ivar: _inputViewWhenTrayCollapsed
@property (nonatomic) CGRect previousFrame; // ivar: _previousFrame
@property (weak, nonatomic) UIResponder<WFInputViewMutable> *responder; // ivar: _responder
@property (retain, nonatomic) WFVariableShortcutsBar *shortcutsBar; // ivar: _shortcutsBar
@property (retain, nonatomic) WFVariableShortcutsTray *shortcutsTray; // ivar: _shortcutsTray
@property (nonatomic) BOOL showsDoneButton; // ivar: _showsDoneButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic) BOOL undocked; // ivar: _undocked
@property (copy, nonatomic) id *variableBlock; // ivar: _variableBlock
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (retain, nonatomic) WFVariableSuggester *variableSuggester; // ivar: _variableSuggester
@property (weak, nonatomic) NSObject<WFVariableTypingContext> *variableTypingContext; // ivar: _variableTypingContext
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


-(BOOL)showsMagicVariables;
-(BOOL)showsUserDefinedVariables;
-(id)init;
-(id)specialVariables;
-(void)availableVariablesDidChange;
-(void)collapseTrayAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)reloadCurrentVariables;
-(void)revealTray;
-(void)shortcutsBar:(id)arg0 didSelectVariable:(id)arg1 ;
-(void)shortcutsBarDidDismiss:(id)arg0 ;
-(void)shortcutsBarDidOpenTray:(id)arg0 ;
-(void)shortcutsBarDidSelectCustomButton:(id)arg0 ;
-(void)shortcutsBarDidSelectMagicVariable:(id)arg0 ;
-(void)showActionOutputPicker;
-(void)updateInputViews;
-(void)variableShortcutsTray:(id)arg0 didSelectVariable:(id)arg1 ;
-(void)variableShortcutsTrayDidSelectMagicVariable:(id)arg0 ;
-(void)variableSuggesterSuggestionsDidChange:(id)arg0 ;


@end


#endif