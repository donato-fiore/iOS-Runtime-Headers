// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCULATEUNIT_H
#define CALCULATEUNIT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CalculateUnit.h"
#import "UnitInfo.h"

@interface CalculateUnit : NSObject

@property (readonly, nonatomic) int exponent; // ivar: _exponent
@property (readonly, nonatomic) BOOL formatNextSmallest;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) CalculateUnit *nextSmallest; // ivar: _nextSmallest
@property (retain, nonatomic) UnitInfo *unitInfo; // ivar: _unitInfo
@property (readonly, nonatomic) NSUInteger unitType; // ivar: _unitType


+(id)unitWithID:(int)arg0 unitsInfo:(id)arg1 exponent:(int)arg2 ;
-(BOOL)isDenominator;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNumerator;
-(NSInteger)compare:(id)arg0 ;
-(id)compactNameForLocalization:(id)arg0 ;
-(id)description;
-(id)localizedNameForValue:(CGFloat)arg0 localization:(id)arg1 retainingFormat:(BOOL)arg2 ;


@end


#endif