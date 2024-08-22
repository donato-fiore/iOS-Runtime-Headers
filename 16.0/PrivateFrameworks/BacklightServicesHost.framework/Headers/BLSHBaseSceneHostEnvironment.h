// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHBASESCENEHOSTENVIRONMENT_H
#define BLSHBASESCENEHOSTENVIRONMENT_H

@class NSHashTable, RBSProcessIdentity, NSString, NSDate, BLSBacklightSceneVisualState;
@protocol BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>


@interface BLSHBaseSceneHostEnvironment : NSObject <BLSHBacklightSceneHostEnvironment>

 {
    NSHashTable *_lock_observers;
}


@property (getter=isAlwaysOnEnabledForEnvironment) BOOL alwaysOnEnabledForEnvironment; // ivar: _lock_alwaysOnEnabledForEnvironment
@property (readonly) RBSProcessIdentity *budgetProcessIdentity;
@property (readonly, getter=isClientActive) BOOL clientActive;
@property (readonly) BOOL clientHasDelegate;
@property (readonly) BOOL clientSupportsAlwaysOn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayBlanked) BOOL displayBlanked; // ivar: _displayBlanked
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (getter=isLiveUpdating) BOOL liveUpdating; // ivar: _lock_liveUpdating
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly) NSDate *presentationDate; // ivar: _lock_presentationDate
@property (readonly) Class superclass;
@property (getter=hasUnrestrictedFramerateUpdates) BOOL unrestrictedFramerateUpdates; // ivar: _lock_unrestrictedFramerateUpdates
@property (readonly) BLSBacklightSceneVisualState *visualState; // ivar: _lock_visualState


-(id)initWithIdentifier:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)clearPresentationDate;
-(void)clientDidRequestInvalidationForReason:(id)arg0 ;
-(void)deactivateClient;
-(void)invalidateContentForReason:(id)arg0 ;
-(void)notifyObserversWithBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestDateSpecifiersForDateInterval:(id)arg0 previousPresentationDate:(id)arg1 shouldReset:(BOOL)arg2 completion:(id)arg3 ;
-(void)requestedFidelityForInactiveContentWithCompletion:(id)arg0 ;
-(void)updateToDateSpecifier:(id)arg0 sceneContentsUpdated:(id)arg1 ;
// -(void)updateToVisualState:(id)arg0 presentationDateSpecifier:(id)arg1 animated:(BOOL)arg2 triggerEvent:(id)arg3 touchTargetable:(BOOL)arg4 sceneContentsUpdated:(id)arg5 performBacklightRamp:(unk)arg6 animationComplete:(id)arg7  ;
-(void)willBeginRenderSession:(id)arg0 ;
-(void)willEndRenderSession:(id)arg0 ;


@end


#endif