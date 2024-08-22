// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIMOTIONEFFECTENGINE_H
#define _UIMOTIONEFFECTENGINE_H

@class NSMapTable, CADisplayLink, NSMutableSet, NSString, NSArray;
@protocol _UIMotionEffectEventConsumer;

#import <Foundation/Foundation.h>

#import "_UIAssociationTable.h"
#import "_UILazyMapTable.h"
#import "_UIMotionEffectEventProvider.h"
#import "_UIMotionEffectEvent.h"

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer>

 {
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_suspendedViewsToEffectSets;
    _UIMotionEffectEventProvider *_eventProvider;
    BOOL _hasReceivedAtLeastOneEventSinceStarting;
    _UIMotionEffectEvent *_pendingEvent;
    os_unfair_lock_s _pendingEventLock;
    CADisplayLink *_displayLink;
    BOOL _generatingUpdates;
    NSMutableSet *_suspendReasons;
    _UIMotionEffectEvent *_lastEvent;
    BOOL _slowUpdatesEnabled;
    BOOL _pendingSlowDown;
    NSInteger _eventProviderStatus;
    BOOL _allAnalyzersAreCentered;
    BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
    BOOL _isPendingReset;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
}


@property (nonatomic, setter=_setTargetInterfaceOrientation:) NSInteger _targetInterfaceOrientation; // ivar: _targetInterfaceOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *suspensionReasons;


+(BOOL)_motionEffectsEnabled;
+(BOOL)_motionEffectsSupported;
+(Class)_analyzerClass;
+(Class)_eventProviderClass;
-(BOOL)_hasMotionEffectsForView:(id)arg0 ;
-(BOOL)_isSuspended;
-(BOOL)_motionEffect:(id)arg0 belongsToView:(id)arg1 ;
-(BOOL)_motionEffectsAreSuspendedForView:(id)arg0 ;
-(BOOL)_shouldGenerateUpdates;
-(id)_motionEffectsForView:(id)arg0 ;
-(id)init;
-(void)_applyEffectsFromAnalyzer:(id)arg0 ;
-(void)_handleLatestDeviceMotion;
-(void)_startGeneratingUpdates;
-(void)_startOrStopGeneratingUpdates;
-(void)_stopGeneratingUpdates;
-(void)_toggleSlowUpdates;
-(void)_unapplyAllEffects;
-(void)_unregisterAllMotionEffectsForView:(id)arg0 ;
-(void)_unregisterMotionEffect:(id)arg0 fromView:(id)arg1 ;
-(void)_updateDisplayLinkInterval;
-(void)beginApplyingMotionEffect:(id)arg0 toView:(id)arg1 ;
-(void)beginSuspendingForReason:(id)arg0 ;
-(void)beginSuspendingMotionEffectsForView:(id)arg0 ;
-(void)dealloc;
-(void)endApplyingMotionEffect:(id)arg0 toView:(id)arg1 ;
-(void)endSuspendingForReason:(id)arg0 ;
-(void)endSuspendingMotionEffectsForView:(id)arg0 ;
-(void)resetMotionAnalysis;
-(void)updateEventProviderStatus:(NSInteger)arg0 ;
-(void)updateWithEvent:(id)arg0 ;


@end


#endif