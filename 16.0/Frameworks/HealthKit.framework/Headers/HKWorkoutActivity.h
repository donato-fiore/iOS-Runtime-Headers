// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTACTIVITY_H
#define HKWORKOUTACTIVITY_H

@class NSMutableDictionary, NSUUID, NSDictionary, NSDate, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKWorkoutConfiguration.h"

@interface HKWorkoutActivity : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_statisticsPerType;
}


@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSDictionary *allStatistics;
@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly, copy) NSDate *endDate; // ivar: _endDate
@property (readonly, copy) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic, getter=_startsPaused) BOOL startsPaused; // ivar: _startsPaused
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration
@property (readonly, copy) NSArray *workoutEvents; // ivar: _workoutEvents


+(BOOL)supportsSecureCoding;
-(BOOL)_filterAndSetWorkoutEvents:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)unitTest_isEqualToActivity:(id)arg0 includingStatistics:(BOOL)arg1 ;
-(NSUInteger)hash;
-(id)_deepCopy;
-(id)_initWithUUID:(id)arg0 workoutConfiguration:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 startsPaused:(BOOL)arg5 duration:(CGFloat)arg6 metadata:(id)arg7 statisticsPerType:(id)arg8 ;
-(id)_statisticsPerType;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkoutConfiguration:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 metadata:(id)arg3 ;
-(id)statisticsForType:(id)arg0 ;
-(void)_enumerateActiveTimePeriods:(id)arg0 ;
-(void)_setStatistics:(id)arg0 forType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif