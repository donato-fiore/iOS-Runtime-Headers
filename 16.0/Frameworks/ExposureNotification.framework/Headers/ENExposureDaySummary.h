// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENEXPOSUREDAYSUMMARY_H
#define ENEXPOSUREDAYSUMMARY_H

@class NSDate;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>

#import "ENExposureSummaryItem.h"

@interface ENExposureDaySummary : NSObject <CUXPCCodable>



@property (retain, nonatomic) ENExposureSummaryItem *confirmedClinicalDiagnosisSummary; // ivar: _confirmedClinicalDiagnosisSummary
@property (retain, nonatomic) ENExposureSummaryItem *confirmedTestSummary; // ivar: _confirmedTestSummary
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) ENExposureSummaryItem *daySummary; // ivar: _daySummary
@property (retain, nonatomic) ENExposureSummaryItem *recursiveSummary; // ivar: _recursiveSummary
@property (retain, nonatomic) ENExposureSummaryItem *selfReportedSummary; // ivar: _selfReportedSummary


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)roundDurations;


@end


#endif