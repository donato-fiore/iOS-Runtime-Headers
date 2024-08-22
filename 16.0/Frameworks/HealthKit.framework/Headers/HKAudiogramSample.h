// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKAUDIOGRAMSAMPLE_H
#define HKAUDIOGRAMSAMPLE_H

@class NSString, NSData, NSArray;
@protocol _HKBinarySample;


#import "HKSample.h"

@interface HKAudiogramSample : HKSample <_HKBinarySample>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *encodedSensitivityPoints; // ivar: _encodedSensitivityPoints
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *sensitivityPoints;
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(id)_decodeSensitivityData:(id)arg0 ;
+(id)_encodeSensitivityPoints:(id)arg0 ;
+(id)audiogramSampleWithSensitivityPoints:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 metadata:(id)arg3 ;
-(NSUInteger)_diagnosticForSensitivity:(id)arg0 ;
-(NSUInteger)diagnostic;
-(id)_averageEarSensitivityForDiagnosticSensitivityPoints:(id)arg0 ;
-(id)_leftDiagnosticSensitivityPoints;
-(id)_leftSensitivityPoints;
-(id)_pureToneAverageForDiagnosticSensitivityPoints:(id)arg0 ;
-(id)_rightDiagnosticSensitivityPoints;
-(id)_rightSensitivityPoints;
-(id)_validateSensitivityPointsOrderedAscending;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)averageLeftEarSensitivity;
-(id)averageRightEarSensitivity;
-(id)initWithCoder:(id)arg0 ;
-(id)maximumSensitivity;
-(id)minimumSensitivity;
-(id)payload;
-(void)_setPayload:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif