// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDURATIONQUANTITYFIELDPARAMETER_H
#define WFDURATIONQUANTITYFIELDPARAMETER_H



#import "WFQuantityFieldParameter.h"

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (nonatomic) NSUInteger possibleCalendarUnits;


+(BOOL)unitStringIsDurationUnit:(id)arg0 ;
+(NSUInteger)calendarUnitFromUnitString:(id)arg0 ;
+(NSUInteger)possibleCalendarUnitsForUnits:(id)arg0 ;
+(id)stateForDuration:(CGFloat)arg0 possibleUnits:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleUnit:(id)arg0 magnitude:(id)arg1 style:(NSUInteger)arg2 ;
-(id)stateForDuration:(CGFloat)arg0 ;
-(void)createDialogRequestWithAttribution:(id)arg0 defaultState:(id)arg1 prompt:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif