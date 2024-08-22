// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKINSETCOMPONENT_H
#define CKINSETCOMPONENT_H



#import "CKComponent.h"

@interface CKInsetComponent : CKComponent {
    UIEdgeInsets _insets;
    CKComponent *_component;
}




+(id)newWithInsets:(struct UIEdgeInsets )arg0 component:(id)arg1 ;
+(id)newWithView:(*void)arg0 insets:(struct UIEdgeInsets )arg1 component:(id)arg2 ;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 restrictedToSize:(struct CKComponentSize *)arg1 relativeToParentSize:(struct CGSize )arg2 ;


@end


#endif