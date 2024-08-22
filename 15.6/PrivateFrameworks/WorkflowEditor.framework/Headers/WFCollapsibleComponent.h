// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOLLAPSIBLECOMPONENT_H
#define WFCOLLAPSIBLECOMPONENT_H



#import "CKComponent.h"

@interface WFCollapsibleComponent : CKComponent {
    CKComponent *_component;
    BOOL _expanded;
}




+(id)newWithComponent:(id)arg0 expanded:(BOOL)arg1 ;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
-(id)viewForAnimation;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 restrictedToSize:(struct CKComponentSize *)arg1 relativeToParentSize:(struct CGSize )arg2 ;


@end


#endif