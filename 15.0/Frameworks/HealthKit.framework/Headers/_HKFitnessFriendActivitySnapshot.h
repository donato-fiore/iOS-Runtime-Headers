// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKFITNESSFRIENDACTIVITYSNAPSHOT_H
#define _HKFITNESSFRIENDACTIVITYSNAPSHOT_H

@class NSUUID, NSDate, NSTimeZone, NSNumber;
@protocol NSCopying;


#import "HKSample.h"

@interface _HKFitnessFriendActivitySnapshot : HKSample <NSCopying>



@property (nonatomic) CGFloat activeHours; // ivar: _activeHours
@property (nonatomic) CGFloat activeHoursGoal; // ivar: _activeHoursGoal
@property (readonly, nonatomic) CGFloat activeHoursGoalPercentage;
@property (nonatomic) NSInteger amm; // ivar: _amm
@property (nonatomic) CGFloat briskMinutes; // ivar: _briskMinutes
@property (nonatomic) CGFloat briskMinutesGoal; // ivar: _briskMinutesGoal
@property (readonly, nonatomic) CGFloat briskMinutesGoalPercentage;
@property (nonatomic) CGFloat energyBurned; // ivar: _energyBurned
@property (nonatomic) CGFloat energyBurnedGoal; // ivar: _energyBurnedGoal
@property (readonly, nonatomic) CGFloat energyBurnedGoalPercentage;
@property (retain, nonatomic) NSUUID *friendUUID; // ivar: _friendUUID
@property (nonatomic) BOOL hasCarriedForwardGoals; // ivar: _hasCarriedForwardGoals
@property (nonatomic) CGFloat mmg; // ivar: _mmg
@property (readonly, nonatomic) CGFloat mmgp;
@property (nonatomic) CGFloat mmv; // ivar: _mmv
@property (nonatomic) CGFloat pushCount; // ivar: _pushCount
@property (nonatomic) NSInteger snapshotIndex; // ivar: _snapshotIndex
@property (retain, nonatomic) NSDate *snapshotUploadedDate; // ivar: _snapshotUploadedDate
@property (retain, nonatomic) NSUUID *sourceUUID; // ivar: _sourceUUID
@property (nonatomic) CGFloat stepCount; // ivar: _stepCount
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSNumber *timeZoneOffsetFromUTCForNoon; // ivar: _timeZoneOffsetFromUTCForNoon
@property (nonatomic) CGFloat walkingAndRunningDistance; // ivar: _walkingAndRunningDistance
@property (nonatomic) NSInteger wheelchairUse; // ivar: _wheelchairUse


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(id)_fitnessFriendActivitySnapshotWithFriendUUID:(id)arg0 sourceUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 snapshotIndex:(NSInteger)arg4 snapshotUploadedDate:(id)arg5 ;
+(id)_fitnessFriendActivitySnapshotWithSnapshotIndex:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 sourceUUID:(id)arg3 ;
+(id)_mostSignificantSnapshotAmongSnapshots:(id)arg0 ;
+(id)snapshotWithActivitySummary:(id)arg0 ;
-(id)_mostSignificantSnapshot:(id)arg0 ;
-(id)activitySummary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif