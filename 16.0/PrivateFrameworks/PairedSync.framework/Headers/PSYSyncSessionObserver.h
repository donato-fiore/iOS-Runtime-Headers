// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSYSYNCSESSIONOBSERVER_H
#define PSYSYNCSESSIONOBSERVER_H

@class NSXPCConnection, NSString;
@protocol PSYSyncSessionObserverInterface, OS_dispatch_queue, PSYSyncSessionObserverDelegate;

#import <Foundation/Foundation.h>

#import "PSYSyncSession.h"
#import "PSYSyncSessionObserverExportedObject.h"

@interface PSYSyncSessionObserver : NSObject <PSYSyncSessionObserverInterface>

 {
    PSYSyncSession *_currentSyncSession;
    PSYSyncSessionObserverExportedObject *_exportedObject;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    BOOL _shouldCheckinAfterInvalidationHandler;
    int _daemonDidLaunchNotifyToken;
    BOOL _resignedActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSYSyncSessionObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(id)providerWithErrorHandler:(id)arg0 ;
-(void)_checkin:(BOOL)arg0 ;
-(void)_connectionInvalidated;
-(void)_disconnectFromPairedSync;
-(void)_handleDaemonStarted;
-(void)_queue_invalidateSyncSession:(id)arg0 ;
-(void)_queue_loadConnectionIfNeeded;
-(void)_reconnectToPairedSync;
-(void)dealloc;
-(void)didBecomeActive:(id)arg0 ;
-(void)invalidateSyncSession:(id)arg0 ;
-(void)setCurrentSyncSession:(id)arg0 ;
-(void)startObservingSyncSessionsWithCompletion:(id)arg0 ;
-(void)syncSessionWillStart:(id)arg0 ;
-(void)updateSyncSession:(id)arg0 ;
-(void)willResignActive:(id)arg0 ;


@end


#endif