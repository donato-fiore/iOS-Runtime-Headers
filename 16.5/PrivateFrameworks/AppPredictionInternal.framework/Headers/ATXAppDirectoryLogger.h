// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPDIRECTORYLOGGER_H
#define ATXAPPDIRECTORYLOGGER_H


#import <Foundation/Foundation.h>


@interface ATXAppDirectoryLogger : NSObject



-(id)_retrieveAllUnprocessedEvents;
-(id)_retrieveLastLogProcessedDate;
-(id)_retrieveSessionsFromUnprocessedEvents:(id)arg0 lastSessionEndDate:(*id)arg1 ;
-(id)_summarizeSession:(id)arg0 ;
-(void)_storeLastLogProcessedDate:(id)arg0 ;
-(void)_uploadToCoreAnalytics:(id)arg0 ;
-(void)uploadSummariesToCoreAnalyticsWithActivity:(id)arg0 ;


@end


#endif