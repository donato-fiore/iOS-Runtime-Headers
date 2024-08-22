// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSAMPLETYPE_H
#define HKSAMPLETYPE_H



#import "HKObjectType.h"

@interface HKSampleType : HKObjectType

@property (readonly, nonatomic) BOOL allowsRecalibrationForEstimates;
@property (readonly, nonatomic) BOOL isMaximumDurationRestricted;
@property (readonly, nonatomic) BOOL isMinimumDurationRestricted;
@property (readonly, nonatomic) CGFloat maximumAllowedDuration;
@property (readonly, nonatomic) CGFloat minimumAllowedDuration;


+(id)_sampleTypeWithCode:(NSInteger)arg0 ;
+(id)medicalRecordTypes;
+(id)medicalRecordTypesWithOptions:(NSUInteger)arg0 ;
-(BOOL)_supportsRelativeDataCalculation;
-(BOOL)_validateMetadata:(id)arg0 sample:(id)arg1 error:(*id)arg2 ;
-(BOOL)_validateStartDate:(CGFloat)arg0 endDate:(CGFloat)arg1 error:(*id)arg2 ;
-(id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg0 ;
-(id)_rollingBaselineConfiguration;
-(id)_unitForChangeInCanonicalUnit;


@end


#endif