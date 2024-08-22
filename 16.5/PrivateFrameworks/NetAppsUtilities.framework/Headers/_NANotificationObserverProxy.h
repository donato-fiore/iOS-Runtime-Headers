// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NANOTIFICATIONOBSERVERPROXY_H
#define _NANOTIFICATIONOBSERVERPROXY_H

@class NAObserverProxy, NSString, NSOperationQueue;



@interface _NANotificationObserverProxy : NAObserverProxy {
    id *_notificationObserver;
}


@property (readonly, copy, nonatomic) NSString *notificationName; // ivar: _notificationName
@property (readonly, copy, nonatomic) id *observerBlock; // ivar: _observerBlock
@property (readonly, nonatomic) NSOperationQueue *observerQueue; // ivar: _observerQueue


-(id)initWithWeakObserver:(id)arg0 notificationName:(id)arg1 observerQueue:(id)arg2 observerBlock:(id)arg3 ;
-(void)invalidate;
-(void)performObserverBlock;


@end


#endif