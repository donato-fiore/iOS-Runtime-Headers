// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDONATECONNECTION_H
#define CKVDONATECONNECTION_H

@class NSXPCConnection;
@protocol KVDonateService, CKVDonateRequestDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKVDonateRequest.h"
#import "CKVIndexUpdater.h"

@interface CKVDonateConnection : NSObject <KVDonateService>

 {
    NSObject<CKVDonateRequestDelegate> *_delegate;
    NSXPCConnection *_xpc;
    CKVDonateRequest *_request;
    id *_openStreamCompletion;
    CKVIndexUpdater *_updater;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)isXPC;
-(id)init;
-(id)initWithRequestDelegate:(id)arg0 xpc:(id)arg1 ;
-(void)abortDatasetStream;
-(void)addItems:(id)arg0 completion:(id)arg1 ;
-(void)cleanupDatasetStream:(NSInteger)arg0 ;
-(void)closeDatasetStream:(id)arg0 ;
-(void)interrupt;
-(void)openDatasetStream:(NSUInteger)arg0 validity:(id)arg1 itemType:(NSInteger)arg2 originAppId:(id)arg3 deviceId:(id)arg4 userId:(id)arg5 options:(unsigned short)arg6 completion:(id)arg7 ;
-(void)removeItemId:(id)arg0 completion:(id)arg1 ;
-(void)resume;


@end


#endif