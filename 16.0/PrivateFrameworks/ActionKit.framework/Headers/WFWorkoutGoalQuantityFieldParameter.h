// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKOUTGOALQUANTITYFIELDPARAMETER_H
#define WFWORKOUTGOALQUANTITYFIELDPARAMETER_H

@class WFQuantityFieldParameter, NSArray, WFAction, NSString;
@protocol WFActionEventObserver;



@interface WFWorkoutGoalQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver>

 {
    NSArray *_possibleUnits;
    id *_defaultSerializedRepresentation;
}


@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)unitConversion;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(NSUInteger)currentWorkoutActivityType;
-(id)defaultSerializedRepresentation;
-(id)defaultState;
-(id)localizedLabelForPossibleUnit:(id)arg0 magnitude:(id)arg1 style:(NSUInteger)arg2 ;
-(id)possibleUnits;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)availableUnitsForWorkoutActivityType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)setPossibleUnits:(id)arg0 ;
-(void)updateCurrentStateWithNewUnitString:(id)arg0 currentState:(id)arg1 ;
-(void)updatePossibleUnits;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif