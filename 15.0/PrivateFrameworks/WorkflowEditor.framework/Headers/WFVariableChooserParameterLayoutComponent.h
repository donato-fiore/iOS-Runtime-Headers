// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLECHOOSERPARAMETERLAYOUTCOMPONENT_H
#define WFVARIABLECHOOSERPARAMETERLAYOUTCOMPONENT_H

@class WFParameter, WFVariable;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;


#import "CKCompositeComponent.h"
#import "CKComponent.h"

@interface WFVariableChooserParameterLayoutComponent : CKCompositeComponent {
    WFParameter *_parameter;
    WFVariable *_variable;
    id<WFVariableProvider> *_variableProvider;
    id<WFVariableUIDelegate> *_variableUIDelegate;
    CKComponent *_controlComponent;
    id<WFComponentNavigationContext> *_navigationContext;
    BOOL _chooserCanClear;
    id *_updateBlock;
}




// +(id)newWithLabel:(id)arg0 labelsToAlignTo:(id)arg1 parameter:(id)arg2 variable:(id)arg3 updateBlock:(id)arg4 options:(unk)arg5 chooserCanClear:(struct WFParameterComponentOptions )arg6 variableProvider:(BOOL)arg7 variableUIDelegate:(id)arg8 navigationContext:(id)arg9 controlResistance:(id)arg10 controlComponent:(struct WFCompressionResistance *)arg11  ;
-(void)presentTokenChooser:(id)arg0 ;


@end


#endif