// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSACTIONMANAGER_H
#define TRANSACTIONMANAGER_H

@class NSXPCConnection, NSXPCInterface, NSMutableArray;


#import "CHSynchronizedLoggable.h"

@interface TransactionManager : CHSynchronizedLoggable {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id *_syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}




+(id)instance;
-(id)init;
-(void)appendTransactions:(id)arg0 ;
-(void)appendTransactions_sync:(id)arg0 ;
-(void)createXpcConnection;
-(void)createXpcConnection_sync;
-(void)dealloc;
-(void)setupConnectionHandlers_sync;


@end


#endif