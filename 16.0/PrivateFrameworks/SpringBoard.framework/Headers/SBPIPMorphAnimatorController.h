// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPMORPHANIMATORCONTROLLER_H
#define SBPIPMORPHANIMATORCONTROLLER_H

@class NSString, NSUUID;
@protocol SBViewMorphAnimatorObserver, SBPIPMorphAnimatorControllerDelegate, SBViewMorphAnimatorDataSource;

#import <Foundation/Foundation.h>

#import "SBPIPContainerViewController.h"
#import "SBViewMorphAnimator.h"

@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver>



@property (copy, nonatomic) id *animatorWaitingForExternalAnimationActionBlock; // ivar: _animatorWaitingForExternalAnimationActionBlock
@property (nonatomic) NSInteger completedTargetAnimations; // ivar: _completedTargetAnimations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBPIPMorphAnimatorControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCompletedSourceAnimations;
@property (readonly, nonatomic) BOOL hasCompletedTargetAnimations;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBPIPContainerViewController *pictureInPictureContainerViewController; // ivar: _pictureInPictureContainerViewController
@property (retain, nonatomic) NSString *scenePersistenceIdentifier; // ivar: _scenePersistenceIdentifier
@property (copy, nonatomic) id *setupCompletionBlock; // ivar: _setupCompletionBlock
@property (readonly) Class superclass;
@property (nonatomic) int targetProcessIdentifier; // ivar: _targetProcessIdentifier
@property (readonly, nonatomic, getter=isTerminated) BOOL terminated; // ivar: _terminated
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) SBViewMorphAnimator *viewMorphAnimator; // ivar: _viewMorphAnimator
@property (readonly, nonatomic) NSObject<SBViewMorphAnimatorDataSource> *viewMorphAnimatorDataSource; // ivar: _viewMorphAnimatorDataSource


-(BOOL)_isWaitingForExternalAnimationCompletion;
-(id)init;
-(id)initWithTargetProcessIdentifier:(int)arg0 uuid:(id)arg1 scenePersistenceIdentifier:(id)arg2 windowScene:(id)arg3 direction:(NSInteger)arg4 gestureInitiated:(BOOL)arg5 delegate:(id)arg6 ;
-(void)_performAnimatorWaitingForExternalAnimationActionBlock;
-(void)_terminate;
-(void)animatorWasInterrupted:(id)arg0 ;
-(void)cancel;
-(void)didEndSourceAnimations:(NSUInteger)arg0 finished:(BOOL)arg1 continueBlock:(id)arg2 ;
-(void)didEndTargetAnimations:(NSUInteger)arg0 finished:(BOOL)arg1 continueBlock:(id)arg2 ;
-(void)interrupt;
-(void)willRemoveTargeMatchMoveAnimationAtFrame:(struct CGRect )arg0 withinSourceFrame:(struct CGRect )arg1 ;
-(void)willStartSourceAnimations:(NSUInteger)arg0 ;


@end


#endif