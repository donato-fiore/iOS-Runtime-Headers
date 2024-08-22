// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSLACKCHANNELPICKERPARAMETER_H
#define WFSLACKCHANNELPICKERPARAMETER_H

@class WFEnumerationParameter, NSString, WFAction, NSArray;
@protocol WFActionEventObserver;



@interface WFSlackChannelPickerParameter : WFEnumerationParameter <WFActionEventObserver>



@property (readonly, nonatomic) NSString *accountParameterKey;
@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates
@property (readonly) Class superclass;


-(BOOL)isHidden;
-(id)account;
-(id)defaultSerializedRepresentation;
-(id)identifierForChannelWithName:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)updateSlackChannels;
-(void)wasAddedToWorkflow;


@end


#endif