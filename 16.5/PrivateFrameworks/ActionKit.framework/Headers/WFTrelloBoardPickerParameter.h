// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTRELLOBOARDPICKERPARAMETER_H
#define WFTRELLOBOARDPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;



@interface WFTrelloBoardPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) id *observer; // ivar: _observer
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates


-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)updateBoards;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif