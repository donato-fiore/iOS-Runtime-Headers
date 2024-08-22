// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHOMECHARACTERISTICPICKERPARAMETER_H
#define WFHOMECHARACTERISTICPICKERPARAMETER_H

@class NSString, NSArray, HMService;


#import "WFEnumerationParameter.h"

@interface WFHomeCharacteristicPickerParameter : WFEnumerationParameter

@property (copy, nonatomic) NSString *homeIdentifier; // ivar: _homeIdentifier
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates
@property (retain, nonatomic) HMService *service; // ivar: _service


-(BOOL)isHidden;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)updatePossibleStates;


@end


#endif