// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFITNESSWORKOUTTYPEPICKERPARAMETER_H
#define WFFITNESSWORKOUTTYPEPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray, WFAction, NSString;
@protocol WFActionEventObserver;



@interface WFFitnessWorkoutTypePickerParameter : WFEnumerationParameter <WFActionEventObserver>

 {
    int _characteristicUpdateToken;
    NSArray *_possibleStates;
}


@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)localizedPlaceholder;
-(id)possibleStates;
-(void)defaultSerializedRepresentationDidChange;
-(void)saveStateIfNeeded;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id)arg0 ;


@end


#endif