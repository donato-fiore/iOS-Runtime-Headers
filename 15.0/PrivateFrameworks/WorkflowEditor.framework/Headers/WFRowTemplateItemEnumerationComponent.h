// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFROWTEMPLATEITEMENUMERATIONCOMPONENT_H
#define WFROWTEMPLATEITEMENUMERATIONCOMPONENT_H

@class NSArray, WFVariable, NSDictionary, NSString, NSSet;
@protocol NSCopying, WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;


#import "CKCompositeComponent.h"

@interface WFRowTemplateItemEnumerationComponent : CKCompositeComponent {
    id *_updateBlock;
    NSArray *_possibleValues;
    NSObject<NSCopying> *_selectedValue;
    WFVariable *_variable;
    NSDictionary *_labelMapping;
    NSString *_prompt;
    NSSet *_allowedVariableTypes;
    BOOL _variablesDisabled;
    id<WFVariableProvider> *_variableProvider;
    id<WFVariableUIDelegate> *_variableUIDelegate;
    id<WFComponentNavigationContext> *_navigationContext;
}




// +(id)newWithPossibleValues:(id)arg0 labels:(id)arg1 selectedValue:(id)arg2 prompt:(id)arg3 identifier:(id)arg4 updateBlock:(id)arg5 options:(unk)arg6 size:(struct WFRowTemplateItemEnumerationComponentOptions )arg7 variableProvider:(struct CKComponentSize *)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10  ;
-(void)buttonTapped:(id)arg0 ;


@end


#endif