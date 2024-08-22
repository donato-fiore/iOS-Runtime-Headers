// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPASSCODEKEYBOARDANIMATOR_H
#define SBPASSCODEKEYBOARDANIMATOR_H

@class UIKeyboardAnimator, BSAnimationSettings;
@protocol SBPasscodeKeyboardAnimatorDelegate;



@interface SBPasscodeKeyboardAnimator : UIKeyboardAnimator

@property (retain, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (weak, nonatomic) NSObject<SBPasscodeKeyboardAnimatorDelegate> *delegate; // ivar: _delegate


-(void)completeAnimationWithState:(id)arg0 ;
// -(void)performAnimation:(id)arg0 afterStarted:(unk)arg1 onCompletion:(id)arg2  ;
-(void)prepareForAnimationWithState:(id)arg0 ;
-(void)runAnimationWithState:(id)arg0 ;


@end


#endif