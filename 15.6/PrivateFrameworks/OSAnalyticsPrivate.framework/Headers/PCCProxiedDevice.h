// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCCPROXIEDDEVICE_H
#define PCCPROXIEDDEVICE_H

@class NSMutableDictionary, NSString;
@protocol OSASyncProxyHandler, OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PCCEndpoint.h"
#import "PCCGroupJob.h"

@interface PCCProxiedDevice : NSObject <OSASyncProxyHandler>

 {
    PCCEndpoint *_endpoint;
    PCCGroupJob *_groupXferJob;
    NSMutableDictionary *_jobByTracker;
    NSObject<OS_dispatch_source> *_expiryTimer;
    NSObject<OS_os_transaction> *_txn;
    int file_count;
    int msg_count;
    int up_count;
    int job_count;
    int expire_count;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *initializationQueue; // ivar: _job_queue
@property CGFloat jobTimeout; // ivar: _jobTimeout
@property BOOL preserveFiles; // ivar: _preserveFiles
@property (readonly) Class superclass;


-(BOOL)doWork:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(void)acceptTaskingPayload:(id)arg0 forRouting:(id)arg1 withId:(id)arg2 ;
-(void)ack:(id)arg0 result:(BOOL)arg1 error:(id)arg2 ;
-(void)finish:(id)arg0 target:(id)arg1 event:(id)arg2 type:(id)arg3 result:(id)arg4 ;
-(void)handleConnection:(BOOL)arg0 from:(id)arg1 ;
-(void)handleFile:(id)arg0 from:(id)arg1 metadata:(id)arg2 ;
-(void)handleMessage:(id)arg0 from:(id)arg1 ;
-(void)initiate:(id)arg0 transferGroupWithOptions:(id)arg1 job:(id)arg2 ;
-(void)initiate:(id)arg0 transferLog:(id)arg1 withOptions:(id)arg2 job:(id)arg3 ;
-(void)sendDeviceMetadata:(id)arg0 ;
-(void)startTimer;


@end


#endif