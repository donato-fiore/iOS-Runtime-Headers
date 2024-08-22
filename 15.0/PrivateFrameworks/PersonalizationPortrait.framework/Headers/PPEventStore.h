// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPEVENTSTORE_H
#define PPEVENTSTORE_H

@class NSString;
@protocol PPFeedbackAccepting, PPClientStore;

#import <Foundation/Foundation.h>

#import "PPRecordMonitoringHelper.h"
#import "PPClientFeedbackHelper.h"

@interface PPEventStore : NSObject <PPFeedbackAccepting, PPClientStore>

 {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}


@property (retain, nonatomic) NSString *clientIdentifier;


-(BOOL)interactionSummaryMetricsError:(*id)arg0 block:(id)arg1 ;
-(BOOL)iterDailyEventHighlightsError:(*id)arg0 block:(id)arg1 ;
-(BOOL)iterDailyEventHighlightsWithOptions:(int)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterEventHighlightsFrom:(id)arg0 to:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
-(BOOL)iterEventHighlightsFrom:(id)arg0 to:(id)arg1 options:(int)arg2 error:(*id)arg3 block:(id)arg4 ;
-(BOOL)iterEventNameRecordsForClient:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterScoredEventsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterWeeklyEventHighlightsError:(*id)arg0 block:(id)arg1 ;
-(BOOL)iterWeeklyEventHighlightsWithOptions:(int)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)loadEventNameRecordsAndMonitorChangesWithDelegate:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendRTCLogsWithError:(*id)arg0 ;
-(id)_recordGenerator:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(void)_loadEventNameRecordsWithDelegate:(id)arg0 ;
-(void)_sendChangesToDelegates:(id)arg0 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif