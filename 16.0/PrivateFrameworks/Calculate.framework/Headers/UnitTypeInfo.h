// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNITTYPEINFO_H
#define UNITTYPEINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "UnitInfo.h"

@interface UnitTypeInfo : NSObject

@property (weak, nonatomic) UnitInfo *baseUnit; // ivar: _baseUnit
@property (nonatomic) UnitCounts decomposition; // ivar: _decomposition
@property (nonatomic) ? decompositionCoefficient; // ivar: _decompositionCoefficient
@property (nonatomic) BOOL isCurrency; // ivar: _isCurrency
@property (nonatomic) BOOL isDecomposable; // ivar: _isDecomposable
@property (nonatomic) BOOL isTemperature; // ivar: _isTemperature
@property (nonatomic) BOOL isVolume; // ivar: _isVolume
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int unitType; // ivar: _unitType
@property (retain, nonatomic) NSArray *units; // ivar: _units




@end


#endif