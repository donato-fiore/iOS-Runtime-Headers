// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FMNOTIFICATIONOBSERVERPROXY_H
#define _FMNOTIFICATIONOBSERVERPROXY_H

@class FMObserverProxy, NSString, NSOperationQueue;



@interface _FMNotificationObserverProxy : FMObserverProxy {
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