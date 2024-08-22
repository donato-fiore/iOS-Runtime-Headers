// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMCANALYSISSCHEDULER_H
#define HDMCANALYSISSCHEDULER_H

@class HKMCSettingsManager, HKCalendarCache, NSString;
@protocol HDHealthDaemonReadyObserver;

#import <Foundation/Foundation.h>

#import "HDMCAnalysisManager.h"

@interface HDMCAnalysisScheduler : NSObject <HDHealthDaemonReadyObserver>

 {
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    HKCalendarCache *_calendarCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_delayUntilNextAnalysisSchedulingWindowStartDateAfterDate:(id)arg0 ;
-(id)initWithDaemon:(id)arg0 analysisManager:(id)arg1 settingsManager:(id)arg2 calendarCache:(id)arg3 ;
-(void)_handleActivity:(id)arg0 forceRescheduleOnCheckIn:(BOOL)arg1 ;
-(void)_registerActivityAfterCompletion:(BOOL)arg0 ;
-(void)_runAnalysis;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;


@end


#endif