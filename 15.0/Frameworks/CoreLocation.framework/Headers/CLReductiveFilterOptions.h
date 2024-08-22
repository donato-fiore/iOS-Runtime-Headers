// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLREDUCTIVEFILTEROPTIONS_H
#define CLREDUCTIVEFILTEROPTIONS_H


#import <Foundation/Foundation.h>


@interface CLReductiveFilterOptions : NSObject

@property (nonatomic) CGFloat applyRangeEstimation; // ivar: _applyRangeEstimation
@property (readonly, nonatomic) NSUInteger beaconType; // ivar: _beaconType
@property (nonatomic) CGFloat biasRateInMeasurement; // ivar: _biasRateInMeasurement
@property (readonly, nonatomic) CGFloat transmitPower; // ivar: _transmitPower


-(id)init;
-(id)initWithBeaconType:(NSUInteger)arg0 ;
-(id)initWithBeaconType:(NSUInteger)arg0 transmitPower:(CGFloat)arg1 ;


@end


#endif