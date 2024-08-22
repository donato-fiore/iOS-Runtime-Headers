// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSVIEWSERVICEREQUESTCENTER_H
#define VSVIEWSERVICEREQUESTCENTER_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface VSViewServiceRequestCenter : NSObject

@property (retain, nonatomic) NSOperationQueue *completionQueue; // ivar: _completionQueue
@property (retain, nonatomic) NSOperationQueue *requestQueue; // ivar: _requestQueue


+(id)sharedViewServiceRequestCenter;
-(id)enqueueCompletionHandlerBlock:(id)arg0 ;
-(id)enqueueRequest:(id)arg0 withAccountManagerDelegate:(id)arg1 operationDelegate:(id)arg2 completionHandler:(id)arg3 ;
-(id)init;


@end


#endif