// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMEASUREMENTUNITPICKERPARAMETER_H
#define WFMEASUREMENTUNITPICKERPARAMETER_H

@class WFEnumerationParameter, WFAction, NSString;
@protocol WFActionEventObserver;



@interface WFMeasurementUnitPickerParameter : WFEnumerationParameter <WFActionEventObserver>



@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isHidden;
-(Class)singleStateClass;
-(id)currentUnitType;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;


@end


#endif