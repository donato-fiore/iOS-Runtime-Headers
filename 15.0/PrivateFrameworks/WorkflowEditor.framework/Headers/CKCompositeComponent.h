// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPOSITECOMPONENT_H
#define CKCOMPOSITECOMPONENT_H



#import "CKComponent.h"

@interface CKCompositeComponent : CKComponent {
    CKComponent *_component;
}




+(id)newWithComponent:(id)arg0 ;
+(id)newWithView:(*void)arg0 component:(id)arg1 ;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
-(id)viewForAnimation;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 restrictedToSize:(struct CKComponentSize *)arg1 relativeToParentSize:(struct CGSize )arg2 ;


@end


#endif