// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENEXPOSURECLASSIFICATION_H
#define ENEXPOSURECLASSIFICATION_H

@class NSNumber, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ENRegion.h"

@interface ENExposureClassification : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL anyThresholdsExceeded;
@property (copy, nonatomic) NSNumber *clinicalDiagnosisPerDaySumERVAboveThreshold; // ivar: _clinicalDiagnosisPerDaySumERVAboveThreshold
@property (copy, nonatomic) NSNumber *confirmedTestPerDaySumERVAboveThreshold; // ivar: _confirmedTestPerDaySumERVAboveThreshold
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) unsigned char index; // ivar: _index
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSNumber *perDayMaxERVAboveThreshold; // ivar: _perDayMaxERVAboveThreshold
@property (copy, nonatomic) NSNumber *perDaySumERVAboveThreshold; // ivar: _perDaySumERVAboveThreshold
@property (copy, nonatomic) NSNumber *recursivePerDaySumERVAboveThreshold; // ivar: _recursivePerDaySumERVAboveThreshold
@property (copy, nonatomic) ENRegion *region; // ivar: _region
@property (copy, nonatomic) NSNumber *selfReportPerDaySumERVAboveThreshold; // ivar: _selfReportPerDaySumERVAboveThreshold
@property (copy, nonatomic) NSNumber *weightedDurationAtAttenuationAboveThreshold; // ivar: _weightedDurationAtAttenuationAboveThreshold


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif