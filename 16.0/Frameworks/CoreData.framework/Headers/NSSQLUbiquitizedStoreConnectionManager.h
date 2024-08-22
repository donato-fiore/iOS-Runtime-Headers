// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLUBIQUITIZEDSTORECONNECTIONMANAGER_H
#define NSSQLUBIQUITIZEDSTORECONNECTIONMANAGER_H



#import "NSSQLConnectionManager.h"
#import "NSSQLiteConnection.h"

@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager {
    NSSQLiteConnection *_connection;
}




-(BOOL)handleStoreRequest:(id)arg0 ;
-(id)initWithSQLCore:(id)arg0 priority:(NSUInteger)arg1 seedConnection:(id)arg2 ;
-(void)dealloc;
-(void)disconnectAllConnections;
-(void)scheduleBarrierBlock:(id)arg0 ;
-(void)scheduleConnectionsBarrier:(id)arg0 ;
-(void)setExclusiveLockingMode:(BOOL)arg0 ;


@end


#endif