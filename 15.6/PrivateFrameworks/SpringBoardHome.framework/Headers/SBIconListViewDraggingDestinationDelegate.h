// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLISTVIEWDRAGGINGDESTINATIONDELEGATE_H
#define SBICONLISTVIEWDRAGGINGDESTINATIONDELEGATE_H

@class NSMapTable, NSMutableSet, NSString, UIDropInteraction;
@protocol SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, BSDescriptionProviding, UIDropInteractionDelegate, SBIconListViewDraggingPolicyHandling;

#import <Foundation/Foundation.h>

#import "SBIconListView.h"

@interface SBIconListViewDraggingDestinationDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, BSDescriptionProviding, UIDropInteractionDelegate>

 {
    NSMapTable *_dragObservers;
    NSMutableSet *_activeDropSessionIdentifiers;
    NSMutableSet *_dropSessionIdentifiersWaitingForConcludeDrop;
}


@property (nonatomic) NSUInteger currentDragType; // ivar: _currentDragType
@property (retain, nonatomic) NSObject<SBIconListViewDraggingPolicyHandling> *currentPolicyHandler; // ivar: _currentPolicyHandler
@property (nonatomic) NSUInteger currentSpringLoadedDragType; // ivar: _currentSpringLoadedDragType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIconListView *iconListView; // ivar: _iconListView
@property (retain, nonatomic) NSObject<SBIconListViewDraggingPolicyHandling> *springLoadingPolicyHandler; // ivar: _springLoadingPolicyHandler
@property (readonly) Class superclass;
@property (nonatomic, getter=isWaitingForConcludeDrag) BOOL waitingForConcludeDrag; // ivar: _waitingForConcludeDrag


-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)isDropSessionWaitingForConcludeDrop:(id)arg0 ;
-(BOOL)updateCurrentPolicyHandlerForDropSession:(id)arg0 ;
-(BOOL)updateSpringLoadedPolicyHandlerForDropSession:(id)arg0 ;
-(NSUInteger)dragTypeForDropSession:(id)arg0 ;
-(id)_dropInteraction:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithIconListView:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)targetItemForSpringLoadingInteractionInView:(id)arg0 atLocation:(struct CGPoint )arg1 forDropSession:(id)arg2 ;
-(id)targetViewForSpringLoadingEffectForView:(id)arg0 ;
-(id)uniqueIdentifierForDropSession:(id)arg0 ;
-(void)_handleSpringloadAndComplete:(id)arg0 ;
-(void)addDragObserver:(id)arg0 forDropSession:(id)arg1 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)enumerateDragObserversForDropSession:(id)arg0 usingBlock:(id)arg1 ;
-(void)markDropSessionAsWaitingForConcludeDrop:(id)arg0 ;
-(void)removeAllDragObserversForDropSession:(id)arg0 ;
-(void)springLoadedInteractionDidFinish;
-(void)unmarkDropSessionAsWaitingForConcludeDrop:(id)arg0 ;


@end


#endif