// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROAUTOEDITTRANSITIONCONTROLLER_H
#define MIROAUTOEDITTRANSITIONCONTROLLER_H

@class NSDictionary, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"
#import "MiroAutoEditKenBurnsController.h"
#import "Project.h"

@interface MiroAutoEditTransitionController : NSObject

@property (retain, nonatomic) MiroBlueprint *activeBlueprint; // ivar: _activeBlueprint
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges; // ivar: _featuredPersonsInMemoryAsFaceRanges
@property (retain, nonatomic) NSMutableDictionary *groupingTransitions; // ivar: _groupingTransitions
@property (retain, nonatomic) MiroAutoEditKenBurnsController *kbController; // ivar: _kbController
@property (retain, nonatomic) NSMutableArray *kenBurnsPanZoomPatterns; // ivar: _kenBurnsPanZoomPatterns
@property (retain, nonatomic) NSMutableArray *layoutClips; // ivar: _layoutClips
@property (nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (nonatomic) BOOL memoryFeaturesPeople; // ivar: _memoryFeaturesPeople
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset; // ivar: _memoryFeaturesPersonInAsset
@property (nonatomic) NSUInteger memorySubcategory; // ivar: _memorySubcategory
@property (nonatomic) BOOL memoryTypeDisablesCropping; // ivar: _memoryTypeDisablesCropping
@property (retain, nonatomic) NSMutableArray *multiTransitions; // ivar: _multiTransitions
@property (nonatomic) int numberOfPotentialTransitionPoints; // ivar: _numberOfPotentialTransitionPoints
@property (retain, nonatomic) Project *project; // ivar: _project
@property (retain, nonatomic) NSMutableArray *specialTransitions; // ivar: _specialTransitions
@property (retain, nonatomic) NSMutableArray *transitions; // ivar: _transitions


-(BOOL)attemptToTransitionFromClip:(id)arg0 toClip:(id)arg1 withSettingsFromLayoutClip:(id)arg2 ;
-(BOOL)clipHasMediaLimitations:(id)arg0 ;
-(BOOL)clipShouldTrimToSelection:(id)arg0 ;
-(BOOL)findAndAssignConsecutiveClipsIn:(id)arg0 supportingTransitionGroup:(id)arg1 ;
-(BOOL)transitionAcceptableBetween:(id)arg0 secondClip:(id)arg1 ;
-(BOOL)transitionCandidate:(id)arg0 validForLayoutClip:(id)arg1 ;
-(BOOL)transitionDictatesKenBurnsMotion:(id)arg0 ;
-(NSUInteger)kenBurnsPaceForBlueprint;
-(NSUInteger)kenBurnsPreferredMovementForClip:(id)arg0 ;
-(NSUInteger)safeInsertIndexForTransition:(id)arg0 inTransitions:(id)arg1 ;
-(id)_everyTransitionDEBUG;
-(id)clipBeforeClip:(id)arg0 ;
-(id)convertMultiTransitionDictionary:(id)arg0 basedOnMultiLayout:(int)arg1 ;
-(id)nextKBPanAndZoomSetForNumberOfEdits:(int)arg0 following:(id)arg1 forAspect:(id)arg2 ;
-(id)prepareTransitionsFromBlueprint:(id)arg0 forNumberOfEditPoints:(int)arg1 numberOfMultiTransitions:(int)arg2 ;
-(id)transitionDictionaryForMultiFromBlueprint:(id)arg0 ;
-(id)transitionForLayoutClip:(id)arg0 ;
-(id)transitionFromTransitions:(id)arg0 leadingClipType:(int)arg1 followingClipType:(int)arg2 includesPano:(BOOL)arg3 ;
-(int)maxTransitionDurationFromClip:(id)arg0 toClip:(id)arg1 transitionName:(id)arg2 ;
-(int)numberOfMultiTransitionsNeeded;
-(int)numberOfTransitionClipsInLayoutClips;
-(void)adjustChosenTransitionsToAdhereToContentRules:(id)arg0 ;
-(void)applyClipEffectsBasedOnTransitions;
-(void)applyDeterminedKenBurnsTreatments:(id)arg0 forAspect:(id)arg1 ;
-(void)applyKenBurnsForBurstClip:(id)arg0 ;
-(void)applyKenBurnsOrEffectForKenBurnsClip:(id)arg0 ;
-(void)applyMultiUpTransitionTreatmentToLayoutClip:(id)arg0 ;
-(void)applyPanoStyleToClip:(id)arg0 ;
-(void)applyTransitionToLayoutClip:(id)arg0 ;
-(void)applyTransitions;
-(void)assignFirstAppropriateTransitionTo:(id)arg0 ;
-(void)assignRemainingKenBurnsAnyClipTreatments;
-(void)assignRequiredCutsAndMultiTransitionsIn:(id)arg0 ;
-(void)assignTransitionsToLayoutClips;
-(void)establishPanAndZoomPatterns;
-(void)prepareTransitionsForBlueprint;
-(void)shuffleTransitionsInArray:(id)arg0 ;
-(void)updateNumberOfTransitionsToInclude:(int)arg0 ;


@end


#endif