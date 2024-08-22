// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWAFRESONANCECALIBRATIONANALYTICSPAYLOAD_H
#define BWAFRESONANCECALIBRATIONANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWAFResonanceCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) int afAxisDampingCoefficient; // ivar: _afAxisDampingCoefficient
@property (nonatomic) int afAxisResonantFreq; // ivar: _afAxisResonantFreq
@property (nonatomic) int afGelModelD1Coefficient; // ivar: _afGelModelD1Coefficient
@property (nonatomic) int afGelModelD2Coefficient; // ivar: _afGelModelD2Coefficient
@property (nonatomic) int afGelModelP1Coefficient; // ivar: _afGelModelP1Coefficient
@property (nonatomic) int afGelModelP2Coefficient; // ivar: _afGelModelP2Coefficient
@property (nonatomic) int afLoopGain; // ivar: _afLoopGain
@property (nonatomic) unsigned int calibrationStatus; // ivar: _calibrationStatus
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int deltaAFAxisDampingCoefficient; // ivar: _deltaAFAxisDampingCoefficient
@property (nonatomic) int deltaAFAxisResonantFreq; // ivar: _deltaAFAxisResonantFreq
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger magneticFieldMagnitude; // ivar: _magneticFieldMagnitude
@property (retain, nonatomic) NSString *portType; // ivar: _portType
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif