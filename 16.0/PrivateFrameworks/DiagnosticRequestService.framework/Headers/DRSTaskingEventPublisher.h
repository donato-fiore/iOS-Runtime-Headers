// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSTASKINGEVENTPUBLISHER_H
#define DRSTASKINGEVENTPUBLISHER_H

@class NSMutableSet;
@protocol OS_xpc_event_publisher, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DRSConfigPersistedStore.h"

@interface DRSTaskingEventPublisher : NSObject

@property (readonly, nonatomic) DRSConfigPersistedStore *configStore; // ivar: _configStore
@property (readonly, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // ivar: _publisher
@property (readonly, nonatomic) NSMutableSet *subscribers; // ivar: _subscribers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)_isFirst;
-(id)_activeConfigForTeamID:(id)arg0 errorOut:(*id)arg1 ;
-(id)initWithConfigStore:(id)arg0 ;
-(void)_addSubscriber:(NSUInteger)arg0 descriptor:(id)arg1 isOldSubscriber:(BOOL)arg2 ;
-(void)_publishNotification:(id)arg0 config:(id)arg1 ;
-(void)_removeSubscriber:(NSUInteger)arg0 ;
-(void)publishConfigUpdateForTeamID:(id)arg0 state:(unsigned char)arg1 config:(id)arg2 ;
-(void)publishCurrentConfigForTeamID:(id)arg0 ;


@end


#endif