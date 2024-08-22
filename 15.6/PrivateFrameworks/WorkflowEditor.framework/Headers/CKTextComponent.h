// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTCOMPONENT_H
#define CKTEXTCOMPONENT_H



#import "CKComponent.h"

@interface CKTextComponent : CKComponent {
    CKTextKitAttributes _attributes;
    CKTextComponentAccessibilityContext _accessibilityContext;
}




+(id)newWithTextAttributes:(struct CKTextKitAttributes *)arg0 viewAttributes:(*void)arg1 options:(struct CKTextComponentOptions *)arg2 size:(struct CKComponentSize *)arg3 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;
-(struct MountResult )mountInContext:(*void)arg0 size:(struct CGSize )arg1 children:(struct shared_ptr<const std::vector<CKComponentLayoutChild>> )arg2 supercomponent:(id)arg3 ;
-(void)wf_applyVisualStying:(id)arg0 ;


@end


#endif