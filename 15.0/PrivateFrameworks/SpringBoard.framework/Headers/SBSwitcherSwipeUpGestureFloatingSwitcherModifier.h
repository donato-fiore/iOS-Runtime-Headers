// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERSWIPEUPGESTUREFLOATINGSWITCHERMODIFIER_H
#define SBSWITCHERSWIPEUPGESTUREFLOATINGSWITCHERMODIFIER_H



#import "SBGestureSwitcherModifier.h"
#import "SBGridSwipeUpGestureSwitcherModifier.h"
#import "SBDismissSiriSwitcherModifier.h"

@interface SBSwitcherSwipeUpGestureFloatingSwitcherModifier : SBGestureSwitcherModifier {
    SBGridSwipeUpGestureSwitcherModifier *_gridSwipeUpGestureModifier;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}




-(CGFloat)contentViewScale;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 ;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif