// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKRATIOLAYOUTCOMPONENT_H
#define CKRATIOLAYOUTCOMPONENT_H



#import "CKComponent.h"

@interface CKRatioLayoutComponent : CKComponent {
    CGFloat _ratio;
    CKComponent *_component;
}




+(id)newWithRatio:(CGFloat)arg0 size:(struct CKComponentSize *)arg1 component:(id)arg2 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif