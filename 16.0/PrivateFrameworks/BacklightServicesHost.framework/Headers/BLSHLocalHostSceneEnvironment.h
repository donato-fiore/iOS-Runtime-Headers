// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHLOCALHOSTSCENEENVIRONMENT_H
#define BLSHLOCALHOSTSCENEENVIRONMENT_H

@class BLSBacklightSceneVisualState, NSDate;
@protocol BLSBacklightSceneEnvironment_Private;


#import "BLSHBaseSceneHostEnvironment.h"

@interface BLSHLocalHostSceneEnvironment : BLSHBaseSceneHostEnvironment {
    id<BLSBacklightSceneEnvironment_Private> *_clientEnvironment;
    BLSBacklightSceneVisualState *_lock_visualState;
    NSDate *_lock_presentationDate;
    os_unfair_lock_s _lock;
}




-(BOOL)clientHasDelegate;
-(BOOL)clientSupportsAlwaysOn;
-(BOOL)hasUnrestrictedFramerateUpdates;
-(BOOL)isClientActive;
-(BOOL)isLiveUpdating;
-(id)initWithBacklightSceneEnvironment:(id)arg0 ;
-(id)presentationDate;
-(id)visualState;
-(void)clearPresentationDate;
-(void)requestDateSpecifiersForDateInterval:(id)arg0 previousPresentationDate:(id)arg1 shouldReset:(BOOL)arg2 completion:(id)arg3 ;
-(void)requestedFidelityForInactiveContentWithCompletion:(id)arg0 ;
-(void)setLiveUpdating:(BOOL)arg0 ;
-(void)setUnrestrictedFramerateUpdates:(BOOL)arg0 ;
-(void)updateToDateSpecifier:(id)arg0 sceneContentsUpdated:(id)arg1 ;
// -(void)updateToVisualState:(id)arg0 presentationDateSpecifier:(id)arg1 animated:(BOOL)arg2 triggerEvent:(id)arg3 touchTargetable:(BOOL)arg4 sceneContentsUpdated:(id)arg5 performBacklightRamp:(unk)arg6 animationComplete:(id)arg7  ;


@end


#endif