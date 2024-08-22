// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAIRDROPVISIBILITYPARAMETER_H
#define WFAIRDROPVISIBILITYPARAMETER_H

@class WFEnumerationParameter, NSArray;



@interface WFAirDropVisibilityParameter : WFEnumerationParameter

@property (nonatomic, readonly) id *defaultSerializedRepresentation;
@property (nonatomic, readonly) NSArray *possibleStates;


-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;


@end


#endif