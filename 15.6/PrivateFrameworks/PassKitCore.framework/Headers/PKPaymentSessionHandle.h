// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSESSIONHANDLE_H
#define PKPAYMENTSESSIONHANDLE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKTransactionSessionWrapper.h"

@interface PKPaymentSessionHandle : NSObject {
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    PKTransactionSessionWrapper *_sessionHandle;
}




-(BOOL)isFirstInQueue;
-(id)initWithInternalSessionHandle:(id)arg0 targetQueue:(id)arg1 ;
-(void)invalidateSession;
-(void)invalidateSessionWithCompletion:(id)arg0 ;


@end


#endif