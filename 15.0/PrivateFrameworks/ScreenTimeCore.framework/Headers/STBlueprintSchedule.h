// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STBLUEPRINTSCHEDULE_H
#define STBLUEPRINTSCHEDULE_H

@class NSManagedObject, NSString, NSDate, NSNumber;
@protocol STSerializableManagedObject, STSyncableSubObject;


#import "STBlueprint.h"
#import "STBlueprintScheduleRepresentation.h"

@interface STBlueprintSchedule : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>



@property (readonly, nonatomic) STBlueprint *blueprint;
@property (copy, nonatomic) NSString *calendarIdentifier;
@property (retain, nonatomic) NSDate *day0End;
@property (retain, nonatomic) NSDate *day0Start;
@property (retain, nonatomic) NSDate *day1End;
@property (retain, nonatomic) NSDate *day1Start;
@property (retain, nonatomic) NSDate *day2End;
@property (retain, nonatomic) NSDate *day2Start;
@property (retain, nonatomic) NSDate *day3End;
@property (retain, nonatomic) NSDate *day3Start;
@property (retain, nonatomic) NSDate *day4End;
@property (retain, nonatomic) NSDate *day4Start;
@property (retain, nonatomic) NSDate *day5End;
@property (retain, nonatomic) NSDate *day5Start;
@property (retain, nonatomic) NSDate *day6End;
@property (retain, nonatomic) NSDate *day6Start;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *notificationTimeInterval;
@property (retain, nonatomic) STBlueprintScheduleRepresentation *scheduleRepresentation;
@property (readonly) Class superclass;
@property (readonly) NSObject<STSerializableManagedObject> *syncableRootObject;


+(id)_boundaryForState:(NSInteger)arg0 fromStartBoundaries:(id)arg1 fromEndBoundaries:(id)arg2 ;
+(id)_nextBoundaryAfterDate:(id)arg0 matchingDate:(id)arg1 onDay:(NSInteger)arg2 inCalendar:(id)arg3 ;
+(id)endDateKeyPaths;
+(id)keyPathsForValuesAffectingScheduleRepresentation;
+(id)startDateKeyPaths;
-(BOOL)_computeNextStartDate:(*id)arg0 nextEndDate:(*id)arg1 afterDate:(id)arg2 forDay:(NSInteger)arg3 usingCalendar:(id)arg4 ;
-(BOOL)_computeStartBoundaries:(*id)arg0 endBoundaries:(*id)arg1 forCreationDate:(id)arg2 calendar:(id)arg3 ;
-(BOOL)isActiveAtDate:(id)arg0 inCalendar:(id)arg1 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)computeNextOverrideEndDateForState:(NSInteger)arg0 creationDate:(id)arg1 inCalendar:(id)arg2 ;
-(id)computeNextScheduleBoundaryAfterDate:(id)arg0 inCalendar:(id)arg1 isStartDate:(*BOOL)arg2 ;
-(id)dictionaryRepresentation;
-(void)_datePairForDay:(NSInteger)arg0 startDate:(*id)arg1 endDate:(*id)arg2 ;
-(void)setStartTime:(id)arg0 endTime:(id)arg1 ;
-(void)setStartTime:(id)arg0 endTime:(id)arg1 forDay:(NSUInteger)arg2 ;


@end


#endif