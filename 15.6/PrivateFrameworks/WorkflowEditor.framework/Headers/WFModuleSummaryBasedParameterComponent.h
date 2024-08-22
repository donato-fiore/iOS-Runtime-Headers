// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMODULESUMMARYBASEDPARAMETERCOMPONENT_H
#define WFMODULESUMMARYBASEDPARAMETERCOMPONENT_H

@class WFParameter;
@protocol WFComponentNavigationContext, WFParameterState, WFVariableProvider, WFVariableUIDelegate;


#import "WFParameterComponent.h"
#import "WFSlotTemplateSlot.h"
#import "WFModuleSummaryBasedParameterComponentStateWriter.h"

@interface WFModuleSummaryBasedParameterComponent : WFParameterComponent {
    WFParameter *_parameter;
}


@property (readonly, nonatomic) WFSlotTemplateSlot *buttonSlot; // ivar: _buttonSlot
@property (readonly, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (readonly, nonatomic) NSObject<WFParameterState> *state; // ivar: _state
@property (readonly, nonatomic) WFModuleSummaryBasedParameterComponentStateWriter *stateWriter; // ivar: _stateWriter
@property (readonly, weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (readonly, weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 labelsToAlignTo:(id)arg7  ;
+(id)singleButtonSlotForParameter:(id)arg0 state:(id)arg1 ;
-(id)parameter;


@end


#endif