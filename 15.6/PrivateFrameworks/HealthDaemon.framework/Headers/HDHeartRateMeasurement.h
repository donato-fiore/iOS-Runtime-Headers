// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEARTRATEMEASUREMENT_H
#define HDHEARTRATEMEASUREMENT_H

@class NSArray, NSDate;
@protocol HDDatumRendering;


#import "HDHealthServiceCharacteristic.h"

@interface HDHeartRateMeasurement : HDHealthServiceCharacteristic <HDDatumRendering>



@property (readonly, nonatomic) NSUInteger derivedContactStatus;
@property (nonatomic) NSInteger energyExpended; // ivar: _energyExpended
@property (nonatomic) BOOL hasEnergyExpended; // ivar: _hasEnergyExpended
@property (nonatomic) BOOL hasSensorContact; // ivar: _hasSensorContact
@property (nonatomic) NSInteger heartRateValue; // ivar: _heartRateValue
@property (retain, nonatomic) NSArray *rrIntervals; // ivar: _rrIntervals
@property (nonatomic) BOOL sensorContact; // ivar: _sensorContact
@property (readonly, nonatomic) NSDate *updateTime;


+(id)_buildWithBinaryValue:(id)arg0 error:(*id)arg1 ;
+(id)uuid;
-(id)description;
-(id)generateDatums:(id)arg0 ;


@end


#endif