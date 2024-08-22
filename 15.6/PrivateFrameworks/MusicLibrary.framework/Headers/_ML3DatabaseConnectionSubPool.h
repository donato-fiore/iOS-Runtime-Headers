// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ML3DATABASECONNECTIONSUBPOOL_H
#define _ML3DATABASECONNECTIONSUBPOOL_H

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface _ML3DatabaseConnectionSubPool : NSObject {
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSObject<OS_dispatch_queue> *_checkinQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_waitingSemaphore;
    NSMutableSet *_availableConnections;
    NSMutableSet *_busyConnections;
    NSInteger _connectionsProfilingLevel;
    int _willDeleteDatabaseNotifyToken;
    int _homeSharingCachesClearedNotifyToken;
}


@property (nonatomic) NSUInteger connectionsJournalingMode; // ivar: _connectionsJournalingMode
@property (nonatomic) NSInteger connectionsProfilingLevel;
@property (readonly, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (readonly, nonatomic) NSUInteger maxConcurrentConnections; // ivar: _maxConcurrentConnections
@property (nonatomic) BOOL useDistantConnections; // ivar: _useDistantConnections
@property (nonatomic) BOOL useReadOnlyConnections; // ivar: _useReadOnlyConnections


-(id)checkoutConnection:(*BOOL)arg0 ;
-(id)init;
-(id)initWithDatabasePath:(id)arg0 maxConcurrentConnections:(NSUInteger)arg1 ;
-(void)_handleDatabaseDeletion;
-(void)checkInConnection:(id)arg0 ;
-(void)checkInConnection:(id)arg0 returnToPool:(BOOL)arg1 ;
-(void)closeConnectionsAndWaitForBusyConnections:(BOOL)arg0 ;
-(void)dealloc;
-(void)handleDiagnostic:(id)arg0 ;


@end


#endif