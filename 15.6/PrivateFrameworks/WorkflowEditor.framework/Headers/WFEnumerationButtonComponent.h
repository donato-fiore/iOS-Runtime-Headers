// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFENUMERATIONBUTTONCOMPONENT_H
#define WFENUMERATIONBUTTONCOMPONENT_H

@class WFEnumerationParameter, WFVariableSubstitutableParameterState;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;


#import "CKCompositeComponent.h"

@interface WFEnumerationButtonComponent : CKCompositeComponent {
    BOOL _processing;
    WFEnumerationParameter *_parameter;
    WFVariableSubstitutableParameterState *_state;
    id *_updateBlock;
    id<WFVariableProvider> *_variableProvider;
    id<WFVariableUIDelegate> *_variableUIDelegate;
    id<WFComponentNavigationContext> *_navigationContext;
}




// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6  ;


@end


#endif