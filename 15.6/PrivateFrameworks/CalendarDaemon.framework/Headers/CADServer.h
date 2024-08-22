// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADSERVER_H
#define CADSERVER_H

@class NSXPCListener, NSMutableSet, NSLock, NSArray, NSString;
@protocol NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable>

 {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_tccQueue;
    NSMutableSet *_clientConnections;
    NSLock *_connectionLock;
    NSArray *_signalSensors;
    BOOL _initializationFinished;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue; // ivar: _alarmQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *modules; // ivar: _modules
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(?)_cleanupChangeTablesInDatabase;
-(?)cleanupDatabase;
-(BOOL)_trimAndExtendOccurrenceCache;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSUInteger)_contactsAuthorization;
-(NSUInteger)_lastKnownContactsAuthorization;
-(id)init;
-(id)initWithModules:(id)arg0 ;
-(void)_deactivateAndExitWithStatus:(int)arg0 ;
-(void)_dumpState;
-(void)_enableICloudBackups;
-(void)_exitWithStatus:(int)arg0 ;
-(void)_finishInitializationWithDataAvailable;
-(void)_handleDatabaseChanged;
-(void)_handleXPCConnection:(id)arg0 ;
-(void)_protectedDataDidBecomeAvailable;
-(void)_registerActivityWithIdentifier:(char *)arg0 block:(id)arg1 ;
-(void)_registerContactsAccess;
-(void)_registerForAlarmEvents;
-(void)_registerForAnalyticsCollection;
-(void)_registerForAttachmentCleanup;
-(void)_registerForChangeTableCleanup;
-(void)_registerForConferenceURLRenewal;
-(void)_registerForDatabaseCleanup;
-(void)_registerForNotifications;
-(void)_registerMaintenanceActivities;
-(void)_setUpSignalHandlers;
-(void)_setupBirthdayListener;
-(void)_startBirthdayListener;
-(void)_tearDownSignalHandlers;
-(void)_updateOccurrenceCacheTimeZone;
-(void)activate;
-(void)clientConnectionDied:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;


@end


#endif