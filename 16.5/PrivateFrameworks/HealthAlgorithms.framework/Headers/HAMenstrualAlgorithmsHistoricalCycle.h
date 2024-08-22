// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAMENSTRUALALGORITHMSHISTORICALCYCLE_H
#define HAMENSTRUALALGORITHMSHISTORICALCYCLE_H

@class NSNumber, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsHistoricalCycle : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger dailyEligibleWristTemperatureCount; // ivar: _dailyEligibleWristTemperatureCount
@property (retain, nonatomic) NSNumber *fertilityEndJulianDay; // ivar: _fertilityEndJulianDay
@property (retain, nonatomic) NSNumber *fertilityStartJulianDay; // ivar: _fertilityStartJulianDay
@property (nonatomic) BOOL isDeterminant; // ivar: _isDeterminant
@property (nonatomic) unsigned int julianDayOfMenstruationEnd; // ivar: _julianDayOfMenstruationEnd
@property (nonatomic) unsigned int julianDayOfMenstruationStart; // ivar: _julianDayOfMenstruationStart
@property (nonatomic) unsigned char ovulationConfirmationFailure; // ivar: _ovulationConfirmationFailure
@property (retain, nonatomic) NSArray *phases; // ivar: _phases
@property (nonatomic) unsigned char predictionPrimarySource; // ivar: _predictionPrimarySource


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif