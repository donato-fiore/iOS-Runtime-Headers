// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNUMBERFIELDPARAMETERCOMPONENT_H
#define WFNUMBERFIELDPARAMETERCOMPONENT_H

@class WFParameter;


#import "WFParameterComponent.h"

@interface WFNumberFieldParameterComponent : WFParameterComponent {
    WFParameter *_parameter;
    id *_updateBlock;
}




// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 labelsToAlignTo:(id)arg7  ;
-(id)parameter;
-(id)updateBlock:(SEL)arg0 ;


@end


#endif