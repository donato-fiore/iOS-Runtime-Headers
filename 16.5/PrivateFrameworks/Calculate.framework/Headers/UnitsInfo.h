// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNITSINFO_H
#define UNITSINFO_H

@class NSMutableArray, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "UnitTypeInfo.h"
#import "UnitInfo.h"

@interface UnitsInfo : NSObject

@property (weak, nonatomic) UnitTypeInfo *angleInfo; // ivar: _angleInfo
@property (weak, nonatomic) UnitInfo *degreesInfo; // ivar: _degreesInfo
@property (weak, nonatomic) UnitInfo *radiansInfo; // ivar: _radiansInfo
@property (readonly, nonatomic) int unitCount; // ivar: _unitCount
@property (retain, nonatomic) NSMutableArray *unitIDToInfo; // ivar: _unitIDToInfo
@property (retain, nonatomic) NSMutableDictionary *unitNameToInfo; // ivar: _unitNameToInfo
@property (readonly, nonatomic) NSArray *unitNames; // ivar: _unitNames
@property (readonly, nonatomic) int unitTypeCount; // ivar: _unitTypeCount
@property (retain, nonatomic) NSMutableDictionary *unitTypeNameToInfo; // ivar: _unitTypeNameToInfo
@property (retain, nonatomic) NSMutableArray *unitTypeToInfo; // ivar: _unitTypeToInfo


+(BOOL)shouldSkipUnitName:(id)arg0 ;
+(id)unitsInfoWithDictionary:(id)arg0 ;
-(id)infoForAngle;
-(id)infoForDegrees;
-(id)infoForRadians;
-(id)infoForUnitID:(int)arg0 ;
-(id)infoForUnitName:(id)arg0 ;
-(id)infoForUnitType:(int)arg0 ;
-(id)infoForUnitTypeName:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)populateSubunitIDs:(id)arg0 forUnit:(id)arg1 visited:(id)arg2 ;


@end


#endif