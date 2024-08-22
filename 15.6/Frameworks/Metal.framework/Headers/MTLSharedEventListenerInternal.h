// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLSHAREDEVENTLISTENERINTERNAL_H
#define MTLSHAREDEVENTLISTENERINTERNAL_H

@protocol OS_dispatch_queue;


#import "MTLSharedEventListener.h"

@interface MTLSharedEventListenerInternal : MTLSharedEventListener {
    *IONotificationPort _notificationPort;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




-(id)dispatchQueue;
-(id)init;
-(id)initWithDispatchQueue:(id)arg0 ;
-(void)_notifyEventPort:(unsigned int)arg0 event:(id)arg1 atValue:(NSUInteger)arg2 block:(id)arg3 ;
-(void)dealloc;


@end


#endif