// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMODULEINDENTATIONCOMPONENT_H
#define WFMODULEINDENTATIONCOMPONENT_H



#import "CKComponent.h"

@interface WFModuleIndentationComponent : CKComponent {
    CKComponent *_component;
    NSUInteger _indentationLevel;
}




+(id)newWithIndentationLevel:(NSUInteger)arg0 component:(id)arg1 ;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 restrictedToSize:(struct CKComponentSize *)arg1 relativeToParentSize:(struct CGSize )arg2 ;


@end


#endif