// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMULTIPLEVALUEEDITORVIEWCELL_H
#define WFMULTIPLEVALUEEDITORVIEWCELL_H

@class NSSet, UIViewController, NSString, MTVisualStylingProvider;
@protocol CKComponentProvider, CKComponentHostingViewDelegate, WFParameterEventObserver, WFVariableUIDelegate, WFTextTokenEditorViewDelegate, WFMultipleValueEditorViewCellDelegate, WFComponentNavigationContext, WFVariableProvider;


#import "WFMaterialStylableTableViewCell.h"
#import "CKComponentHostingView.h"
#import "WFMultipleValueEditorViewCellContext.h"
#import "WFParameterEditorModel.h"
#import "WFTextTokenEditorView.h"

@interface WFMultipleValueEditorViewCell : WFMaterialStylableTableViewCell <CKComponentProvider, CKComponentHostingViewDelegate, WFParameterEventObserver, WFVariableUIDelegate, WFTextTokenEditorViewDelegate>



@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (weak, nonatomic) UIViewController *containingViewController; // ivar: _containingViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFMultipleValueEditorViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKComponentHostingView *hostingView; // ivar: _hostingView
@property (retain, nonatomic) WFMultipleValueEditorViewCellContext *hostingViewContext; // ivar: _hostingViewContext
@property (nonatomic) CGFloat lastWidth; // ivar: _lastWidth
@property (retain, nonatomic) WFParameterEditorModel *model; // ivar: _model
@property (weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (retain, nonatomic) MTVisualStylingProvider *strokeProvider; // ivar: _strokeProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFTextTokenEditorView *valueEditor; // ivar: _valueEditor
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled
@property (nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily


+(id)componentForModel:(id)arg0 context:(id)arg1 ;
+(id)singleButtonSlotForParameter:(id)arg0 state:(id)arg1 widgetFamily:(NSInteger)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)shouldShowTextEditor;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)beginEditingWithContext:(id)arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg0 ;
-(void)configureValueEditor;
-(void)layoutSubviews;
-(void)notifyDelegateTextUpdated;
-(void)parameterAttributesDidChange:(id)arg0 ;
// -(void)revealAction:(id)arg0 fromSourceView:(id)arg1 preScrollHandler:(id)arg2 goBackHandler:(unk)arg3 scrolledAwayHandler:(id)arg4  ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg0 allowShortcutInput:(BOOL)arg1 variableProvider:(id)arg2 completionHandler:(id)arg3 ;
-(void)textTokenEditorTextDidEndEditing:(id)arg0 ;
-(void)updateModel:(id)arg0 ;
-(void)updatedParameterState:(id)arg0 ;


@end


#endif