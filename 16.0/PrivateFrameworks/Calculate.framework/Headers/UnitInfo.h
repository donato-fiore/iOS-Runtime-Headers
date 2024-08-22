// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNITINFO_H
#define UNITINFO_H

@class NSSet, NSMutableDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "UnitInfo.h"
#import "UnitTypeInfo.h"

@interface UnitInfo : NSObject

@property (retain, nonatomic) NSSet *allSubunitIDs; // ivar: _allSubunitIDs
@property (nonatomic) ? baseDenominator; // ivar: _baseDenominator
@property (nonatomic) ? baseNumerator; // ivar: _baseNumerator
@property (weak, nonatomic) UnitInfo *bestEquivalent; // ivar: _bestEquivalent
@property (nonatomic) BOOL doNotSuggest; // ivar: _doNotSuggest
@property (nonatomic) BOOL impliesDivision; // ivar: _impliesDivision
@property (nonatomic) BOOL isBaseUnit; // ivar: _isBaseUnit
@property (nonatomic) BOOL isCelsius; // ivar: _isCelsius
@property (nonatomic) BOOL isDisplayName; // ivar: _isDisplayName
@property (nonatomic) BOOL isFahrenheit; // ivar: _isFahrenheit
@property (nonatomic) BOOL isInverted; // ivar: _isInverted
@property (nonatomic) BOOL isKelvin; // ivar: _isKelvin
@property (retain, nonatomic) NSMutableDictionary *localizationToCompactName; // ivar: _localizationToCompactName
@property (nonatomic) NSUInteger measurementSystem; // ivar: _measurementSystem
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) UnitInfo *nextSmallest; // ivar: _nextSmallest
@property (retain, nonatomic) NSArray *subunitIDs; // ivar: _subunitIDs
@property (weak, nonatomic) UnitTypeInfo *typeInfo; // ivar: _typeInfo
@property (nonatomic) int unitID; // ivar: _unitID
@property (nonatomic) int unitType; // ivar: _unitType


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)compactNameForLocalization:(id)arg0 ;
-(id)init;


@end


#endif