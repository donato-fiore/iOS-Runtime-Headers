// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFHTTPCLIENTCONNECTION_H
#define HMFHTTPCLIENTCONNECTION_H

@class NSString, NSMutableArray;
@protocol _HMFCFHTTPServerConnectionDelegate, HMFLogging, OS_dispatch_queue, HMFHTTPClientConnectionDelegate;


#import "HMFObject.h"
#import "_HMFCFHTTPServerConnection.h"
#import "HMFNetAddress.h"

@interface HMFHTTPClientConnection : HMFObject <_HMFCFHTTPServerConnectionDelegate, HMFLogging>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFHTTPClientConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _HMFCFHTTPServerConnection *internal; // ivar: _internal
@property (readonly, nonatomic) HMFNetAddress *peerAddress;
@property (readonly, nonatomic) NSMutableArray *pendingRespones; // ivar: _pendingRespones
@property (readonly) Class superclass;


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithConnection:(id)arg0 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)close;
-(void)connection:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)dealloc;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)sendResponse:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif