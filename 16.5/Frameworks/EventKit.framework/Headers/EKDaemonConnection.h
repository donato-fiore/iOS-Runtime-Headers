// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKDAEMONCONNECTION_H
#define EKDAEMONCONNECTION_H

@class NSMutableDictionary, NSString, CADDatabaseInitializationOptions, NSXPCConnection;
@protocol CADClientInterface, CADXPCProxyHelperDelegate, OS_dispatch_queue, CADInterface, EKDaemonConnectionDelegate;

#import <Foundation/Foundation.h>


@interface EKDaemonConnection : NSObject <CADClientInterface, CADXPCProxyHelperDelegate>

 {
    NSObject<OS_dispatch_queue> *_connectionLock;
    id<CADInterface> *_remoteOperationProxy;
    id<CADInterface> *_syncRemoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    BOOL _registeredForStartNote;
    BOOL _wasAbortedDueToExcessiveConnctions;
    os_unfair_lock_s _databaseRestoreGenerationLock;
    int _databaseRestoreGeneration;
    BOOL _databaseRestoreGenerationHasEverChangedSignificantly;
}


@property (readonly, retain, nonatomic) NSObject<CADInterface> *CADOperationProxy;
@property (readonly, retain, nonatomic) NSObject<CADInterface> *CADOperationProxySync;
@property (readonly, nonatomic) int databaseRestoreGeneration;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<EKDaemonConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEverConnected; // ivar: _hasEverConnected
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CADDatabaseInitializationOptions *initializationOptions; // ivar: _initializationOptions
@property (readonly, nonatomic) BOOL shouldValidateObjectIDs;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)_tryRegisterNewConnection;
+(NSUInteger)maxNumberOfOpenConnections;
+(void)_unregisterConnection;
-(BOOL)_connectToServer;
-(id)init;
-(id)operationForToken:(unsigned int)arg0 respondingToSelector:(SEL)arg1 finished:(BOOL)arg2 ;
-(unsigned int)addCancellableRemoteOperation:(id)arg0 ;
-(void)CADClientReceiveDatabaseIntegrityErrors:(id)arg0 ;
-(void)CADClientReceiveDiagnosticsCollectionResults:(id)arg0 forToken:(unsigned int)arg1 finished:(BOOL)arg2 ;
-(void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg0 forSearchToken:(unsigned int)arg1 finished:(BOOL)arg2 ;
-(void)_createConnectionAndOperationProxyIfNeeded;
-(void)_daemonRestarted;
-(void)_finishAllRepliesOnServerDeath;
-(void)cancelRemoteOperation:(unsigned int)arg0 ;
-(void)databaseRestoreGenerationChangedByThisClient:(int)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)removeCancellableRemoteOperation:(unsigned int)arg0 ;


@end


#endif