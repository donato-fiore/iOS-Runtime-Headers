// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCODABLECLOUDKITWORKOUT_H
#define ASCODABLECLOUDKITWORKOUT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ASCodableCloudKitSample.h"

@interface ASCodableCloudKitWorkout : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger amm; // ivar: _amm
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *deviceManufacturer; // ivar: _deviceManufacturer
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat goalInCanonicalUnit; // ivar: _goalInCanonicalUnit
@property (nonatomic) NSInteger goalType; // ivar: _goalType
@property (nonatomic) BOOL hasAmm;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasDeviceManufacturer;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasGoalInCanonicalUnit;
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
@property (nonatomic) BOOL isIndoorWorkout; // ivar: _isIndoorWorkout
@property (nonatomic) BOOL isWatchWorkout; // ivar: _isWatchWorkout
@property (retain, nonatomic) ASCodableCloudKitSample *sample; // ivar: _sample
@property (retain, nonatomic) NSString *seymourCatalogWorkoutIdentifier; // ivar: _seymourCatalogWorkoutIdentifier
@property (retain, nonatomic) NSString *seymourMediaType; // ivar: _seymourMediaType
@property (nonatomic) CGFloat totalBasalEnergyBurnedInCanonicalUnit; // ivar: _totalBasalEnergyBurnedInCanonicalUnit
@property (nonatomic) CGFloat totalDistanceInCanonicalUnit; // ivar: _totalDistanceInCanonicalUnit
@property (nonatomic) CGFloat totalEnergyBurnedInCanonicalUnit; // ivar: _totalEnergyBurnedInCanonicalUnit
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isAmm;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif