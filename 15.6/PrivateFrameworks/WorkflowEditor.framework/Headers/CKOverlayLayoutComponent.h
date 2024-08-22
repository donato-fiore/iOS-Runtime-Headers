// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKOVERLAYLAYOUTCOMPONENT_H
#define CKOVERLAYLAYOUTCOMPONENT_H



#import "CKComponent.h"

@interface CKOverlayLayoutComponent : CKComponent {
    CKComponent *_overlay;
    CKComponent *_component;
}




+(id)newWithComponent:(id)arg0 overlay:(id)arg1 ;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 restrictedToSize:(struct CKComponentSize *)arg1 relativeToParentSize:(struct CGSize )arg2 ;


@end


#endif