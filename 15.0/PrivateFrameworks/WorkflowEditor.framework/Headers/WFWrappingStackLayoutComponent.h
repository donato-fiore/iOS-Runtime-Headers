// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWRAPPINGSTACKLAYOUTCOMPONENT_H
#define WFWRAPPINGSTACKLAYOUTCOMPONENT_H



#import "CKComponent.h"

@interface WFWrappingStackLayoutComponent : CKComponent {
    WFWrappingStackLayoutComponentStyle _style;
    vector<CKComponent *, std::allocator<CKComponent *>> _children;
}




+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 style:(struct WFWrappingStackLayoutComponentStyle *)arg2 children:(*void)arg3 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif