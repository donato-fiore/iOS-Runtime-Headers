// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHPEOPLEWIDGETPERSONDETAILINTERACTION_H
#define SBHPEOPLEWIDGETPERSONDETAILINTERACTION_H

@class UIView, MTMaterialView, NSString, PPLPeopleEntityViewController;
@protocol SBHViewControllerTransitionDelegate, SBHPeopleWidgetPersonDetailAnimationContext, SBIconViewObserver, PPLPeopleEntityViewControllerDelegate, SBHModalInteraction, SBHModalInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SBHPeopleWidgetPersonDetailInteractionContext.h"
#import "SBIconView.h"
#import "SBHPeopleWidgetPersonDetailInteractionSettings.h"
#import "SBHViewControllerTransition.h"

@interface SBHPeopleWidgetPersonDetailInteraction : NSObject <SBHViewControllerTransitionDelegate, SBHPeopleWidgetPersonDetailAnimationContext, SBIconViewObserver, PPLPeopleEntityViewControllerDelegate, SBHModalInteraction>



@property (retain, nonatomic) UIView *backgroundTintView; // ivar: _backgroundTintView
@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect homeScreenContentFrame;
@property (readonly, nonatomic) UIView *homeScreenContentView;
@property (readonly, copy, nonatomic) SBHPeopleWidgetPersonDetailInteractionContext *interactionContext; // ivar: _interactionContext
@property (weak, nonatomic) NSObject<SBHModalInteractionDelegate> *modalInteractionDelegate; // ivar: modalInteractionDelegate
@property (retain, nonatomic) PPLPeopleEntityViewController *personViewController; // ivar: _personViewController
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (readonly, nonatomic) SBIconView *referenceView;
@property (readonly, nonatomic) SBHPeopleWidgetPersonDetailInteractionSettings *settings; // ivar: _settings
@property (nonatomic) CGFloat sourceContentCornerRadius; // ivar: _sourceContentCornerRadius
@property (nonatomic) CGRect sourceContentFrame; // ivar: _sourceContentFrame
@property (readonly, nonatomic) SBIconView *sourceView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat targetContentCornerRadius;
@property (nonatomic) CGRect targetContentFrame; // ivar: _targetContentFrame
@property (retain, nonatomic) UIView *targetView; // ivar: _targetView
@property (retain, nonatomic) UIView *touchBlockingView; // ivar: _touchBlockingView
@property (retain, nonatomic) SBHViewControllerTransition *transition; // ivar: _transition


-(id)animatorForTransition:(id)arg0 ;
-(id)initWithInteractionContext:(id)arg0 ;
-(void)_handleTapToDismiss:(id)arg0 ;
-(void)_setUpMatchMoveAnimationForBackgroundView:(id)arg0 ;
-(void)beginInteractionAnimated:(BOOL)arg0 ;
-(void)endInteractionAnimated:(BOOL)arg0 ;
-(void)iconViewDidBecomeWindowless:(id)arg0 ;
-(void)iconViewWasDiscarded:(id)arg0 ;
-(void)iconViewWasRecycled:(id)arg0 ;
-(void)peopleEntityViewControllerDidRequestDismissal:(id)arg0 ;
-(void)prepareTransition:(id)arg0 ;
-(void)transitionDidProgressToEndState:(id)arg0 ;
-(void)transitionDidReturnToBeginningState:(id)arg0 ;
-(void)transitionWillProgressToEndState:(id)arg0 ;
-(void)transitionWillReturnToBeginningState:(id)arg0 ;


@end


#endif