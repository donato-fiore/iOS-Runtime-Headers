// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSECURITYCONNECTION_H
#define AFSECURITYCONNECTION_H

@class NSXPCConnection, NSString;
@protocol AFSecurityService, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"

@interface AFSecurityConnection : NSObject <AFSecurityService>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AFInstanceContext *_instanceContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connection;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)_dispatchCallbackForProcessedData:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_dispatchCallbackForProcessedDataMap:(id)arg0 errorMap:(id)arg1 completion:(id)arg2 ;
-(void)_invalidateConnection;
-(void)_processData:(id)arg0 usingProcedure:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_processDataMap:(id)arg0 usingProcedure:(NSInteger)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)internalAuthAppleConnectServiceTicket:(id)arg0 ;
-(void)internalAuthSessionToken:(id)arg0 ;
-(void)invalidate;
-(void)processData:(id)arg0 usingProcedure:(NSInteger)arg1 completion:(id)arg2 ;
-(void)processDataMap:(id)arg0 usingProcedure:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setInternalAuthAppleConnectServiceTicket:(id)arg0 completion:(id)arg1 ;
-(void)setInternalAuthSessionToken:(id)arg0 completion:(id)arg1 ;
-(void)setKeychainValue:(id)arg0 forKey:(id)arg1 accountIdentifier:(id)arg2 completion:(id)arg3 ;


@end


#endif