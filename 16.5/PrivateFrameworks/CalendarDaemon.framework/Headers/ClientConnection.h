// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H

@class NSMutableDictionary, NSOperationQueue, NSMutableSet, PAApplication, NSString, NSXPCConnection;
@protocol CalCalendarDatabaseRestoreGenerationChangedDelegate, CalCalendarDatabaseIntegrityErrorReportingDelegate, CDBAccountInfo, CADACAccountsProvider, OS_dispatch_queue, ClientConnectionDelegate;

#import <Foundation/Foundation.h>

#import "CADAccountAccessHandler.h"
#import "CADOperationProxy.h"
#import "CADDatabaseInitializationOptions.h"
#import "ClientIdentity.h"

@interface ClientConnection : NSObject <CalCalendarDatabaseRestoreGenerationChangedDelegate, CalCalendarDatabaseIntegrityErrorReportingDelegate, CDBAccountInfo>

 {
    BOOL _allowedEntityTypesValid;
    NSInteger _eventAccess;
    NSInteger _reminderAccess;
    NSMutableDictionary *_databases;
    CADAccountAccessHandler *_accountAccessHandler;
    CADAccountAccessHandler *_strictAccountAccessHandler;
    id<CADACAccountsProvider> *_accountsProvider;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSOperationQueue *_operations;
    NSMutableSet *_canceledRequests;
    NSObject<OS_dispatch_queue> *_canceledRequestsLock;
    BOOL _initializationOptionsSet;
    int _databaseRestoreGeneration;
    int _auxDatabaseSequence;
    PAApplication *_privacyApplication;
}


@property (readonly, nonatomic) CADAccountAccessHandler *accountAccessHandler;
@property (readonly, nonatomic) CADOperationProxy *cadOperationProxy; // ivar: _cadOperationProxy
@property (readonly, nonatomic) NSString *changeTrackingID;
@property (readonly, nonatomic) CADDatabaseInitializationOptions *databaseInitializationOptions; // ivar: _databaseInitializationOptions
@property (readonly) int databaseRestoreGeneration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ClientConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ClientIdentity *identity; // ivar: _identity
@property (readonly) BOOL initializationOptionsSet;
@property (retain, nonatomic) NSObject<CDBAccountInfo> *localAccountInfo; // ivar: _localAccountInfo
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(?)addCreatedAuxDatabase;
-(?)databaserestoreGenerationChangedExternally;
-(BOOL)_isPrimaryObjectTypeForAccessLogging:(id)arg0 ;
-(BOOL)addressIsAccountOwner:(id)arg0 ;
-(BOOL)eventAccessGranted;
-(BOOL)isAlarmRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isCalendarItemManaged:(*void)arg0 ;
-(BOOL)isCalendarItemRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isCalendarManaged:(*void)arg0 ;
-(BOOL)isCalendarRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isNotificationRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isStoreManaged:(*void)arg0 ;
-(BOOL)isStoreRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isStoreRestricted:(*void)arg0 forAction:(NSUInteger)arg1 strict:(BOOL)arg2 ;
-(BOOL)reminderAccessGranted;
-(BOOL)trySetDatabaseInitializationOptions:(id)arg0 ;
-(BOOL)withDatabaseForObject:(id)arg0 perform:(id)arg1 ;
-(BOOL)withDatabaseForObjects:(id)arg0 options:(NSUInteger)arg1 perform:(id)arg2 ;
-(BOOL)withDatabaseForObjects:(id)arg0 perform:(id)arg1 ;
-(BOOL)withDatabaseID:(int)arg0 perform:(id)arg1 ;
-(id)_accountsProvider;
-(id)_createManagedConfigAccountAccessHandlerWithValidator:(id)arg0 ;
-(id)_databases;
-(id)_objectIDsResolvedAndLoggable:(id)arg0 ;
-(id)_objectIDsToBeResolved:(id)arg0 ;
-(id)_resolveObjectIDForLoggingAccessToEntity:(*void)arg0 ;
-(id)_resolveObjectIDsForLogging:(id)arg0 ;
-(id)accountsProvider;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)operations;
-(id)restrictedCalendarRowIDsForAction:(NSUInteger)arg0 inDatabase:(struct CalDatabase *)arg1 ;
-(id)strictAccountAccessHandler;
-(int)managedConfigurationAccountAccessForStore:(*void)arg0 ;
-(void)_closeDatabases;
-(void)_databaseRestoreGenerationChanged:(int)arg0 ;
-(void)_initAccountAccessHandler;
-(void)_loadAccessPermissionsIfNeeded;
-(void)_logAccessToResolvedObjectIDs:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)clearCachedAuthorizationStatus;
-(void)closeDatabases;
-(void)databaseRestoreGenerationChanged:(int)arg0 ;
-(void)dealloc;
-(void)dumpState;
-(void)handleDatabaseChanged;
-(void)handleDatabaseChangedExternally;
-(void)logAccessToEntities:(id)arg0 ;
-(void)logAccessToObject:(id)arg0 ;
-(void)logAccessToObjects:(id)arg0 ;
-(void)performWithAllDatabases:(id)arg0 ;
-(void)reportIntegrityErrors:(id)arg0 ;
-(void)validateAuxDatabases;


@end


#endif