// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDICTIONARYEDITORCOMPONENT_H
#define WFDICTIONARYEDITORCOMPONENT_H

@class NSSet, NSArray, NSString;
@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;


#import "CKStatefulViewComponent.h"

@interface WFDictionaryEditorComponent : CKStatefulViewComponent

@property (readonly, nonatomic) CGFloat additionalBottomMargin; // ivar: _additionalBottomMargin
@property (readonly, copy, nonatomic) NSSet *allowedValueTypes; // ivar: _allowedValueTypes
@property (readonly, copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (readonly, nonatomic) BOOL editable; // ivar: _editable
@property (readonly, nonatomic) NSArray *keyValuePairs; // ivar: _keyValuePairs
@property (readonly, copy, nonatomic) NSString *localizedNewItemTypeName; // ivar: _localizedNewItemTypeName
@property (readonly, weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (readonly, weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (readonly, weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (readonly, nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled


// +(id)newWithKeyValuePairs:(id)arg0 variableProvider:(id)arg1 variableUIDelegate:(id)arg2 navigationContext:(id)arg3 localizedNewItemTypeName:(id)arg4 variablesDisabled:(BOOL)arg5 allowedValueTypes:(id)arg6 allowedVariableTypes:(id)arg7 editable:(BOOL)arg8 updateBlock:(id)arg9 additionalBottomMargin:(unk)arg10 size:(CGFloat)arg11  ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif