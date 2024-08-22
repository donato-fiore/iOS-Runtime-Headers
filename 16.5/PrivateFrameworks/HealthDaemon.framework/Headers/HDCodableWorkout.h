// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEWORKOUT_H
#define HDCODABLEWORKOUT_H

@class PBCodable, NSString, NSMutableArray;
@protocol HDDecoding, NSCopying;


#import "HDCodableWorkoutActivity.h"
#import "HDCodableSample.h"

@interface HDCodableWorkout : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (nonatomic) CGFloat goal; // ivar: _goal
@property (nonatomic) NSInteger goalType; // ivar: _goalType
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) BOOL hasGoalType;
@property (readonly, nonatomic) BOOL hasPrimaryActivity;
@property (readonly, nonatomic) BOOL hasSample;
@property (nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalDistanceInCanonicalUnit;
@property (nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalFlightsClimbedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalSwimmingStrokeCountInCanonicalUnit;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableWorkoutActivity *primaryActivity; // ivar: _primaryActivity
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (retain, nonatomic) NSMutableArray *subActivities; // ivar: _subActivities
@property (readonly) Class superclass;
@property (nonatomic) CGFloat totalBasalEnergyBurnedInCanonicalUnit; // ivar: _totalBasalEnergyBurnedInCanonicalUnit
@property (nonatomic) CGFloat totalDistanceInCanonicalUnit; // ivar: _totalDistanceInCanonicalUnit
@property (nonatomic) CGFloat totalEnergyBurnedInCanonicalUnit; // ivar: _totalEnergyBurnedInCanonicalUnit
@property (nonatomic) CGFloat totalFlightsClimbedInCanonicalUnit; // ivar: _totalFlightsClimbedInCanonicalUnit
@property (nonatomic) CGFloat totalSwimmingStrokeCountInCanonicalUnit; // ivar: _totalSwimmingStrokeCountInCanonicalUnit
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(id)subActivitiesAtIndex:(NSUInteger)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)addSubActivities:(id)arg0 ;
-(void)clearEvents;
-(void)clearSubActivities;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif