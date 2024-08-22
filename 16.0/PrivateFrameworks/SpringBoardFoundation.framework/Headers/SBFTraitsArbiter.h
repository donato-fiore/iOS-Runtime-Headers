// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFTRAITSARBITER_H
#define SBFTRAITSARBITER_H

@class NSSet, NSMutableDictionary, NSMutableSet, NSMutableArray, NSHashTable, NSArray, NSString;
@protocol BSDescriptionProviding, BSInvalidatable, SBFTraitsArbiterDrawingDataSource, SBFTraitsArbiterInputsDataSource;

#import <Foundation/Foundation.h>

#import "SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier.h"
#import "SBFTraitsArbitrationInputsValidationStage.h"
#import "SBFTraitsArbitrationInputs.h"

@interface SBFTraitsArbiter : NSObject <BSDescriptionProviding>

 {
    NSSet *_zOrderStageRoles;
    NSSet *_orientationStageRoles;
    NSSet *_allStagesRoles;
    NSMutableDictionary *_liveRolesCounter;
    NSMutableDictionary *_acquiredParticipantsByUniqueIdentifier;
    NSMutableDictionary *_acquiredParticipantsByPreferencesType;
    NSMutableSet *_participantsNeedingUpdate;
    NSMutableArray *_arbiterNeedsUpdateReasons;
    NSMutableSet *_updatedParticipants;
    NSHashTable *_observers;
    SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier *_resolutionUpdateOrientationSpecifier;
    SBFTraitsArbitrationInputsValidationStage *_inputsValidationStage;
    NSArray *_preferencesResolutionStages;
    SBFTraitsArbitrationInputs *_lastRawInputs;
    SBFTraitsArbitrationInputs *_lastValidatedInputs;
    id<BSInvalidatable> *_stateDumpHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<SBFTraitsArbiterDrawingDataSource> *drawingDataSource; // ivar: _drawingDataSource
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<SBFTraitsArbiterInputsDataSource> *inputsDataSource; // ivar: _inputsDataSource
@property (readonly) Class superclass;


-(id)_defaultUpdateContextWithReason:(id)arg0 animatable:(BOOL)arg1 ;
-(id)_newOrderedPreferencesResolutionStagesWithRolesProvider:(id)arg0 ;
-(id)_newUniqueIdentifierForRole:(id)arg0 ;
-(id)_setupStateDump;
-(id)acquireParticipantWithRole:(id)arg0 delegate:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithRolesProvider:(id)arg0 inputsDataSource:(id)arg1 drawingDataSource:(id)arg2 ;
-(id)inputsValidationStage;
-(id)orientationPreferencesResolutionStage;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_TEMP_89923418_updateZOrderSettingsForInputUI;
-(void)_addResolutionPolicySpecifierForClientContext:(id)arg0 ;
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