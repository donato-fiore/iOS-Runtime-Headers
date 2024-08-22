// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMINDERSLISTPICKERPARAMETER_H
#define WFREMINDERSLISTPICKERPARAMETER_H

@class NSArray;


#import "WFEnumerationParameter.h"

@interface WFRemindersListPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) BOOL allowsAllLists; // ivar: _allowsAllLists
@property (retain, nonatomic) id *defaultSerializedListRepresentation; // ivar: _defaultSerializedListRepresentation
@property (retain, nonatomic) NSArray *listStates; // ivar: _listStates


-(Class)singleStateClass;
-(id)accessoryColorForPossibleState:(id)arg0 ;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(void)reloadStates;
-(void)storeDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif