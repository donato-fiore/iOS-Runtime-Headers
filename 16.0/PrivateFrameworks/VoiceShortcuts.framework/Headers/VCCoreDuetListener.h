// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCOREDUETLISTENER_H
#define VCCOREDUETLISTENER_H

@class NSMutableDictionary;
@protocol WFDatabaseProvider, OS_dispatch_queue, _CDUserContext;

#import <Foundation/Foundation.h>

#import "VCDaemonXPCEventHandler.h"
#import "VCTriggerEventQueue.h"

@interface VCCoreDuetListener : NSObject

@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) VCTriggerEventQueue *eventQueue; // ivar: _eventQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableDictionary *registrations; // ivar: _registrations
@property (readonly, nonatomic) NSObject<_CDUserContext> *userContext; // ivar: _userContext


-(BOOL)isCallbackRegisteredWithIdentifier:(id)arg0 ;
-(BOOL)registerTrigger:(id)arg0 error:(*id)arg1 ;
-(id)databaseWithError:(*id)arg0 ;
-(id)initWithDatabaseProvider:(id)arg0 eventQueue:(id)arg1 ;
-(void)checkTriggerStateWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)checkTriggerStateWithKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)fireTriggerWithIdentifier:(id)arg0 force:(BOOL)arg1 eventInfo:(id)arg2 completion:(id)arg3 ;
-(void)handleCallbackForTriggerWithIdentifier:(id)arg0 info:(id)arg1 ;
-(void)handleSunriseSunsetChanged;
-(void)queue_fireTriggerWithIdentifier:(id)arg0 force:(BOOL)arg1 eventInfo:(id)arg2 completion:(id)arg3 ;
-(void)queue_unregisterCallbackForIdentifier:(id)arg0 ;
-(void)registerCallback:(id)arg0 withIdentifier:(id)arg1 ;
-(void)registerConfiguredTrigger:(id)arg0 completion:(id)arg1 ;
-(void)registerSunriseSunsetCallbackIfNeeded;
-(void)unregisterConfiguredTriggerWithIdentifier:(id)arg0 ;


@end


#endif