// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCREENSLEEPCOORDINATORBACKLIGHTENVIRONMENT_H
#define SBSCREENSLEEPCOORDINATORBACKLIGHTENVIRONMENT_H

@class NSUUID, NSHashTable, BLSBacklightSceneVisualState, NSDate, RBSProcessIdentity, NSString;
@protocol BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>

#import "SBScreenSleepCoordinator.h"

@interface SBScreenSleepCoordinatorBacklightEnvironment : NSObject <BLSHBacklightSceneHostEnvironment>

 {
    SBScreenSleepCoordinator *_screenSleepCoordinator;
    NSUUID *_uuid;
    os_unfair_lock_s _lock;
    NSHashTable *_lock_observers;
    BLSBacklightSceneVisualState *_lock_visualState;
    NSDate *_lock_presentationDate;
    BOOL _lock_alwaysOnEnabledForEnvironment;
    BOOL _lock_liveUpdating;
    BOOL _lock_unrestrictedFramerateUpdates;
}


@property (getter=isAlwaysOnEnabledForEnvironment) BOOL alwaysOnEnabledForEnvironment;
@property (readonly) RBSProcessIdentity *budgetProcessIdentity;
@property (readonly, getter=isClientActive) BOOL clientActive;
@property (readonly) BOOL clientHasDelegate;
@property (readonly) BOOL clientSupportsAlwaysOn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayBlanked) BOOL displayBlanked;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier;
@property (getter=isLiveUpdating) BOOL liveUpdating;
@property (readonly) NSDate *presentationDate;
@property (readonly) Class superclass;
@property (getter=hasUnrestrictedFramerateUpdates) BOOL unrestrictedFramerateUpdates;
@property (readonly) BLSBacklightSceneVisualState *visualState;


-(id)initWithCoordinator:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)clearPresentationDate;
-(void)clientDidRequestInvalidationForReason:(id)arg0 ;
-(void)deactivateClient;
-(void)invalidateContentForReason:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestDateSpecifiersForDateInterval:(id)arg0 previousPresentationDate:(id)arg1 shouldReset:(BOOL)arg2 completion:(id)arg3 ;
-(void)requestedFidelityForInactiveContentWithCompletion:(id)arg0 ;
-(void)updateToDateSpecifier:(id)arg0 sceneContentsUpdated:(id)arg1 ;
// -(void)updateToVisualState:(id)arg0 presentationDateSpecifier:(id)arg1 animated:(BOOL)arg2 triggerEvent:(id)arg3 touchTargetable:(BOOL)arg4 sceneContentsUpdated:(id)arg5 performBacklightRamp:(unk)arg6 animationComplete:(id)arg7  ;
-(void)willBeginRenderSession:(id)arg0 ;
-(void)willEndRenderSession:(id)arg0 ;


@end


#endif