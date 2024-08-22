// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDEUROTASDATA_H
#define HDEUROTASDATA_H



#import "HDHealthServiceCharacteristic.h"

@interface HDEurotasData : HDHealthServiceCharacteristic

@property (readonly, nonatomic) unsigned short activeEnergy; // ivar: _activeEnergy
@property (readonly, nonatomic) unsigned short averageHeartRate; // ivar: _averageHeartRate
@property (readonly, nonatomic) BOOL hasActiveEnergy; // ivar: _hasActiveEnergy
@property (readonly, nonatomic) BOOL hasAverageHeartRate; // ivar: _hasAverageHeartRate
@property (readonly, nonatomic) BOOL hasHeartRate; // ivar: _hasHeartRate
@property (readonly, nonatomic) BOOL hasTotalEnergy; // ivar: _hasTotalEnergy
@property (readonly, nonatomic) unsigned short heartRate; // ivar: _heartRate
@property (readonly, nonatomic) unsigned short totalEnergy; // ivar: _totalEnergy


+(id)uuid;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)getBinaryValueWithError:(*id)arg0 ;
-(id)initForWriting;
-(void)addActiveEnergy:(unsigned short)arg0 ;
-(void)addAverageHeartRate:(unsigned short)arg0 ;
-(void)addHeartRate:(unsigned short)arg0 ;
-(void)addTotalEnergy:(unsigned short)arg0 ;


@end


#endif