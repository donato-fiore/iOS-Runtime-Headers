// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCENTERLAYOUTCOMPONENT_H
#define CKCENTERLAYOUTCOMPONENT_H



#import "CKComponent.h"

@interface CKCenterLayoutComponent : CKComponent {
    NSUInteger _centeringOptions;
    NSUInteger _sizingOptions;
    CKComponent *_child;
}




+(id)newWithCenteringOptions:(NSUInteger)arg0 sizingOptions:(NSUInteger)arg1 child:(id)arg2 size:(struct CKComponentSize *)arg3 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif