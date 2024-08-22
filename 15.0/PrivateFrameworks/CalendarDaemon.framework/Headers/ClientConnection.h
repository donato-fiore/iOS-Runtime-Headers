// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H

@class NSOperationQueue, NSMutableSet, NSString, NSXPCConnection;
@protocol CADDatabaseProvider, CalCalendarDatabaseRestoreGenerationChangedDelegate, CADAccountAccessHandler, OS_dispatch_queue, ClientConnectionDelegate;

#import <Foundation/Foundation.h>

#import "CADOperationProxy.h"
#import "CADDatabaseInitializationOptions.h"
#import "ClientIdentity.h"

@interface ClientConnection : NSObject <CADDatabaseProvider, CalCalendarDatabaseRestoreGenerationChangedDelegate>

 {
    BOOL _allowedEntityTypesValid;
    NSInteger _eventAccess;
    NSInteger _reminderAccess;
    ? _database;
    id<CADAccountAccessHandler> *_accountAccessHandler;
    id<CADAccountAccessHandler> *_strictAccountAccessHandler;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSOperationQueue *_operations;
    NSMutableSet *_canceledRequests;
    NSObject<OS_dispatch_queue> *_canceledRequestsLock;
    BOOL _initializationOptionsSet;
    int _databaseRestoreGeneration;
}


@property (readonly, nonatomic) NSObject<CADAccountAccessHandler> *accountAccessHandler;
@property (readonly, nonatomic) CADOperationProxy *cadOperationProxy; // ivar: _cadOperationProxy
@property (readonly, nonatomic) NSString *changeTrackingID;
@property ? database;
@property (retain, nonatomic) CADDatabaseInitializationOptions *databaseInitializationOptions; // ivar: _databaseInitializationOptions
@property (readonly) int databaseRestoreGeneration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ClientConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property ? existingDatabase;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ClientIdentity *identity; // ivar: _identity
@property (readonly) BOOL initializationOptionsSet;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(?)databaserestoreGenerationChangedExternally;
-(BOOL)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(id)arg0 ;
-(BOOL)hasTCCAccessToEntityWithObjectID:(id)arg0 ;
-(BOOL)isAlarmRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isCalendarItemManaged:(*void)arg0 ;
-(BOOL)isCalendarItemRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isCalendarManaged:(*void)arg0 ;
-(BOOL)isCalendarRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isNotificationRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isObjectWithObjectIDAJunkEvent:(id)arg0 ;
-(BOOL)isStoreManaged:(*void)arg0 ;
-(BOOL)isStoreRestricted:(*void)arg0 forAction:(NSUInteger)arg1 ;
-(BOOL)isStoreRestricted:(*void)arg0 forAction:(NSUInteger)arg1 strict:(BOOL)arg2 ;
-(id)_createManagedConfigAccountAccessHandlerWithValidator:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)restrictedCalendarRowIDsForAction:(NSUInteger)arg0 ;
-(void)_databaseRestoreGenerationChanged:(int)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)databaseRestoreGenerationChanged:(int)arg0 ;


@end


#endif