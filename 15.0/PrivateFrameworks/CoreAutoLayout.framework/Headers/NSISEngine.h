// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSISENGINE_H
#define NSISENGINE_H

@class NSMutableArray, NSHashTable, NSMapTable, NSMutableDictionary, NSThread, NSString;
@protocol NSISVariableDelegate, NSObservable, NSISEngineDelegate;

#import <Foundation/Foundation.h>

#import "_NSISVariableObservable.h"
#import "NSISVariableObservation.h"
#import "NSISVariable.h"
#import "NSISObjectiveLinearExpression.h"

@interface NSISEngine : NSObject <NSISVariableDelegate>

 {
    NSMutableArray *_pendingRemovals;
    NSHashTable *_pendingMarkerDelegates;
    NSObject<NSObservable> *_variableChangeTransactionSignal;
    NSMapTable *_variableObservables;
    _NSISVariableObservable *_dirtyObservables;
    NSMapTable *_brokenConstraintPositiveErrors;
    NSMapTable *_brokenConstraintNegativeErrors;
    id *_unsatisfiabilityHandler;
    NSUInteger _pivotCount;
    NSUInteger _variableChangeCount;
    NSMutableDictionary *_recordedOperations;
    NSThread *_allowedBGThread;
    int _automaticOptimizationDisabledCount;
    int _engineDelegateCallsDisabledCount;
    int _variableDelegateCallsDisabledCount;
    unsigned int _totalChangeCount;
    unsigned int _changeCountAtLastOptimization;
    BOOL _accumulatingRemovals;
    BOOL _engineNeedsOptimization;
    BOOL _allowUnoptimizedReads;
    BOOL _optimizationInProgress;
    BOOL _accessedFromMainThread;
    BOOL _engineNeedsRebuildFromConstraints;
    BOOL _changeNotificationsDirty;
    *NSISObjectTable _variablesObservations;
    NSISVariableObservation *_dirtyVariableObservations;
    NSMapTable *_rows;
    ? _engineVarTable;
    ? _rowTables;
    ? _colTables;
    NSISVariable *_headForObjectiveRow;
    ? _objectiveRow;
    NSISVariable *_placeholderHeadForExpressionBeingAdded;
}


@property (retain) NSISObjectiveLinearExpression *artificialObjectiveRowBody; // ivar: _artificialObjectiveRowBody
@property (retain) NSISVariable *artificialObjectiveRowHead; // ivar: _artificialObjectiveRowHead
@property (retain) NSISVariable *artificialRowHead; // ivar: _artificialRowHead
@property (readonly, copy) NSString *debugDescription;
@property NSObject<NSISEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize engineScalingCoefficients; // ivar: _engineScalingCoefficients
@property (readonly) NSUInteger hash;
@property (readonly, getter=isOptimizationInProgress) BOOL optimizationInProgress;
@property BOOL revertsAfterUnsatisfiabilityHandler; // ivar: _revertsAfterUnsatisfiabilityHandler
@property BOOL shouldIntegralize;
@property (readonly) Class superclass;
@property (readonly) NSUInteger variableChangeCount;
@property (retain) NSMutableArray *variablesWithValueRestrictionViolations; // ivar: _variablesWithValueRestrictionViolations


+(BOOL)_dbg_anyEngineContainsVariable:(id)arg0 ;
+(BOOL)enableEngineTrace;
+(id)traceFileSuffix;
+(void)setEnableEngineTrace:(BOOL)arg0 ;
+(void)setLogOnInvalidUseFromBGThread:(BOOL)arg0 ;
+(void)setTraceFileSuffix:(id)arg0 ;
-(BOOL)containsConstraintWithMarker:(id)arg0 ;
-(BOOL)containsVariable:(id)arg0 ;
-(BOOL)exerciseAmbiguityInVariable:(id)arg0 ;
-(BOOL)hasObservableForVariable:(id)arg0 ;
-(BOOL)hasValue:(*CGFloat)arg0 forExpression:(id)arg1 ;
-(BOOL)hasValue:(*CGFloat)arg0 forVariable:(id)arg1 ;
-(BOOL)hasValueForPossiblyDeallocatedVariable:(id)arg0 ;
-(BOOL)isObservingChangesForVariable:(id)arg0 ;
-(BOOL)isTrackingVariableChanges;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg0 ;
-(BOOL)tryToAddConstraintWithMarker:(id)arg0 expression:(id)arg1 integralizationAdjustment:(CGFloat)arg2 mutuallyExclusiveConstraints:(*id)arg3 ;
-(BOOL)tryToAddConstraintWithMarker:(id)arg0 expression:(id)arg1 mutuallyExclusiveConstraints:(*id)arg2 ;
-(BOOL)tryToChangeConstraintSuchThatMarker:(id)arg0 isReplacedByMarkerPlusDelta:(CGFloat)arg1 undoHandler:(id)arg2 ;
-(BOOL)valueOfVariableIsAmbiguous:(id)arg0 ;
-(CGFloat)integralizationAdjustmentForMarker:(id)arg0 ;
-(CGFloat)valueForExpression:(id)arg0 ;
-(CGFloat)valueForVariable:(id)arg0 ;
-(NSUInteger)_optimizeWithoutRebuilding;
-(NSUInteger)colCount;
-(NSUInteger)optimize;
-(NSUInteger)pivotCount;
-(NSUInteger)replayCommandsData:(id)arg0 verifyingIntegrity:(BOOL)arg1 ;
-(NSUInteger)rowCount;
-(id)_brokenConstraintNegativeErrorsIfAvailable;
-(id)_brokenConstraintPositiveErrorsIfAvailable;
-(id)allVariableValues;
-(id)candidateRedundantConstraints;
-(id)constraints;
-(id)constraintsAffectingValueOfVariable:(id)arg0 ;
-(id)init;
-(id)nsis_descriptionOfVariable:(id)arg0 ;
-(id)observableForVariable:(id)arg0 ;
-(id)recordedCommandsData;
-(id)variableChangeTransactionSignal;
-(id)variableForEngineVarIndex:(struct ? )arg0 ;
-(int)nsis_orientationHintForVariable:(id)arg0 ;
-(int)valueRestrictionForEngineVarIndex:(struct ? )arg0 ;
-(struct ? )engineVarIndexForVariable:(id)arg0 ;
-(struct ? *)traceState;
-(void)addVariableToBeOptimized:(id)arg0 priority:(CGFloat)arg1 ;
-(void)beginBookkeepingForVariableIfNeeded:(id)arg0 ;
-(void)beginRecording;
-(void)changeVariableToBeOptimized:(id)arg0 fromPriority:(CGFloat)arg1 toPriority:(CGFloat)arg2 ;
-(void)constraintDidChangeSuchThatMarker:(id)arg0 shouldBeReplacedByMarkerPlusDelta:(CGFloat)arg1 ;
-(void)dealloc;
-(void)endBookkeepingForVariableIfUnused:(id)arg0 ;
-(void)enumerateRows:(id)arg0 ;
-(void)nsis_valueOfVariable:(id)arg0 didChangeInEngine:(id)arg1 ;
// -(void)performModifications:(id)arg0 withUnsatisfiableConstraintsHandler:(unk)arg1  ;
-(void)performPendingChangeNotifications;
-(void)performPendingChangeNotificationsForItem:(id)arg0 ;
-(void)removeConstraintWithMarker:(id)arg0 ;
-(void)removeObservableForVariable:(id)arg0 ;
-(void)removeVariableToBeOptimized:(id)arg0 priority:(CGFloat)arg1 ;
-(void)startObservingChangesForVariable:(id)arg0 ;
-(void)stopObservingChangesForVariable:(id)arg0 ;
-(void)verifyInternalIntegrity;
-(void)withAutomaticOptimizationDisabled:(id)arg0 ;
-(void)withBehaviors:(NSUInteger)arg0 performModifications:(id)arg1 ;
-(void)withDelegateCallsDisabled:(id)arg0 ;
-(void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(id)arg0 ;


@end


#endif