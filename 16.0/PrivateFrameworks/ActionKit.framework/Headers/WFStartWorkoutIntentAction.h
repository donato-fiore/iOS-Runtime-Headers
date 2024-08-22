// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSTARTWORKOUTINTENTACTION_H
#define WFSTARTWORKOUTINTENTACTION_H

@class WFHandleSystemIntentAction;



@interface WFStartWorkoutIntentAction : WFHandleSystemIntentAction



+(id)unitStringsToWorkoutGoalUnits;
+(id)workoutActivityTypeToWorkoutIdentifier;
-(BOOL)allowsContinueInAppWhenRunningRemotely;
-(BOOL)isKjGoal:(id)arg0 ;
-(BOOL)isKmGoal:(id)arg0 ;
-(BOOL)isParameterHidden:(id)arg0 ;
-(BOOL)skipsProcessingHiddenParameters;
-(NSUInteger)normalizedWorkoutActivityType:(NSUInteger)arg0 ;
-(id)actionForAppIdentifier:(id)arg0 ;
-(id)appResource;
-(id)goalParameter;
-(id)goalUnitTypeFromValue:(id)arg0 ;
-(id)goalValueFromValue:(id)arg0 ;
-(id)icon;
-(id)identifierForActivityType:(NSUInteger)arg0 ;
-(id)kjGoalConvertedToJ:(id)arg0 ;
-(id)kmGoalConvertedToM:(id)arg0 ;
-(id)location;
-(id)parameterForSlot:(id)arg0 ;
-(id)selectedAppNotSupportedError;
-(id)workoutGoalUnitTypeNumberForUnitString:(id)arg0 ;
-(id)workoutNameForActivityType:(id)arg0 ;
-(id)workoutTypeParameter;
-(void)initializeParameters;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;
-(void)resourceAvailabilityChanged;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif