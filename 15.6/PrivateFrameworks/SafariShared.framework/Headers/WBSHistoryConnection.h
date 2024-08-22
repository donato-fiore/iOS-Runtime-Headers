// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYCONNECTION_H
#define WBSHISTORYCONNECTION_H

@protocol WBSHistoryConnectionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistoryService.h"
#import "WBSHistoryServiceDatabase.h"
#import "WBSCloudHistory.h"
#import "WBSCloudHistoryConfiguration.h"

@interface WBSHistoryConnection : NSObject <WBSHistoryConnectionProtocol>

 {
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSHistoryServiceDatabase *_database;
    WBSCloudHistory *_cloudHistory;
    WBSCloudHistoryConfiguration *_cloudHistoryConfiguration;
}




-(id)initWithHistoryService:(id)arg0 ;
-(void)beginHistoryAccessSession:(id)arg0 ;
-(void)beginURLCompletionSession:(id)arg0 ;
-(void)connectWithOptions:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(void)debugGetDatabaseURLWithCompletionHandler:(id)arg0 ;
-(void)disconnectWithCompletionHandler:(id)arg0 ;
-(void)ensureConnected:(id)arg0 ;
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)getServiceInfo:(id)arg0 ;
-(void)getVisitedLinksWithCompletionHandler:(id)arg0 ;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg0 endDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)initializeCloudHistoryWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryMemoryFootprint:(id)arg0 ;
-(void)releaseCloudHistory:(id)arg0 ;


@end


#endif