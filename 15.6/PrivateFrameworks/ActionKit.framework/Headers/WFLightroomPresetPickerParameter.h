// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLIGHTROOMPRESETPICKERPARAMETER_H
#define WFLIGHTROOMPRESETPICKERPARAMETER_H

@class WFEnumerationParameter, WFAction, NSString, NSArray;
@protocol WFActionEventObserver;



@interface WFLightroomPresetPickerParameter : WFEnumerationParameter <WFActionEventObserver>



@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates
@property (readonly) Class superclass;


+(id)presetsByGroup;
-(BOOL)isHidden;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;


@end


#endif