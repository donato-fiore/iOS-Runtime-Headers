// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCCPROXYINGDEVICE_H
#define PCCPROXYINGDEVICE_H

@class NSDate, NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, OSASyncProxyServices, OSASyncProxyHandler, OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "PCCEndpoint.h"

@interface PCCProxyingDevice : NSObject <NSXPCListenerDelegate, OSASyncProxyServices, OSASyncProxyHandler>

 {
    PCCEndpoint *_endpoint;
    NSDate *_lastTouch;
    NSObject<OS_dispatch_queue> *_request_queue;
    NSMutableDictionary *_reqById;
    NSMutableDictionary *_reqByTracker;
    NSObject<OS_dispatch_source> *_expiryTimer;
    NSObject<OS_os_transaction> *_txn;
    NSMutableDictionary *_sync_summary;
    NSMutableDictionary *_tasking_summary;
    int file_count;
    int msg_count;
    int up_count;
    int request_count;
    int expire_count;
    NSObject<OS_dispatch_queue> *_sync_proxy_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGFloat requestTimeout; // ivar: _requestTimeout
@property (readonly) Class superclass;


-(BOOL)isFilenameReasonable:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithEndpoint:(id)arg0 ;
-(void)ack:(id)arg0 result:(BOOL)arg1 error:(id)arg2 ;
-(void)addRequest:(id)arg0 event:(id)arg1 type:(id)arg2 onComplete:(id)arg3 ;
-(void)deliver:(id)arg0 tasking:(id)arg1 taskId:(id)arg2 fromBlob:(id)arg3 ;
-(void)diagnosticResultsEvent:(id)arg0 type:(id)arg1 result:(id)arg2 ;
-(void)finishRequest:(id)arg0 result:(id)arg1 ;
-(void)finishRequestWithMessage:(id)arg0 result:(id)arg1 ;
-(void)handleConnection:(BOOL)arg0 from:(id)arg1 ;
-(void)handleFile:(id)arg0 from:(id)arg1 metadata:(id)arg2 ;
-(void)handleMessage:(id)arg0 from:(id)arg1 ;
-(void)listDevices:(id)arg0 ;
-(void)receivedReport:(id)arg0 from:(id)arg1 metadata:(id)arg2 ;
-(void)request:(id)arg0 logList:(id)arg1 ;
-(void)request:(id)arg0 logListWithOptions:(id)arg1 onComplete:(id)arg2 ;
-(void)request:(id)arg0 transferGroupWithOptions:(id)arg1 onComplete:(id)arg2 ;
-(void)request:(id)arg0 transferLog:(id)arg1 onComplete:(id)arg2 ;
-(void)request:(id)arg0 transferLog:(id)arg1 withOptions:(id)arg2 onComplete:(id)arg3 ;
-(void)requestProxyMetadata:(id)arg0 onComplete:(id)arg1 ;
-(void)startRequest:(id)arg0 message:(id)arg1 onComplete:(id)arg2 ;
-(void)startTimer;
-(void)summarizeLog:(id)arg0 reason:(id)arg1 ;
-(void)synchronize:(id)arg0 withOptions:(id)arg1 onComplete:(id)arg2 ;
-(void)updateProxiedDeviceMetadata:(id)arg0 from:(id)arg1 ;


@end


#endif