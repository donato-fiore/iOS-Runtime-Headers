// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDINMEMORYCONTEXT_H
#define _CDINMEMORYCONTEXT_H

@class NSMutableDictionary, NSString;
@protocol _CDLocalContext, _CDContextInternal, OS_dispatch_workloop, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDDevice.h"
#import "_CDContextualLocationRegistrationMonitor.h"
#import "_CDSystemTimeCallbackScheduler.h"

@interface _CDInMemoryContext : NSObject <_CDLocalContext, _CDContextInternal>



@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *callbackWorkloop; // ivar: _callbackWorkloop
@property (retain, nonatomic) NSMutableDictionary *context; // ivar: _context
@property (retain, nonatomic) _CDDevice *device; // ivar: _device
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (retain, nonatomic) _CDContextualLocationRegistrationMonitor *locationRegistrationMonitor; // ivar: _locationRegistrationMonitor
@property (retain, nonatomic) NSMutableDictionary *registrations; // ivar: _registrations
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) _CDSystemTimeCallbackScheduler *systemTimeCallbackScheduler; // ivar: _systemTimeCallbackScheduler


+(id)contextWithDeviceID:(id)arg0 ;
-(BOOL)addObjects:(id)arg0 andRemoveObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(BOOL)addObjects:(id)arg0 toArrayAtKeyPath:(id)arg1 ;
-(BOOL)evaluatePredicate:(id)arg0 date:(id)arg1 ;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg0 ;
-(BOOL)removeObjects:(id)arg0 fromArrayAtKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg0 forContextualKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(id)addObjects:(id)arg0 andRemoveObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 valueDidChange:(*BOOL)arg3 ;
-(id)allRegistrations;
-(id)description;
-(id)init;
-(id)lastModifiedDateForContextualKeyPath:(id)arg0 ;
-(id)objectForContextualKeyPath:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)propertiesForContextualKeyPath:(id)arg0 ;
-(id)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtKeyPath:(id)arg1 ;
-(id)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtKeyPath:(id)arg1 removedObjects:(*id)arg2 ;
-(id)setObject:(id)arg0 returningMetadataForContextualKeyPath:(id)arg1 ;
-(id)unsafe_addObjects:(id)arg0 andRemoveObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 valueDidChange:(*BOOL)arg3 ;
-(id)unsafe_evaluatedContextWithRegistration:(id)arg0 date:(id)arg1 ;
-(id)unsafe_setObject:(id)arg0 returningMetadataForContextualKeyPath:(id)arg1 ;
-(void)addCallback:(id)arg0 forKeyPath:(id)arg1 ;
-(void)dealloc;
-(void)deregisterCallback:(id)arg0 ;
-(void)evalutateRegistrationPredicatesWithPreviousContextValue:(id)arg0 date:(id)arg1 keyPath:(id)arg2 ;
-(void)locationCoordinatorCircularRegionsDidChange:(id)arg0 ;
-(void)receiveSystemTimeCallback:(id)arg0 ;
-(void)registerCallback:(id)arg0 ;
-(void)unsafe_deregisterCallback:(id)arg0 ;
-(void)unsafe_deregisterForSystemTimeBasedCallbacksForRegistration:(id)arg0 ;
-(void)unsafe_evalutateRegistrationPredicate:(id)arg0 previousContextValue:(id)arg1 date:(id)arg2 keyPath:(id)arg3 ;
-(void)unsafe_evalutateRegistrationPredicatesWithPreviousContextValue:(id)arg0 date:(id)arg1 keyPath:(id)arg2 ;
-(void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistration:(id)arg0 date:(id)arg1 ;
-(void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistrations:(id)arg0 date:(id)arg1 ;


@end


#endif