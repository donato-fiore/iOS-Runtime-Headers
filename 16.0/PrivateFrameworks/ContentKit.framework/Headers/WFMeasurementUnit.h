// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMEASUREMENTUNIT_H
#define WFMEASUREMENTUNIT_H


#import <Foundation/Foundation.h>


@interface WFMeasurementUnit : NSObject



+(BOOL)usesMetricSystemForUnitType:(id)arg0 ;
+(Class)unitClassForUnitType:(id)arg0 ;
+(id)availableUnitTypes;
+(id)availableUnitsForUnitType:(id)arg0 ;
+(id)defaultUnitForUnitType:(id)arg0 ;
+(id)localizedStringForUnitType:(id)arg0 ;
+(id)unitFromString:(id)arg0 ;
+(id)unitFromString:(id)arg0 unitType:(id)arg1 caseSensitive:(BOOL)arg2 ;
+(id)unitTypeForUnitClass:(Class)arg0 ;
+(id)unitTypeFromLinkMeasurementUnitType:(NSInteger)arg0 ;
+(id)unitTypeMap;


@end


#endif