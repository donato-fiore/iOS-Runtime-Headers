// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSMETRICSEVENTCONTROLLER_H
#define SSMETRICSEVENTCONTROLLER_H



#import "SSMetricsController.h"
#import "SSMetricsEventTable.h"

@interface SSMetricsEventController : SSMetricsController {
    SSMetricsEventTable *_table;
}




-(BOOL)deleteEventsInsertedBefore:(NSInteger)arg0 ;
-(BOOL)deleteReportedEvents;
-(BOOL)insertEventSummaries:(id)arg0 error:(*id)arg1 ;
-(BOOL)markEventsAsReported:(id)arg0 ;
-(NSInteger)countUnreportedEventsBefore:(NSInteger)arg0 ;
-(id)_collectUnreportedPIDsFromDatabase:(id)arg0 matchingReportURLString:(id)arg1 since:(NSInteger)arg2 suppressUserInfo:(BOOL)arg3 ;
-(id)init;
-(id)unreportedEventURLsSince:(NSInteger)arg0 ;
-(id)unreportedEventsForURL:(id)arg0 since:(NSInteger)arg1 suppressDSID:(BOOL)arg2 ;
-(id)unreportedEventsForURL:(id)arg0 since:(NSInteger)arg1 suppressUserInfo:(BOOL)arg2 ;
-(int)_maximumUnreportedToSelect;
-(void)_serialQueueInsertEvents:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)flushUnreportedEventsWithCompletionHandler:(id)arg0 ;


@end


#endif