// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSPARTICIPANT_H
#define SBFTRAITSPARTICIPANT_H

@class NSString;
@protocol SBFTraitsPreferencesUpdating, SBFTraitsSettingsUpdating, SBFTraitsSettingsActuationContextProviding, SBFTraitsPreferencesProviding, SBFTraitsResolutionPoliciesProviding, NSCopying, BSInvalidatable, BSDescriptionProviding, SBFTraitsSettingsActuating, SBFTraitsParticipantDelegate;

#import <Foundation/Foundation.h>

#import "SBFTraitsArbiter.h"
#import "SBFTraitsSettings.h"
#import "SBFTraitsSettingsActuationContext.h"
#import "SBFTraitsPreferencesOrientation.h"
#import "SBFTraitsOrientationResolutionPolicyInfo.h"
#import "SBFTraitsPreferencesZOrderLevel.h"

@interface SBFTraitsParticipant : NSObject <SBFTraitsPreferencesUpdating, SBFTraitsSettingsUpdating, SBFTraitsSettingsActuationContextProviding, SBFTraitsPreferencesProviding, SBFTraitsResolutionPoliciesProviding, NSCopying, BSInvalidatable, BSDescriptionProviding, SBFTraitsSettingsActuating>

 {
    BOOL _invalidated;
    id<BSInvalidatable> *_stateDumpHandle;
}


@property (nonatomic) BOOL _debugDelegateDidValidateLastSettings; // ivar: __debugDelegateDidValidateLastSettings
@property (copy, nonatomic) NSString *_debugLastOrientationValidationFailureReason; // ivar: __debugLastOrientationValidationFailureReason
@property (weak, nonatomic) SBFTraitsArbiter *arbiter; // ivar: _arbiter
@property (retain, nonatomic) SBFTraitsSettings *currentSettings; // ivar: _currentSettings
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFTraitsParticipantDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) SBFTraitsSettingsActuationContext *orientationActuationContext;
@property (retain, nonatomic) SBFTraitsPreferencesOrientation *orientationPreferences; // ivar: _orientationPreferences
@property (copy, nonatomic) SBFTraitsOrientationResolutionPolicyInfo *orientationResolutionPolicyInfo; // ivar: _orientationResolutionPolicyInfo
@property (retain, nonatomic) SBFTraitsSettings *previousSettings; // ivar: _previousSettings
@property (copy, nonatomic) NSString *role; // ivar: _role
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) SBFTraitsPreferencesZOrderLevel *zOrderLevelPreferences; // ivar: _zOrderLevelPreferences


-(BOOL)hasAnyActuationContext;
-(id)_setupStateDump;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithParticipant:(id)arg0 ;
-(id)initWithRole:(id)arg0 uniqueIdentifier:(id)arg1 delegate:(id)arg2 arbiter:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;
-(void)setNeedsUpdatePreferencesWithReason:(id)arg0 ;
-(void)setNeedsUpdatePreferencesWithReason:(id)arg0 animate:(BOOL)arg1 ;
-(void)setNeedsUpdatePreferencesWithReason:(id)arg0 force:(BOOL)arg1 ;
-(void)setNeedsUpdatePreferencesWithReason:(id)arg0 force:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)updateOrientationPreferencesWithBlock:(id)arg0 ;
-(void)updateOrientationSettingsWithBlock:(id)arg0 ;
-(void)updatePreferencesIfNeeded;
-(void)updateZOrderLevelPreferencesWithBlock:(id)arg0 ;
-(void)updateZOrderLevelSettingsWithBlock:(id)arg0 ;


@end


#endif