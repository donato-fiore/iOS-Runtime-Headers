// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIANIMATABLEPROPERTY_H
#define UIANIMATABLEPROPERTY_H

@protocol OS_dispatch_queue, UIVectorOperatable, UIViewAnimationComposing;


#import "UIAnimatablePropertyBase.h"
#import "_UIViewAnimatablePropertyTransformer.h"
#import "UIViewRunningAnimationEntry.h"
#import "UIViewInProcessAnimationState.h"

@interface UIAnimatableProperty : UIAnimatablePropertyBase {
    _UIViewAnimatablePropertyTransformer *_transformer;
    NSObject<OS_dispatch_queue> *_animationEntryLockingQueue;
    NSObject<OS_dispatch_queue> *_invalidationLockingQueue;
    UIViewRunningAnimationEntry *_animationEntry;
    id<UIVectorOperatable> *_pendingTargetVelocity;
    id<UIVectorOperatable> *_pendingVelocity;
}


@property (retain, nonatomic) UIViewRunningAnimationEntry *animationEntry;
@property (weak, nonatomic) UIViewInProcessAnimationState *animationState; // ivar: _animationState
@property (retain, nonatomic) NSObject<UIViewAnimationComposing> *composer; // ivar: _composer
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) id *invalidationCallback; // ivar: _invalidationCallback
@property (nonatomic) int ownershipCount; // ivar: _ownershipCount
@property (retain) id *presentationValue; // ivar: _presentationValue
@property (retain) id *value; // ivar: _value
@property (nonatomic) id *velocity;
@property (nonatomic, getter=isVelocityUsableForVFD) BOOL velocityUsableForVFD; // ivar: _velocityUsableForVFD


-(BOOL)_performAnimationFromCurrentValue:(id)arg0 ;
// -(BOOL)animatePropertyWithCurrentValue:(id)arg0 targetValue:(id)arg1 preTickShouldRemoveCallback:(id)arg2 newValueCallback:(unk)arg3 removedCallback:(id)arg4  ;
-(id)debugDescription;
-(id)initWithInvalidationCallback:(id)arg0 ;
-(id)transformer;
-(id)velocityTarget:(BOOL)arg0 ;
-(void)invalidate;
-(void)invalidateAndStopImmediately:(BOOL)arg0 ;
-(void)invalidateIfPossible;
-(void)setTransformer:(id)arg0 ;


@end


#endif