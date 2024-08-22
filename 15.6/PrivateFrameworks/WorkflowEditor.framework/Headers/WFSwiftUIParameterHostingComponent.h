// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSWIFTUIPARAMETERHOSTINGCOMPONENT_H
#define WFSWIFTUIPARAMETERHOSTINGCOMPONENT_H

@class WFParameter;
@protocol WFComponentNavigationContext, WFParameterState, WFVariableProvider, WFVariableUIDelegate;


#import "CKStatefulViewComponent.h"

@interface WFSwiftUIParameterHostingComponent : CKStatefulViewComponent

@property (readonly, weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (readonly, nonatomic) WFParameterComponentOptions options; // ivar: _options
@property (readonly, nonatomic) WFParameter *parameter; // ivar: _parameter
@property (readonly, nonatomic) NSObject<WFParameterState> *state; // ivar: _state
@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (readonly, weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (readonly, weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6  ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif