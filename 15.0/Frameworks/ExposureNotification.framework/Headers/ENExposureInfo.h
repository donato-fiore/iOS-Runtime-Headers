// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENEXPOSUREINFO_H
#define ENEXPOSUREINFO_H

@class NSArray, NSDate, NSDictionary;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface ENExposureInfo : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSArray *attenuationDurations; // ivar: _attenuationDurations
@property (nonatomic) unsigned char attenuationValue; // ivar: _attenuationValue
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSInteger daysSinceOnsetOfSymptoms; // ivar: _daysSinceOnsetOfSymptoms
@property (nonatomic) unsigned int diagnosisReportType; // ivar: _diagnosisReportType
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) unsigned char totalRiskScore; // ivar: _totalRiskScore
@property (nonatomic) CGFloat totalRiskScoreFullRange; // ivar: _totalRiskScoreFullRange
@property (nonatomic) unsigned char transmissionRiskLevel; // ivar: _transmissionRiskLevel


-(id)description;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif