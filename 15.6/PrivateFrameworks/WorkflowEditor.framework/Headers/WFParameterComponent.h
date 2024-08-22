// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPARAMETERCOMPONENT_H
#define WFPARAMETERCOMPONENT_H

@class WFParameter;


#import "CKCompositeComponent.h"

@interface WFParameterComponent : CKCompositeComponent

@property (readonly, weak, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) id *updateBlock;


+(BOOL)editsMultipleValues;
// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3 variableProvider:(struct WFParameterComponentOptions )arg4 variableUIDelegate:(id)arg5 navigationContext:(id)arg6 labelsToAlignTo:(id)arg7  ;


@end


#endif