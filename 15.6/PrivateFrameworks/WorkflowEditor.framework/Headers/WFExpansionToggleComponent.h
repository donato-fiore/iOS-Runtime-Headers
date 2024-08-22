// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFEXPANSIONTOGGLECOMPONENT_H
#define WFEXPANSIONTOGGLECOMPONENT_H



#import "CKCompositeComponent.h"
#import "CKComponent.h"

@interface WFExpansionToggleComponent : CKCompositeComponent {
    BOOL _expanded;
    CKTypedComponentAction<bool> _toggleAction;
    CKComponent *_disclosureComponent;
}




+(id)newWithLabel:(id)arg0 hintLabel:(id)arg1 labelsToAlignTo:(id)arg2 disclosureImage:(id)arg3 toggleAction:(struct CKTypedComponentAction<bool> )arg4 expanded:(BOOL)arg5 style:(struct WFParameterLayoutComponentStyle *)arg6 ;
-(void)toggleChanged;


@end


#endif