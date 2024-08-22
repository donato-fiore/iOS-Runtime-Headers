// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBIOMELISTENER_H
#define WFBIOMELISTENER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCTriggerEventQueue.h"

@interface WFBiomeListener : NSObject

@property (readonly, nonatomic) VCTriggerEventQueue *eventQueue; // ivar: _eventQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableDictionary *triggerIDToSinks; // ivar: _triggerIDToSinks


-(id)initWithEventQueue:(id)arg0 ;
-(void)fireTriggerWithIdentifier:(id)arg0 force:(BOOL)arg1 eventInfo:(id)arg2 completion:(id)arg3 ;
-(void)queue_fireTriggerWithIdentifier:(id)arg0 force:(BOOL)arg1 eventInfo:(id)arg2 completion:(id)arg3 ;
-(void)queue_handleEvent:(id)arg0 forTrigger:(id)arg1 ;
-(void)queue_unregisterConfiguredTriggerWithIdentifier:(id)arg0 ;
-(void)registerConfiguredTrigger:(id)arg0 completion:(id)arg1 ;
-(void)unregisterConfiguredTriggerWithIdentifier:(id)arg0 ;


@end


#endif