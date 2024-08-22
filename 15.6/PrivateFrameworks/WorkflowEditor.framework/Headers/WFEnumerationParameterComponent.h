// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFENUMERATIONPARAMETERCOMPONENT_H
#define WFENUMERATIONPARAMETERCOMPONENT_H

@class WFEnumerationParameter, WFVariableSubstitutableParameterState;
@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;


#import "WFParameterComponent.h"
#import "WFEnumerationSegmentedControlComponent.h"

@interface WFEnumerationParameterComponent : WFParameterComponent {
    id *_updateBlock;
}


@property (readonly, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (readonly, weak, nonatomic) WFEnumerationParameter *parameter; // ivar: _parameter
@property (readonly, nonatomic) BOOL processing; // ivar: _processing
@property (readonly, nonatomic) WFEnumerationSegmentedControlComponent *segmentedControlComponent; // ivar: _segmentedControlComponent
@property (readonly, nonatomic) WFVariableSubstitutableParameterState *state; // ivar: _state
@property (readonly, weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (readonly, weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


+(BOOL)editsMultipleValues;
+(NSUInteger)variableResultTypeForParameter:(id)arg0 ;
// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 labelsToAlignTo:(id)arg7  ;
-(id)updateBlock:(SEL)arg0 ;


@end


#endif