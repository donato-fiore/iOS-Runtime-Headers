// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIAGNOSTICSTATISTICSMANAGER_H
#define DIAGNOSTICSTATISTICSMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AnalyticsWorkspace.h"
#import "DiagnosticCaseUsageAnalytics.h"

@interface DiagnosticStatisticsManager : NSObject {
    AnalyticsWorkspace *_workspace;
    DiagnosticCaseUsageAnalytics *_caseUsageSpace;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(CGFloat)_calculateAverageCasesPerDayFromDailyAggregatedStatistics;
-(NSInteger)_removeAllDiagnosticCaseUsageFor:(id)arg0 ;
-(NSInteger)_removeDiagnosticCaseUsageMatchingDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 process:(id)arg3 ;
-(id)_createDiagnosticCaseUsageForDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 process:(id)arg3 ;
-(id)_retrieveDiagnosticCaseUsageForDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 process:(id)arg3 ;
-(id)_retrieveDiagnosticCaseUsageForDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 process:(id)arg3 onOrAfter:(id)arg4 create:(BOOL)arg5 ;
-(id)initWithWorkspace:(id)arg0 queue:(id)arg1 ;
-(void)_checkFileWritingLimits:(id)arg0 ;
-(void)_updateCaseStatisticsWith:(id)arg0 ;
-(void)_updateDailyCaseStatisticsWith:(id)arg0 ;
-(void)_updateDiagnosticCaseUsageForDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 process:(id)arg3 lastSeen:(id)arg4 dampeningType:(BOOL)arg5 ;
-(void)cleanupDiagnosticCaseUsage;
-(void)getDiagnosticCaseUsageStatistics:(id)arg0 ;
-(void)resetDiagnosticCaseUsage;
-(void)updateCaseStatisticsWith:(id)arg0 ;


@end


#endif