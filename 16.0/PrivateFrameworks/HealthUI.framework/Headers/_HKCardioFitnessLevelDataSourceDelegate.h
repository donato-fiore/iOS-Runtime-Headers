// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKCARDIOFITNESSLEVELDATASOURCEDELEGATE_H
#define _HKCARDIOFITNESSLEVELDATASOURCEDELEGATE_H

@class NSDateComponents, HKUnit;
@protocol HKDateRangeDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"

@interface _HKCardioFitnessLevelDataSourceDelegate : NSObject <HKDateRangeDataSourceDelegate>



@property (retain, nonatomic) HKDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (nonatomic) NSInteger biologicalSex; // ivar: _biologicalSex
@property (nonatomic) NSInteger cardioFitnessLevel; // ivar: _cardioFitnessLevel
@property (retain, nonatomic) NSDateComponents *dateOfBirthComponents; // ivar: _dateOfBirthComponents
@property (retain, nonatomic) HKUnit *unit; // ivar: _unit


-(id)dataForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)initWithCardioFitnessLevel:(NSInteger)arg0 healthStore:(id)arg1 baseDisplayType:(id)arg2 ;
-(void)setUpdateDelegate:(id)arg0 ;


@end


#endif