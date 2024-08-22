// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSTATICLAYOUTCOMPONENT_H
#define CKSTATICLAYOUTCOMPONENT_H



#import "CKComponent.h"

@interface CKStaticLayoutComponent : CKComponent {
    vector<CKStaticLayoutComponentChild, std::allocator<CKStaticLayoutComponentChild>> _children;
}




+(id)newWithChildren:(*void)arg0 ;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 children:(*void)arg2 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif