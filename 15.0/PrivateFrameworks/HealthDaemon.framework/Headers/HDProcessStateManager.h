// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDPROCESSSTATEMANAGER_H
#define HDPROCESSSTATEMANAGER_H

@class NSMutableDictionary, NSHashTable, NSSet, BKSApplicationStateMonitor, NSString;
@protocol HDDiagnosticObject, OS_dispatch_queue, HDApplicationStateMonitorProvider;

#import <Foundation/Foundation.h>


@interface HDProcessStateManager : NSObject <HDDiagnosticObject>

 {
    NSMutableDictionary *_processObserversByBundleID;
    NSHashTable *_foregroundClientProcessObservers;
    NSSet *_foregroundClientBundleIdentifiers;
    BKSApplicationStateMonitor *_applicationMonitor;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSMutableDictionary *_processInfoByBundleID;
}


@property (readonly, weak, nonatomic) NSObject<HDApplicationStateMonitorProvider> *applicationStateMonitorProvider; // ivar: _applicationStateMonitorProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)applicationIsForeground:(id)arg0 ;
-(BOOL)isApplicationInExtendedRuntimeSessionForBundleIdentifier:(id)arg0 ;
-(BOOL)isApplicationStateForegroundForBundleIdentifier:(id)arg0 ;
-(BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)arg0 ;
-(BOOL)registerObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(id)diagnosticDescription;
-(id)init;
-(id)initWithApplicationStateMonitorProvider:(id)arg0 ;
-(int)processIdentifierForApplicationIdentifier:(id)arg0 ;
-(unsigned int)applicationStateForBundleIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)registerForegroundClientProcessObserver:(id)arg0 ;
-(void)unregisterForegroundClientProcessObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif