// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFROWTEMPLATEPARAMETERCOMPONENT_H
#define WFROWTEMPLATEPARAMETERCOMPONENT_H

@class WFRowTemplateParameterState;


#import "CKCompositeComponent.h"

@interface WFRowTemplateParameterComponent : CKCompositeComponent {
    WFRowTemplateParameterState *_state;
    NSUInteger _rowIndex;
    CKTypedComponentAction<unsigned long> _deleteAction;
}




+(id)itemFont;
// +(id)newWithState:(id)arg0 rowIndex:(NSUInteger)arg1 updateBlock:(id)arg2 deleteAction:(unk)arg3 tappedAction:(struct CKTypedComponentAction<unsigned long> )arg4 options:(struct CKTypedComponentAction<> )arg5 style:(struct WFRowTemplateParameterComponentOptions )arg6 size:(struct WFWrappingStackLayoutComponentStyle *)arg7 variableProvider:(struct CKComponentSize *)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10  ;
+(id)numberFormatter;
-(void)deleteButtonPressed;


@end


#endif