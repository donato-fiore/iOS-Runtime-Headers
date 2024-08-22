// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMULTIPLEVALUEEDITORCOMPONENT_H
#define WFMULTIPLEVALUEEDITORCOMPONENT_H

@class NSSet, MTVisualStylingProvider, UIColor, WFParameter, WFMultipleValueParameterState;
@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;


#import "CKStatefulViewComponent.h"

@interface WFMultipleValueEditorComponent : CKStatefulViewComponent

@property (readonly, nonatomic) CGFloat additionalBottomMargin; // ivar: _additionalBottomMargin
@property (readonly, copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (readonly, nonatomic) CKTypedComponentAction<WFListEditorDeletionConfirmation *> confirmationAction; // ivar: _confirmationAction
@property (readonly, nonatomic) BOOL editable; // ivar: _editable
@property (readonly, nonatomic) MTVisualStylingProvider *fillProvider; // ivar: _fillProvider
@property (readonly, nonatomic) NSInteger maximumItemsNumber; // ivar: _maximumItemsNumber
@property (readonly, weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (readonly, nonatomic) UIColor *overridingBackgroundColor; // ivar: _overridingBackgroundColor
@property (readonly, nonatomic) WFParameter *parameter; // ivar: _parameter
@property (readonly, nonatomic) WFMultipleValueParameterState *state; // ivar: _state
@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (readonly, weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (readonly, weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (readonly, nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled
@property (readonly, nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily


// +(id)newWithParameter:(id)arg0 state:(id)arg1 editable:(BOOL)arg2 widgetFamily:(NSInteger)arg3 variableProvider:(id)arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 variablesDisabled:(BOOL)arg7 allowedVariableTypes:(id)arg8 updateBlock:(id)arg9 confirmationAction:(unk)arg10 additionalBottomMargin:(struct CKTypedComponentAction<WFListEditorDeletionConfirmation *> )arg11 fillProvider:(CGFloat)arg12 overridingBackgroundColor:(id)arg13 size:(id)arg14  ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif