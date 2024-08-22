// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENEXPOSUREDETECTIONDAEMONSESSIONRESULT_H
#define ENEXPOSUREDETECTIONDAEMONSESSIONRESULT_H

@class NSData, ENExposureClassification, ENRegion, ENExposureDetectionSummary;

#import <Foundation/Foundation.h>

#import "ENExposureDetectionDaemonSessionStatistics.h"

@interface ENExposureDetectionDaemonSessionResult : NSObject

@property (copy, nonatomic) NSData *differentialPrivacyBeaconCount; // ivar: _differentialPrivacyBeaconCount
@property (copy, nonatomic) NSData *differentialPrivacyRiskParameters; // ivar: _differentialPrivacyRiskParameters
@property (retain, nonatomic) ENExposureClassification *exposureClassification; // ivar: _exposureClassification
@property (nonatomic) NSInteger exposureClassificationStatus; // ivar: _exposureClassificationStatus
@property (copy, nonatomic) ENRegion *region; // ivar: _region
@property (copy, nonatomic) ENExposureDetectionDaemonSessionStatistics *statistics; // ivar: _statistics
@property (retain, nonatomic) ENExposureDetectionSummary *summary; // ivar: _summary




@end


#endif