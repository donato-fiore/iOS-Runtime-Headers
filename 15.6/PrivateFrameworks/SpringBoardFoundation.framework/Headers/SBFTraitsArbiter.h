// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSARBITER_H
#define SBFTRAITSARBITER_H

@class NSSet, NSMutableDictionary, NSMutableSet, NSMutableArray, NSHashTable, NSArray, NSString;
@protocol BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier.h"
#import "SBFTraitsArbitrationInputsValidationStage.h"
#import "SBFTraitsArbitrationInterfaceIdiomInputs.h"
#import "SBFTraitsArbitrationDeviceOrientationInputs.h"
#import "SBFTraitsArbitrationKeyboardInputs.h"
#import "SBFTraitsArbitrationInputs.h"

@interface SBFTraitsArbiter : NSObject <BSDescriptionProviding>

 {
    NSSet *_knownZOrderRoles;
    NSSet *_knownOrientationRoles;
    NSSet *_allKnownRoles;
    NSMutableDictionary *_liveRolesCounter;
    NSMutableDictionary *_acquiredParticipantsByUniqueIdentifier;
    NSMutableDictionary *_acquiredParticipantsByPreferencesType;
    NSMutableSet *_participantsNeedingUpdate;
    NSMutableSet *_updatedParticipants;
    NSMutableArray *_inputsNeedUpdateReasons;
    NSMutableArray *_componentsNeedUpdateReasons;
    NSHashTable *_observers;
    SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier *_resolutionUpdateOrientationSpecifier;
    SBFTraitsArbitrationInputsValidationStage *_inputsValidationStage;
    NSArray *_preferencesResolutionStages;
    SBFTraitsArbitrationInterfaceIdiomInputs *_deviceIdiomInputs;
    SBFTraitsArbitrationDeviceOrientationInputs *_deviceOrientationInputs;
    SBFTraitsArbitrationKeyboardInputs *_keyboardInputs;
    SBFTraitsArbitrationInputs *_lastRawInputs;
    SBFTraitsArbitrationInputs *_lastValidatedInputs;
    id<BSInvalidatable> *_stateDumpHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)__isUnderTest;
+(id)_defaultOrientationAnimationSettingsAnimatable:(BOOL)arg0 ;
+(id)screenStateProvider;
+(void)__setIsUnderTest:(BOOL)arg0 ;
+(void)setScreenStateProvider:(id)arg0 ;
-(NSInteger)_rawDeviceOrientation;
-(id)__forTestingOnly_knownOrientationRoles;
-(id)__forTestingOnly_knownZOrderRoles;
-(id)_currentRawDeviceOrientationInputs;
-(id)_defaultUpdateContextWithReason:(id)arg0 animatable:(BOOL)arg1 ;
-(id)_newInputsValidationStage;
-(id)_newOrderedPreferencesResolutionStages;
-(id)_setupStateDump;
-(id)acquireParticipantWithRole:(id)arg0 delegate:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)inputsValidationStage;
-(id)orientationPreferencesResolutionStage;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addResolutionPolicySpecifierForClientContext:(id)arg0 ;
-(void)_deviceOrientationChanged:(id)arg0 ;
-(void)_inputsValidationStageDidUpdateValidators:(id)arg0 ;
-(void)_invalidateParticipant:(id)arg0 ;
-(void)_participantDidUpdatePreferences:(id)arg0 ;
-(void)_participantDidUpdateSettings:(id)arg0 ;
-(void)_preferencesResolutionStageDidUpdateComponents:(id)arg0 animate:(BOOL)arg1 ;
-(void)_removeForceResolutionSpecifier;
-(void)_setNeedsUpdateArbitrationWithClientContext:(id)arg0 defaultContext:(id)arg1 ;
-(void)_setNeedsUpdateArbitrationWithReason:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateArbitrationWithClientContext:(id)arg0 defaultContext:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)noteArbiterDidCompleteTransitionWithContext:(id)arg0 ;
-(void)noteArbiterWillBeginTransitionWithContext:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setNeedsUpdateArbitrationWithContext:(id)arg0 ;
-(void)updateArbitrationIfNeeded;


@end


#endif