// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSPHERERESONANCECALIBRATIONANALYTICSPAYLOAD_H
#define BWSPHERERESONANCECALIBRATIONANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWSphereResonanceCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) unsigned int calibrationStatus; // ivar: _calibrationStatus
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int deltaSphereXAxisDampingCoefficient; // ivar: _deltaSphereXAxisDampingCoefficient
@property (nonatomic) int deltaSphereXAxisResonantFrequency; // ivar: _deltaSphereXAxisResonantFrequency
@property (nonatomic) int deltaSphereYAxisDampingCoefficient; // ivar: _deltaSphereYAxisDampingCoefficient
@property (nonatomic) int deltaSphereYAxisResonantFrequency; // ivar: _deltaSphereYAxisResonantFrequency
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger magneticFieldMagnitude; // ivar: _magneticFieldMagnitude
@property (copy, nonatomic) NSString *portType; // ivar: _portType
@property (nonatomic) int sphereXAxisDampingCoefficient; // ivar: _sphereXAxisDampingCoefficient
@property (nonatomic) int sphereXAxisLoopGain; // ivar: _sphereXAxisLoopGain
@property (nonatomic) int sphereXAxisResonantFrequency; // ivar: _sphereXAxisResonantFrequency
@property (nonatomic) int sphereYAxisDampingCoefficient; // ivar: _sphereYAxisDampingCoefficient
@property (nonatomic) int sphereYAxisLoopGain; // ivar: _sphereYAxisLoopGain
@property (nonatomic) int sphereYAxisResonantFrequency; // ivar: _sphereYAxisResonantFrequency
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif