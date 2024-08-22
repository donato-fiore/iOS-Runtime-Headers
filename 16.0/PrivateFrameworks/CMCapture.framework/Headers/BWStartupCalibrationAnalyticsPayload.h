// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTARTUPCALIBRATIONANALYTICSPAYLOAD_H
#define BWSTARTUPCALIBRATIONANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWStartupCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) float accelStandardDeviation; // ivar: _accelStandardDeviation
@property (nonatomic) int apsVoltage; // ivar: _apsVoltage
@property (nonatomic) BOOL closedLoopEntry; // ivar: _closedLoopEntry
@property (nonatomic) BOOL confidenceErrorOccurred; // ivar: _confidenceErrorOccurred
@property (nonatomic) BOOL convergeErrorOccurred; // ivar: _convergeErrorOccurred
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float deltaAcceleration; // ivar: _deltaAcceleration
@property (nonatomic) float deltaOffset; // ivar: _deltaOffset
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL gcolEntry; // ivar: _gcolEntry
@property (nonatomic) float gyroStandardDeviation; // ivar: _gyroStandardDeviation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL headroomErrorOccurred; // ivar: _headroomErrorOccurred
@property (nonatomic) BOOL largeOffsetErrorOccurred; // ivar: _largeOffsetErrorOccurred
@property (nonatomic) float maxAcceleration; // ivar: _maxAcceleration
@property (nonatomic) BOOL motionErrorOccurred; // ivar: _motionErrorOccurred
@property (retain, nonatomic) NSString *portType; // ivar: _portType
@property (nonatomic) BOOL saturationErrorOccurred; // ivar: _saturationErrorOccurred
@property (nonatomic) float sessionOffset; // ivar: _sessionOffset
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif