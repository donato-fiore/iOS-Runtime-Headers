// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFUNITQUANTITYFIELDPARAMETER_H
#define WFUNITQUANTITYFIELDPARAMETER_H

@class NSArray, NSUnit, NSDictionary, NSString;


#import "WFQuantityFieldParameter.h"

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter {
    NSArray *_possibleUnits;
}


@property (retain, nonatomic) NSUnit *defaultUnit; // ivar: _defaultUnit
@property (nonatomic) BOOL fallbackToAllSupportedUnits; // ivar: _fallbackToAllSupportedUnits
@property (retain, nonatomic) NSDictionary *unitSymbolMap; // ivar: _unitSymbolMap
@property (copy, nonatomic) NSString *unitType; // ivar: _unitType


-(BOOL)parameterStateIsValid:(id)arg0 ;
-(id)availableUnitForStringValue:(id)arg0 ;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleUnit:(id)arg0 magnitude:(id)arg1 style:(NSUInteger)arg2 ;
-(id)possibleUnits;
-(void)setPossibleUnits:(id)arg0 ;
-(void)updatePossibleUnits;


@end


#endif