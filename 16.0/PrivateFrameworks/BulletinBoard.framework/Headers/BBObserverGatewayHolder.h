// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBOBSERVERGATEWAYHOLDER_H
#define BBOBSERVERGATEWAYHOLDER_H

@class PCPersistentTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BBObserverClientProxy.h"
#import "BBMaskedSet.h"

@interface BBObserverGatewayHolder : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PCPersistentTimer *_timeoutTimer;
    NSMutableArray *_timeouts;
}


@property (nonatomic) NSUInteger feed; // ivar: _feed
@property (retain, nonatomic) BBObserverClientProxy *gateway; // ivar: _gateway
@property (nonatomic) NSUInteger gatewayPriority; // ivar: _gatewayPriority
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BBMaskedSet *observerFeedSet; // ivar: _observerFeedSet


-(BOOL)_invalidateTimeout:(id)arg0 ;
-(id)_addTimeout:(CGFloat)arg0 forBulletinID:(id)arg1 inSectionID:(id)arg2 handler:(id)arg3 ;
-(id)initWithQueue:(id)arg0 name:(id)arg1 ;
-(void)_handleTimeout;
-(void)_invalidateTimer;
-(void)_startNextTimer;
-(void)_startTimerWithFireDate:(id)arg0 ;
-(void)dealloc;
-(void)sendAddBulletin:(id)arg0 playLightsAndSirens:(BOOL)arg1 forFeeds:(NSUInteger)arg2 withTimeout:(CGFloat)arg3 handler:(id)arg4 ;
-(void)sendObserver:(id)arg0 addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 forFeeds:(NSUInteger)arg3 withHandler:(id)arg4 ;
-(void)sendObserversAddBulletin:(id)arg0 playLightsAndSirens:(BOOL)arg1 forFeeds:(NSUInteger)arg2 ;


@end


#endif