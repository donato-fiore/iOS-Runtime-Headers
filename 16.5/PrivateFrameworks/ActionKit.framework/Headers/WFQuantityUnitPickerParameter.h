// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFQUANTITYUNITPICKERPARAMETER_H
#define WFQUANTITYUNITPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray, HKQuantityType;
@protocol OS_dispatch_group;



@interface WFQuantityUnitPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_group> *possibleStateLoadingGroup; // ivar: _possibleStateLoadingGroup
@property (retain, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType


-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(void)updatePossibleStates;


@end


#endif