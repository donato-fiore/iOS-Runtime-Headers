// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIVIEWINPROCESSANIMATIONSTATE_H
#define UIVIEWINPROCESSANIMATIONSTATE_H



#import "UIViewAnimationState.h"

@interface UIViewInProcessAnimationState : UIViewAnimationState

@property (copy, nonatomic) id *animationAndComposerGetter; // ivar: _animationAndComposerGetter
@property (nonatomic) BOOL retargeted; // ivar: _retargeted
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isKeySupported:(id)arg0 ;
-(BOOL)shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 forView:(id)arg2 ;
-(id)init;
// -(void)animatePropertyWithCurrentValue:(id)arg0 targetValue:(id)arg1 preTickShouldRemoveCallback:(id)arg2 newValueCallback:(unk)arg3 removedCallback:(id)arg4 animatableProperty:(unk)arg5  ;
// -(void)animatePropertyWithKey:(id)arg0 view:(id)arg1 forceNew:(BOOL)arg2 currentValue:(id)arg3 targetValue:(id)arg4 preTickShouldRemoveCallback:(id)arg5 newValueCallback:(unk)arg6 removedCallback:(id)arg7  ;
// -(void)setupWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 view:(id)arg2 options:(NSUInteger)arg3 factory:(id)arg4 parentState:(id)arg5 start:(id)arg6 completion:(unk)arg7  ;


@end


#endif