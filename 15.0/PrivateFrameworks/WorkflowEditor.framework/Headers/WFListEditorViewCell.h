// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFLISTEDITORVIEWCELL_H
#define WFLISTEDITORVIEWCELL_H

@class UITableViewCell, NSSet, NSString, UIViewController, UIButton, WFPropertyListParameterValue;
@protocol WFTextTokenEditorViewDelegate, WFListEditorViewDelegate, WFVariableUIDelegate, WFListEditorViewCellDelegate, WFComponentNavigationContext, NSObject, WFVariableProvider;


#import "WFTextTokenChooser.h"
#import "WFTextTokenEditorView.h"
#import "WFVariableConfigurationButton.h"

@interface WFListEditorViewCell : UITableViewCell <WFTextTokenEditorViewDelegate, WFListEditorViewDelegate, WFVariableUIDelegate>



@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFListEditorViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (weak, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (nonatomic) BOOL standaloneVariablesAsContentItems; // ivar: _standaloneVariablesAsContentItems
@property (readonly) Class superclass;
@property (retain, nonatomic) WFTextTokenChooser *textTokenChooser; // ivar: _textTokenChooser
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (copy, nonatomic) id *updateStateBlock; // ivar: _updateStateBlock
@property (copy, nonatomic) NSObject<NSObject> *value; // ivar: _value
@property (readonly, nonatomic) UIButton *valueButton; // ivar: _valueButton
@property (readonly, nonatomic) WFTextTokenEditorView *valueEditor; // ivar: _valueEditor
@property (readonly, nonatomic) WFPropertyListParameterValue *valueEditorValue;
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (readonly, nonatomic) WFVariableConfigurationButton *variableValueButton; // ivar: _variableValueButton
@property (nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled


-(BOOL)becomeFirstResponder;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)beginEditingWithContext:(id)arg0 ;
-(void)collectionValueUpdatedWithCount:(NSUInteger)arg0 ;
-(void)configureEditorViewController:(id)arg0 ;
-(void)layoutSubviews;
-(void)listEditorView:(id)arg0 didUpdateWithItem:(id)arg1 ;
-(void)notifyDelegateTextUpdated;
-(void)notifyDelegateTextUpdatedThrottled;
// -(void)revealAction:(id)arg0 fromSourceView:(id)arg1 preScrollHandler:(id)arg2 goBackHandler:(unk)arg3 scrolledAwayHandler:(id)arg4  ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg0 allowExtensionInput:(BOOL)arg1 variableProvider:(id)arg2 completionHandler:(id)arg3 ;
-(void)textTokenEditorTextDidChange:(id)arg0 ;
-(void)textTokenEditorTextDidEndEditing:(id)arg0 ;
-(void)updateEditorBlocks;
-(void)updateValueEditorResultType;
-(void)updateValueEditorWithValue:(id)arg0 ;
-(void)updateWithValueState:(id)arg0 ;
-(void)valueButtonTapped:(id)arg0 ;
-(void)variableValueChanged:(id)arg0 ;
-(void)variableValueCleared:(id)arg0 ;


@end


#endif