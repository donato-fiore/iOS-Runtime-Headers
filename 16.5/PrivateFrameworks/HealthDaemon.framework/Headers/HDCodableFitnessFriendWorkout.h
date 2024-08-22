// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEFITNESSFRIENDWORKOUT_H
#define HDCODABLEFITNESSFRIENDWORKOUT_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableFitnessFriendWorkout : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger amm; // ivar: _amm
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceManufacturer; // ivar: _deviceManufacturer
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSData *friendUUID; // ivar: _friendUUID
@property (nonatomic) CGFloat goal; // ivar: _goal
@property (nonatomic) NSInteger goalType; // ivar: _goalType
@property (nonatomic) BOOL hasAmm;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasDeviceManufacturer;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) BOOL hasGoalType;
@property (nonatomic) BOOL hasIsIndoorWorkout;
@property (nonatomic) BOOL hasIsWatchWorkout;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly, nonatomic) BOOL hasSeymourCatalogWorkoutIdentifier;
@property (readonly, nonatomic) BOOL hasSeymourMediaType;
@property (nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalDistanceInCanonicalUnit;
@property (nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger isIndoorWorkout; // ivar: _isIndoorWorkout
@property (nonatomic) NSInteger isWatchWorkout; // ivar: _isWatchWorkout
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (retain, nonatomic) NSString *seymourCatalogWorkoutIdentifier; // ivar: _seymourCatalogWorkoutIdentifier
@property (retain, nonatomic) NSString *seymourMediaType; // ivar: _seymourMediaType
@property (readonly) Class superclass;
@property (nonatomic) CGFloat totalBasalEnergyBurnedInCanonicalUnit; // ivar: _totalBasalEnergyBurnedInCanonicalUnit
@property (nonatomic) CGFloat totalDistanceInCanonicalUnit; // ivar: _totalDistanceInCanonicalUnit
@property (nonatomic) CGFloat totalEnergyBurnedInCanonicalUnit; // ivar: _totalEnergyBurnedInCanonicalUnit
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif