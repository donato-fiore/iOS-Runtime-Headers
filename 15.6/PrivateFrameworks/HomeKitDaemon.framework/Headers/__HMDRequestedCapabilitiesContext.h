// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMDREQUESTEDCAPABILITIESCONTEXT_H
#define __HMDREQUESTEDCAPABILITIESCONTEXT_H

@class NSString, NSMutableArray, NSDictionary, NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface __HMDRequestedCapabilitiesContext : NSObject

@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly) NSString *destinationAddress; // ivar: _destinationAddress
@property (readonly) NSMutableArray *receivedResponses; // ivar: _receivedResponses
@property (readonly, copy, nonatomic) NSDictionary *requestedCapabilities; // ivar: _requestedCapabilities
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // ivar: _responseQueue
@property (readonly, nonatomic) NSUUID *transactionID; // ivar: _transactionID


-(id)initWithTransactionID:(id)arg0 requestedCapabilities:(id)arg1 destinationAddress:(id)arg2 responseQueue:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif