// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFQUANTITYFIELDPARAMETERCOMPONENT_H
#define WFQUANTITYFIELDPARAMETERCOMPONENT_H

@class WFQuantityParameterState, WFQuantityFieldParameter;
@protocol WFComponentNavigationContext;


#import "WFParameterComponent.h"

@interface WFQuantityFieldParameterComponent : WFParameterComponent {
    WFQuantityParameterState *_state;
    id<WFComponentNavigationContext> *_navigationContext;
    id *_updateBlock;
}


@property (readonly, weak, nonatomic) WFQuantityFieldParameter *parameter; // ivar: _parameter


// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 labelsToAlignTo:(id)arg7  ;
-(id)updateBlock:(SEL)arg0 ;
-(void)buttonTapped:(id)arg0 ;


@end


#endif