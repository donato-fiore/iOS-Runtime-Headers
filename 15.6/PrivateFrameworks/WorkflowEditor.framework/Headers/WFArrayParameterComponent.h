// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFARRAYPARAMETERCOMPONENT_H
#define WFARRAYPARAMETERCOMPONENT_H

@class WFArrayParameterState, WFArrayParameter;


#import "WFParameterComponent.h"

@interface WFArrayParameterComponent : WFParameterComponent {
    WFArrayParameterState *_state;
    id *_updateBlock;
}


@property (readonly, weak, nonatomic) WFArrayParameter *parameter; // ivar: _parameter


+(BOOL)standaloneVariablesAsContentItems;
+(Class)stateClass;
// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 labelsToAlignTo:(id)arg7  ;
-(id)updateBlock:(SEL)arg0 ;
-(void)arrayEditor:(id)arg0 confirmDeletion:(id)arg1 ;
-(void)notifyParameterObserverWithValues:(id)arg0 updateItem:(id)arg1 ;


@end


#endif