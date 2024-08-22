// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKREQUEST_H
#define SKREQUEST_H

@protocol SKRequestDelegate;

#import <Foundation/Foundation.h>

#import "SKPaymentQueueClient.h"

@interface SKRequest : NSObject {
    id *_requestInternal;
}


@property (weak, nonatomic) NSObject<SKRequestDelegate> *delegate;
@property (copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;


-(id)errorFromCFObject:(id)arg0 ;
-(id)init;
-(void)_beginBackgroundTask;
-(void)_endBackgroundTask;
-(void)_shutdownRequest;
-(void)_start;
-(void)_startWithMessage:(id)arg0 replyBlock:(id)arg1 ;
-(void)cancel;
-(void)start;


@end


#endif