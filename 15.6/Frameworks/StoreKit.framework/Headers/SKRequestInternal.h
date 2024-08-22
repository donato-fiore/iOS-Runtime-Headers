// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKREQUESTINTERNAL_H
#define SKREQUESTINTERNAL_H

@protocol SKRequestDelegate;

#import <Foundation/Foundation.h>

#import "SKPaymentQueueClient.h"
#import "SKXPCConnection.h"

@interface SKRequestInternal : NSObject {
    NSInteger _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    SKXPCConnection *_connection;
    id<SKRequestDelegate> *_delegate;
    NSInteger _state;
}




-(id)init;
-(void)dealloc;


@end


#endif