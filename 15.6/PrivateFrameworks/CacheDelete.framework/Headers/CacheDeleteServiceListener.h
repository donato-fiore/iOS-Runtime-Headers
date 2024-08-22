// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACHEDELETESERVICELISTENER_H
#define CACHEDELETESERVICELISTENER_H

@class NSXPCListenerEndpoint;
@protocol CacheDeleteServiceProtocol, OS_dispatch_queue;


#import "CacheDeleteListener.h"
#import "CacheDeleteServiceInfo.h"

@interface CacheDeleteServiceListener : CacheDeleteListener <CacheDeleteServiceProtocol>



@property (readonly) BOOL anonymous; // ivar: _anonymous
@property (copy, nonatomic) id *callback; // ivar: _callback
@property (copy, nonatomic) id *cancel; // ivar: _cancel
@property (readonly) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) BOOL legacyCallbacks; // ivar: _legacyCallbacks
@property (copy, nonatomic) id *notify; // ivar: _notify
@property (copy, nonatomic) id *periodic; // ivar: _periodic
@property (copy, nonatomic) id *purge; // ivar: _purge
@property (copy, nonatomic) id *purgeable; // ivar: _purgeable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) CacheDeleteServiceInfo *serviceInfo; // ivar: _serviceInfo


+(id)cacheDeleteServiceListener:(id)arg0 options:(id)arg1 ;
-(id)initWithName:(id)arg0 options:(id)arg1 ;
-(void)serviceCallback:(id)arg0 replyBlock:(id)arg1 ;
-(void)serviceCancelPurge:(id)arg0 ;
-(void)serviceNotify:(id)arg0 replyBlock:(id)arg1 ;
-(void)servicePeriodic:(int)arg0 info:(id)arg1 replyBlock:(id)arg2 ;
-(void)servicePing:(id)arg0 ;
-(void)servicePurge:(int)arg0 info:(id)arg1 replyBlock:(id)arg2 ;
-(void)servicePurgeable:(int)arg0 info:(id)arg1 replyBlock:(id)arg2 ;


@end


#endif