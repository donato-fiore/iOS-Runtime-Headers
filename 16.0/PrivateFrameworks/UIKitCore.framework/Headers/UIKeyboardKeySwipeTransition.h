// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDKEYSWIPETRANSITION_H
#define UIKEYBOARDKEYSWIPETRANSITION_H

@class NSString, NSArray;
@protocol CAAnimationDelegate;


#import "UIKeyboardKeyplaneTransition.h"

@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition <CAAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableMeshOptimization; // ivar: _disableMeshOptimization
@property (retain, nonatomic) NSArray *endKeysOrdered; // ivar: _endKeysOrdered
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *keyInfos; // ivar: _keyInfos
@property (nonatomic) CGFloat previousProgress; // ivar: _previousProgress
@property (retain, nonatomic) NSArray *startGeometries; // ivar: _startGeometries
@property (retain, nonatomic) NSArray *startKeysOrdered; // ivar: _startKeysOrdered
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *transitionKeys; // ivar: _transitionKeys


-(CGFloat)nonInteractiveDuration;
-(id)meshTransformForKeyplane:(id)arg0 forward:(BOOL)arg1 initial:(BOOL)arg2 ;
-(struct CGRect )keyRectForFrame:(struct CGRect )arg0 normalizedSubRect:(struct CGRect )arg1 ;
-(void)_runOpacityAnimation;
-(void)_runTransformAnimation;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)commitTransitionRebuild;
-(void)gatherTransitionKeys;
-(void)rebuildWithStartKeyplane:(id)arg0 startView:(id)arg1 endKeyplane:(id)arg2 endView:(id)arg3 ;
-(void)removeAllAnimations;
-(void)runNonInteractivelyWithCompletion:(id)arg0 ;
-(void)updateWithProgress:(CGFloat)arg0 ;


@end


#endif