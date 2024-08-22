// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFIGROUTINGCONTEXTROUTECHANGEOPERATION_H
#define AVFIGROUTINGCONTEXTROUTECHANGEOPERATION_H

@class NSString;
@protocol AVDestinationChangeResultSource, OS_dispatch_queue;


#import "AVOperation.h"
#import "AVWeakReference.h"
#import "AVOutputContextDestinationChange.h"

@interface AVFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource>

 {
    AVWeakReference *_weakObserver;
    *OpaqueFigRoutingContext _routingContext;
    *__CFString _successNotification;
    id *_routeChangeBlock;
    NSObject<OS_dispatch_queue> *_notificationManagementQueue;
    BOOL _actOnRouteChangeNotifications;
    *__CFNumber _routeChangeID;
    AVOutputContextDestinationChange *_result;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVOutputContextDestinationChange *result;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg0 successNotification:(struct __CFString *)arg1 routeChangeBlock:(id)arg2 ;
-(void)_routeChangeComplete;
-(void)_routeChangeStartedWithID:(struct __CFNumber *)arg0 ;
-(void)_routeChangeWithID:(struct __CFNumber *)arg0 endedWithReason:(struct __CFString *)arg1 ;
-(void)dealloc;
-(void)start;


@end


#endif