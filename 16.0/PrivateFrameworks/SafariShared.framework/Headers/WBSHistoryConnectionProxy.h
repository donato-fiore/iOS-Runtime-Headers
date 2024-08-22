// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHISTORYCONNECTIONPROXY_H
#define WBSHISTORYCONNECTIONPROXY_H

@class NSXPCConnection;
@protocol WBSHistoryConnectionProxy, OS_dispatch_queue, WBSHistoryConnectionProxyDelegate;

#import <Foundation/Foundation.h>

#import "WBSHistoryService.h"

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy>

 {
    NSXPCConnection *_connection;
    WBSHistoryService *_inProcessFallbackService;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionProxyQueue; // ivar: _connectionProxyQueue
@property (weak, nonatomic) NSObject<WBSHistoryConnectionProxyDelegate> *delegate; // ivar: _delegate


-(id)_createConnection;
-(id)_defaultProxyErrorHandlerWithSimpleReplyHandler:(SEL)arg0 ;
-(id)init;
-(id)queryMemoryFootprintWithError:(*id)arg0 ;
-(void)_setupConnectionWithInProcessFallback:(BOOL)arg0 ;
-(void)beginHistoryAccessSession:(id)arg0 ;
-(void)beginURLCompletionSession:(id)arg0 ;
-(void)connectWithOptions:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)debugGetDatabaseURLWithCompletionHandler:(id)arg0 ;
-(void)disconnectWithCompletionHandler:(id)arg0 ;
-(void)ensureConnected:(id)arg0 ;
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)getServiceInfo:(id)arg0 ;
-(void)getVisitedLinksWithCompletionHandler:(id)arg0 ;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg0 endDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)initializeCloudHistoryWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)killService;
-(void)queryMemoryFootprint:(id)arg0 ;
-(void)releaseCloudHistory:(id)arg0 ;


@end


#endif