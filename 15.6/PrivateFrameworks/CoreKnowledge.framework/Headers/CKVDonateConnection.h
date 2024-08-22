// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVDONATECONNECTION_H
#define CKVDONATECONNECTION_H

@class NSXPCConnection;
@protocol KVDonateService, CKVDonateRequestDelegate;

#import <Foundation/Foundation.h>

#import "CKVDonateRequest.h"
#import "CKVIndexUpdater.h"

@interface CKVDonateConnection : NSObject <KVDonateService>

 {
    NSObject<CKVDonateRequestDelegate> *_delegate;
    NSXPCConnection *_xpc;
    CKVDonateRequest *_request;
    id *_requestCompletion;
    CKVIndexUpdater *_updater;
}




-(BOOL)isXPC;
-(id)init;
-(id)initWithRequestDelegate:(id)arg0 xpc:(id)arg1 ;
-(void)abortDatasetStream;
-(void)addItems:(id)arg0 completion:(id)arg1 ;
-(void)closeDatasetStream:(id)arg0 ;
-(void)handleRequest:(id)arg0 ;
-(void)interrupt;
-(void)openDatasetStream:(NSUInteger)arg0 itemType:(NSInteger)arg1 originAppId:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 options:(unsigned short)arg5 completion:(id)arg6 ;
-(void)removeItemId:(id)arg0 completion:(id)arg1 ;


@end


#endif