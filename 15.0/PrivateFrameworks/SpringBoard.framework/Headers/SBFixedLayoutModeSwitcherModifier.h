// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFIXEDLAYOUTMODESWITCHERMODIFIER_H
#define SBFIXEDLAYOUTMODESWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBFixedLayoutModeSwitcherModifier : SBSwitcherModifier {
    NSInteger _updateMode;
}




-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithUpdateMode:(NSInteger)arg0 ;


@end


#endif