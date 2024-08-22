// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUINTERACTIONPROGRESSAPPLIER_H
#define HUINTERACTIONPROGRESSAPPLIER_H

@class NSString, UIInteractionProgress;
@protocol UIInteractionProgressObserver;


#import "HUApplier.h"
#import "HUAnimationApplier.h"
#import "HUAnimationSettings.h"

@interface HUInteractionProgressApplier : HUApplier <UIInteractionProgressObserver>



@property (nonatomic) CGFloat animationFromProgress; // ivar: _animationFromProgress
@property (nonatomic) CGFloat animationToProgress; // ivar: _animationToProgress
@property (nonatomic) BOOL boundProgressValues; // ivar: _boundProgressValues
@property (nonatomic) BOOL completesAtTargetState; // ivar: _completesAtTargetState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUAnimationApplier *inFlightAnimation; // ivar: _inFlightAnimation
@property (readonly, nonatomic) UIInteractionProgress *interactionProgress; // ivar: _interactionProgress
@property (nonatomic) CGFloat previousInteractionProgress; // ivar: _previousInteractionProgress
@property (retain, nonatomic) HUAnimationSettings *significantProgressChangeAnimationSettings; // ivar: _significantProgressChangeAnimationSettings
@property (readonly) Class superclass;
@property (retain, nonatomic) HUAnimationSettings *transitionAnimationSettings; // ivar: _transitionAnimationSettings
@property (nonatomic) BOOL waitingOnAnimationToComplete; // ivar: _waitingOnAnimationToComplete


+(id)applierWithInteractionProgress:(id)arg0 ;
// +(id)applyInteractionProgress:(id)arg0 withApplier:(id)arg1 completion:(unk)arg2  ;
-(BOOL)cancel;
-(BOOL)complete:(BOOL)arg0 ;
-(BOOL)isInteractive;
-(BOOL)start;
-(CGFloat)_currentInteractionProgress;
-(id)init;
-(id)initWithInteractionProgress:(id)arg0 ;
-(void)_completeSuccessfullyIfAnimationsComplete;
-(void)_updateCurrentProgress;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;


@end


#endif