// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSTACKLAYOUTCOMPONENT_H
#define CKSTACKLAYOUTCOMPONENT_H



#import "CKComponent.h"

@interface CKStackLayoutComponent : CKComponent {
    CKStackLayoutComponentStyle _style;
    vector<CKStackLayoutComponentChild, std::allocator<CKStackLayoutComponentChild>> _children;
}




+(id)newRTLCompatibleWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 style:(struct CKStackLayoutComponentStyle *)arg2 children:(*void)arg3 ;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 style:(struct CKStackLayoutComponentStyle *)arg2 children:(*void)arg3 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif