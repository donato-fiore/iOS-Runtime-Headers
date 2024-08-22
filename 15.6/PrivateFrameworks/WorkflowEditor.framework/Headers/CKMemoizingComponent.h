// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMEMOIZINGCOMPONENT_H
#define CKMEMOIZINGCOMPONENT_H



#import "CKComponent.h"
#import "CKMemoizingComponentStateWrapper.h"

@interface CKMemoizingComponent : CKComponent {
    CKMemoizingComponentStateWrapper *_wrapper;
    CKComponent *_component;
}




+(id)initialState;
+(id)newWithComponentBlock:(id)arg0 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 restrictedToSize:(struct CKComponentSize *)arg1 relativeToParentSize:(struct CGSize )arg2 ;


@end


#endif