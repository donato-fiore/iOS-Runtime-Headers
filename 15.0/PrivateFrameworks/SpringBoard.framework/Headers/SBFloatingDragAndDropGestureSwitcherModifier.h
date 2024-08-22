// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLOATINGDRAGANDDROPGESTURESWITCHERMODIFIER_H
#define SBFLOATINGDRAGANDDROPGESTURESWITCHERMODIFIER_H



#import "SBGestureSwitcherModifier.h"

@interface SBFloatingDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    BOOL _floatingSwitcherVisible;
    NSInteger _floatingConfiguration;
    NSInteger _interfaceOrientation;
    NSInteger _currentDropAction;
    CGPoint _location;
    CGRect _platterFrame;
    CGFloat _platterScale;
}




-(BOOL)_isPlatterPreviewIntersectingFloatingApplication;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 floatingSwitcherVisible:(BOOL)arg1 floatingConfiguration:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 ;
-(struct CGRect )containerViewBounds;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif