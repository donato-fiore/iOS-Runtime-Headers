// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNDONATIONANALYTICSLOGGER_H
#define _CNDONATIONANALYTICSLOGGER_H

@class NSString;
@protocol CNDonationAnalyticsLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log_t; // ivar: _log_t
@property (readonly) Class superclass;


-(id)init;
-(void)analysisServiceCheckingIn;
-(void)analysisServiceCriteria:(id)arg0 ;
-(void)didPerformAnalysis;
-(void)didReportAnalytics;
-(void)didSkipDuplicateAnalysis:(id)arg0 ;
-(void)noAnalyzerAvailable;
-(void)willReportAnalytics;
-(void)willStartAnalysis;


@end


#endif