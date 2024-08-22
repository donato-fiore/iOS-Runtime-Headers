// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMFITNESSMACHINEDATA_H
#define CMFITNESSMACHINEDATA_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMFitnessMachineData : NSObject <NSSecureCoding, NSCopying>

 {
    CGFloat fTimestamp;
}


@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (nonatomic) CGFloat inclination; // ivar: _inclination
@property (nonatomic) CGFloat instantaneousCadence; // ivar: _instantaneousCadence
@property (nonatomic) CGFloat instantaneousPower; // ivar: _instantaneousPower
@property (nonatomic) CGFloat instantaneousSpeed; // ivar: _instantaneousSpeed
@property (nonatomic) CGFloat resistanceLevel; // ivar: _resistanceLevel
@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) CGFloat totalDistance; // ivar: _totalDistance
@property (nonatomic) CGFloat totalElevationAscended; // ivar: _totalElevationAscended
@property (nonatomic) CGFloat totalEnergy; // ivar: _totalEnergy
@property (nonatomic) NSInteger totalFloorsClimbed; // ivar: _totalFloorsClimbed
@property (nonatomic) NSInteger totalStrideCount; // ivar: _totalStrideCount
@property (nonatomic) NSInteger totalStrokeCount; // ivar: _totalStrokeCount


+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 ;
-(void)convertToCLFitnessMachineData:(struct _CLFitnessMachineData *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif