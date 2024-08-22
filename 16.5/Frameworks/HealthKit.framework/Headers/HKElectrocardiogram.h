// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKELECTROCARDIOGRAM_H
#define HKELECTROCARDIOGRAM_H

@class NSNumber, NSString, NSArray;
@protocol _HKBinarySample;


#import "HKSample.h"
#import "HKQuantity.h"

@interface HKElectrocardiogram : HKSample <_HKBinarySample>

 {
    Electrocardiogram _reading;
    NSUInteger _privateClassification;
    HKQuantity *_averageHeartRate;
}


@property (readonly, nonatomic, getter=_algorithmVersion) NSNumber *algorithmVersion;
@property (readonly, copy, nonatomic) HKQuantity *averageHeartRate;
@property (readonly, nonatomic) NSInteger classification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *leadNames;
@property (readonly, nonatomic, getter=_localizedSymptoms) NSArray *localizedSymptoms;
@property (readonly, nonatomic) NSInteger numberOfVoltageMeasurements;
@property (readonly, nonatomic) NSUInteger privateClassification;
@property (readonly, nonatomic, getter=privateSymptoms) NSUInteger privateSymptoms;
@property (readonly, copy, nonatomic) HKQuantity *samplingFrequency;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger symptomsStatus; // ivar: _symptomsStatus


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_electrocardiogramWithStartDate:(id)arg0 device:(id)arg1 metadata:(id)arg2 ;
+(id)_localizedClassification:(NSUInteger)arg0 withActiveAlgorithmVersion:(NSInteger)arg1 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(BOOL)prepareForSaving:(*id)arg0 ;
-(NSInteger)numberOfValues;
-(NSInteger)symptoms;
-(NSUInteger)_symptoms;
-(id)_localizedClassificationWithActiveAlgorithmVersion:(NSInteger)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)frequency;
-(id)initWithCoder:(id)arg0 ;
-(id)payload;
-(id)voltageMeasurementEnumerator;
-(void)_enumerateDataForLead:(NSInteger)arg0 block:(id)arg1 ;
-(void)_setPayload:(id)arg0 ;
-(void)copyMeasurementFlagsForLead:(NSInteger)arg0 count:(NSUInteger)arg1 target:(char *)arg2 ;
-(void)copyMeasurementValuesForLead:(NSInteger)arg0 count:(NSUInteger)arg1 target:(*float)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateDataForLead:(NSInteger)arg0 block:(id)arg1 ;
-(void)setReading:(struct Electrocardiogram )arg0 ;


@end


#endif