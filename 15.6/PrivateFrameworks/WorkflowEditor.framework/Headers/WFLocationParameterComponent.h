// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOCATIONPARAMETERCOMPONENT_H
#define WFLOCATIONPARAMETERCOMPONENT_H

@class WFParameter, WFLocationParameterState;
@protocol WFComponentNavigationContext, WFVariableProvider;


#import "WFParameterComponent.h"
#import "WFVariableChooserParameterLayoutComponent.h"

@interface WFLocationParameterComponent : WFParameterComponent {
    WFParameter *_parameter;
    id *_updateBlock;
}


@property (readonly, nonatomic) WFVariableChooserParameterLayoutComponent *layoutComponent; // ivar: _layoutComponent
@property (readonly, weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (nonatomic) BOOL processing; // ivar: _processing
@property (readonly, nonatomic) WFLocationParameterState *state; // ivar: _state
@property (readonly, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider


// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 labelsToAlignTo:(id)arg7  ;
-(id)parameter;
-(id)updateBlock:(SEL)arg0 ;
-(void)presentTokenChooser:(id)arg0 ;


@end


#endif