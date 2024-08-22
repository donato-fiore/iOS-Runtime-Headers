// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSPREYRPCPROMISE_H
#define OSPREYRPCPROMISE_H

@class NSString;
@protocol OspreyRPC, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OspreyDeferredObject.h"

@interface OspreyRPCPromise : NSObject <OspreyRPC>

 {
    NSObject<OS_dispatch_queue> *_fulfillmentQueue;
    OspreyDeferredObject *_deferredRPC;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)bidirectionalStreamingRequestWithMethodName:(id)arg0 requestBuilder:(id)arg1 streamingResponseHandler:(unk)arg2 completion:(id)arg3  ;
// -(id)clientStreamingRequestWithMethodName:(id)arg0 requestBuilder:(id)arg1 responseHandler:(unk)arg2  ;
-(id)initWithFulfillmentQueue:(id)arg0 ;
-(void)fulfill:(id)arg0 ;
// -(void)serverStreamingRequestWithMethodName:(id)arg0 requestData:(id)arg1 requestBuilder:(id)arg2 streamingResponseHandler:(unk)arg3 completion:(id)arg4  ;
// -(void)unaryRequestWithMethodName:(id)arg0 requestData:(id)arg1 requestBuilder:(id)arg2 responseHandler:(unk)arg3  ;


@end


#endif