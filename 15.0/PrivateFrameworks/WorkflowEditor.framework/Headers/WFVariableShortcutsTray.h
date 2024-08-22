// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLESHORTCUTSTRAY_H
#define WFVARIABLESHORTCUTSTRAY_H

@class UIInputView, NSString, UIImageView, NSArray;
@protocol WFVariablesViewControllerDelegate, WFVariableShortcutsTrayDelegate, WFVariableProvider;


#import "WFVariablesViewController.h"

@interface WFVariableShortcutsTray : UIInputView <WFVariablesViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFVariableShortcutsTrayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *keyboardImageView; // ivar: _keyboardImageView
@property (nonatomic) BOOL showsMagicVariableButton;
@property (nonatomic) BOOL showsUserDefinedVariables;
@property (copy, nonatomic) NSArray *specialVariables;
@property (retain, nonatomic) WFVariablesViewController *specialVariablesViewController; // ivar: _specialVariablesViewController
@property (copy, nonatomic) NSArray *suggestedVariables;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *userDefinedVariableNames;
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider;
@property (retain, nonatomic) WFVariablesViewController *variablesViewController; // ivar: _variablesViewController


-(id)initWithFrame:(struct CGRect )arg0 inputViewStyle:(NSInteger)arg1 ;
-(id)keyboardWindow;
-(void)obsureWithCompletion:(id)arg0 ;
-(void)prepareReveal;
-(void)reveal;
-(void)variablesViewController:(id)arg0 didSelectVariable:(id)arg1 ;
-(void)variablesViewControllerDidSelectMagicVariable:(id)arg0 ;


@end


#endif