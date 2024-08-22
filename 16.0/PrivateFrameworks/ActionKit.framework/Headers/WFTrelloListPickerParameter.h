// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRELLOLISTPICKERPARAMETER_H
#define WFTRELLOLISTPICKERPARAMETER_H

@class WFEnumerationParameter, WFAction, NSString, NSArray;
@protocol WFActionEventObserver;



@interface WFTrelloListPickerParameter : WFEnumerationParameter <WFActionEventObserver>



@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *observer; // ivar: _observer
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)updateLists;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif