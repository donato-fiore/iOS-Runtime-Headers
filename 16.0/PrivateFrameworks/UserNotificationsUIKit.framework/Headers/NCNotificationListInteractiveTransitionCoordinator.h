// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTINTERACTIVETRANSITIONCOORDINATOR_H
#define NCNOTIFICATIONLISTINTERACTIVETRANSITIONCOORDINATOR_H

@class NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UIPinchGestureRecognizer;
@protocol UIGestureRecognizerDelegate, NCNotificationListInteractiveTransitionCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "NCNotificationListView.h"

@interface NCNotificationListInteractiveTransitionCoordinator : NSObject <UIGestureRecognizerDelegate>



@property (nonatomic) NSUInteger currentListDisplayStyleSetting; // ivar: _currentListDisplayStyleSetting
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListInteractiveTransitionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic, getter=isHapticPrepared) BOOL hapticPrepared; // ivar: _hapticPrepared
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NCNotificationListView *interactiveListView; // ivar: _interactiveListView
@property (retain, nonatomic) UIPanGestureRecognizer *interactiveTransitionPanGestureRecognizer; // ivar: _interactiveTransitionPanGestureRecognizer
@property (retain, nonatomic) UIPinchGestureRecognizer *interactiveTransitionPinchGestureRecognizer; // ivar: _interactiveTransitionPinchGestureRecognizer
@property (weak, nonatomic) NCNotificationListView *parentListView; // ivar: _parentListView
@property (readonly, nonatomic, getter=isPerformingExclusiveScrollInteractiveTranslation) BOOL performingExclusiveScrollInteractiveTranslation;
@property (nonatomic) BOOL shouldPerformInteractiveCollapseTransition; // ivar: _shouldPerformInteractiveCollapseTransition
@property (nonatomic) BOOL shouldPerformInteractiveExpandTransition; // ivar: _shouldPerformInteractiveExpandTransition
@property (readonly) Class superclass;


-(BOOL)_isCurrentDigestVisible;
-(BOOL)_isHiddenListRevealed;
-(BOOL)_isPersistentSettingTransitionForGestureRecognizer:(id)arg0 ;
-(BOOL)_isScrollingListContent;
-(BOOL)_shouldAllowExpandInteractiveTranslation;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_bottomPositionForInteractiveListView;
-(CGFloat)_interactionTranslationFocalPointYForGestureRecognizer:(id)arg0 ;
-(CGFloat)_interactionTranslationPercentageForGestureRecognizer:(id)arg0 ;
-(CGFloat)_interactionTranslationVelocityForGestureRecognizer:(id)arg0 ;
-(NSInteger)_interactionTranslationReasonForGestureRecognizer:(id)arg0 ;
-(NSUInteger)_countForInteractiveListView;
-(NSUInteger)_indexForInteractiveListView;
-(id)_stringForReason:(NSInteger)arg0 ;
-(id)initWithParentListView:(id)arg0 interactiveListView:(id)arg1 ;
-(void)_gestureRecognizerDidRecognize:(id)arg0 ;
-(void)_migrateProminentNotificationsForHiddenSetting;
-(void)_performHapticForListDisplayStyleTransition;
-(void)_prepareHapticForListDisplayStyleTransition;
-(void)_releaseHapticForListDisplayStyleTransition;
-(void)_updateListDisplayStyleSetting:(NSUInteger)arg0 isPersistentSetting:(BOOL)arg1 hideRevealedList:(BOOL)arg2 ;
-(void)_updateNotificationListForInteractionTranslationPercentage:(CGFloat)arg0 interactionTranslationVelocity:(CGFloat)arg1 interactionTranslationFocalPointY:(CGFloat)arg2 isPersistentSetting:(BOOL)arg3 isIntentionalInteraction:(BOOL)arg4 forReason:(NSInteger)arg5 ;
-(void)interactiveTranslationDidEnd;
-(void)interactiveTranslationWillBegin;
-(void)updateScrollInteractiveTranslation;


@end


#endif