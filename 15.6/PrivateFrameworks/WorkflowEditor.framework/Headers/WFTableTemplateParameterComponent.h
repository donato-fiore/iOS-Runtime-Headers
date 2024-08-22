// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTABLETEMPLATEPARAMETERCOMPONENT_H
#define WFTABLETEMPLATEPARAMETERCOMPONENT_H

@class WFTableTemplateParameterState, WFTableTemplateParameter;
@protocol WFVariableProvider;


#import "WFParameterComponent.h"

@interface WFTableTemplateParameterComponent : WFParameterComponent {
    WFTableTemplateParameterState *_state;
    id<WFVariableProvider> *_variableProvider;
    id *_updateBlock;
}


@property (readonly, weak, nonatomic) WFTableTemplateParameter *parameter; // ivar: _parameter


// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 labelsToAlignTo:(id)arg7  ;
-(id)updateBlock:(SEL)arg0 ;
-(void)handleParameterLayoutPressed;
-(void)rowComponent:(id)arg0 deletedAtIndex:(NSUInteger)arg1 ;
-(void)rowComponent:(id)arg0 minusTappedAtIndex:(NSUInteger)arg1 ;
-(void)rowComponentTapped;


@end


#endif