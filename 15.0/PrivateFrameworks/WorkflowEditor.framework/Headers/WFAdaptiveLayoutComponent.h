// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFADAPTIVELAYOUTCOMPONENT_H
#define WFADAPTIVELAYOUTCOMPONENT_H



#import "CKComponent.h"

@interface WFAdaptiveLayoutComponent : CKComponent {
    vector<CKComponent *, std::allocator<CKComponent *>> _children;
}




+(id)newWithChildren:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif