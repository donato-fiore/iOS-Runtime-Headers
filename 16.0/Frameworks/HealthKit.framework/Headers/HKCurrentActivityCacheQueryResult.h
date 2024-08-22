// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCURRENTACTIVITYCACHEQUERYRESULT_H
#define HKCURRENTACTIVITYCACHEQUERYRESULT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKActivityCache.h"

@interface HKCurrentActivityCacheQueryResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *activeEnergyResults; // ivar: _activeEnergyResults
@property (copy, nonatomic) NSArray *appleExerciseTimeResults; // ivar: _appleExerciseTimeResults
@property (copy, nonatomic) NSArray *appleMoveTimeResults; // ivar: _appleMoveTimeResults
@property (copy, nonatomic) NSArray *appleStandHourResults; // ivar: _appleStandHourResults
@property (retain, nonatomic) HKActivityCache *currentActivityCache; // ivar: _currentActivityCache


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif