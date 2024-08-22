// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLAUNCHEVENT_H
#define HMDLAUNCHEVENT_H

@class NSString, NSDictionary;
@protocol HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging;


#import "HMDLaunchTimingEvent.h"

@interface HMDLaunchEvent : HMDLaunchTimingEvent <HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly) CGFloat diagnosticReportThreshold;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)updateDiagnosticReportSignature:(id)arg0 ;


@end


#endif