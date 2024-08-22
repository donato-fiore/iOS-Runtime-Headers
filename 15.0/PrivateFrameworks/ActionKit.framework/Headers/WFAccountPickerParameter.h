// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCOUNTPICKERPARAMETER_H
#define WFACCOUNTPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;



@interface WFAccountPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) Class accountClass; // ivar: _accountClass
@property (readonly, nonatomic) id *observer; // ivar: _observer
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates


-(BOOL)isHidden;
-(id)accountWithName:(id)arg0 ;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)dealloc;
-(void)wasAddedToWorkflow;


@end


#endif