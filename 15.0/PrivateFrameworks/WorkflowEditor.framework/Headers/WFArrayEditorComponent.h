// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFARRAYEDITORCOMPONENT_H
#define WFARRAYEDITORCOMPONENT_H

@class NSSet, NSArray;
@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;


#import "CKStatefulViewComponent.h"

@interface WFArrayEditorComponent : CKStatefulViewComponent

@property (readonly, nonatomic) CGFloat additionalBottomMargin; // ivar: _additionalBottomMargin
@property (readonly, copy, nonatomic) NSSet *allowedValueTypes; // ivar: _allowedValueTypes
@property (readonly, copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (readonly, nonatomic) CKTypedComponentAction<WFListEditorDeletionConfirmation *> confirmationAction; // ivar: _confirmationAction
@property (readonly, nonatomic) BOOL editable; // ivar: _editable
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (readonly, nonatomic) BOOL standaloneVariablesAsContentItems; // ivar: _standaloneVariablesAsContentItems
@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (readonly, weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (readonly, weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (readonly, nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled


// +(id)newWithItems:(id)arg0 editable:(BOOL)arg1 variableProvider:(id)arg2 variableUIDelegate:(id)arg3 navigationContext:(id)arg4 variablesDisabled:(BOOL)arg5 allowedValueTypes:(id)arg6 allowedVariableTypes:(id)arg7 standaloneVariablesAsContentItems:(BOOL)arg8 updateBlock:(id)arg9 confirmationAction:(unk)arg10 additionalBottomMargin:(struct CKTypedComponentAction<WFListEditorDeletionConfirmation *> )arg11 size:(CGFloat)arg12  ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif