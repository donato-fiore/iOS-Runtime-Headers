// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMFCFHTTPSERVERCONNECTION_H
#define _HMFCFHTTPSERVERCONNECTION_H

@class NSString, NSMutableArray;
@protocol HMFLogging, OS_dispatch_queue, _HMFCFHTTPServerConnectionDelegate;


#import "HMFObject.h"
#import "HMFNetAddress.h"

@interface _HMFCFHTTPServerConnection : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMFNetAddress *address; // ivar: _address
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_HMFCFHTTPServerConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *_CFHTTPServerConnection internal; // ivar: _internal
@property (readonly, nonatomic) NSMutableArray *pendingRequests; // ivar: _pendingRequests
@property (readonly, nonatomic) NSMutableArray *pendingRespones; // ivar: _pendingRespones
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)open;
-(id)init;
-(id)initWithConnectionRef:(struct _CFHTTPServerConnection *)arg0 ;
-(id)logIdentifier;
-(void)_handleCompletedReceivedRequest:(id)arg0 error:(id)arg1 ;
-(void)_handleCompletedResponse:(struct _CFHTTPServerResponse *)arg0 error:(id)arg1 ;
-(void)_handleReceivedRequestRef:(struct _CFHTTPServerRequest *)arg0 ;
-(void)_sendStatusCode:(NSInteger)arg0 forRequest:(id)arg1 ;
-(void)_sendStatusCode:(NSInteger)arg0 forRequest:(id)arg1 bodyData:(id)arg2 ;
-(void)_stopReadBody:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)handleRequest:(id)arg0 bodyReadStream:(struct __CFReadStream *)arg1 eventType:(NSUInteger)arg2 ;
-(void)invalidate;
-(void)sendResponse:(id)arg0 ;


@end


#endif