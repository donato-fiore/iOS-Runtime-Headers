// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSAPPFOREGROUNDTRIGGERMANAGER_H
#define DNDSAPPFOREGROUNDTRIGGERMANAGER_H

@class NSMutableDictionary, BMStoreEvent, NSString;
@protocol DNDSBiomeTriggerManager, OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, DNDSAppForegroundTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource;

#import <Foundation/Foundation.h>

#import "DNDSAppForegroundTriggerConfiguration.h"

@interface DNDSAppForegroundTriggerManager : NSObject <DNDSBiomeTriggerManager>

 {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    NSObject<OS_dispatch_queue> *_coalescingQueue;
    NSMutableDictionary *_sinks;
    DNDSAppForegroundTriggerConfiguration *_currentTriggerConfiguration;
    BMStoreEvent *_latestEvent;
    NSObject<OS_os_transaction> *_eventCoalescingTransaction;
}


@property (weak, nonatomic) NSObject<DNDSAppForegroundTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_coalescingQueue_coalesceWithTriggerConfiguration:(id)arg0 event:(id)arg1 ;
-(void)_coalescingQueue_refreshWithTriggerConfiguration:(id)arg0 ;
-(void)_coalescingQueue_resetCoalescingTimer;
-(void)_configureAppForegroundTriggerWithConfiguration:(id)arg0 ;
-(void)_refreshIfNeccessaryForEvent:(id)arg0 ;
-(void)_refreshWithTriggerConfiguration:(id)arg0 event:(id)arg1 ;
-(void)refresh;


@end


#endif