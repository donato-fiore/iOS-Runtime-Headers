// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLIENTMANAGER_H
#define ICCLIENTMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ICClientManager : NSObject {
    BOOL _clientAdded;
    os_unfair_lock_s _clientsLock;
}


@property (retain, nonatomic) NSMutableArray *clients; // ivar: _clients
@property (nonatomic) id *delegate; // ivar: _delegate


-(NSUInteger)currentClientCount;
-(NSUInteger)removeClientWithPID:(id)arg0 ;
-(id)allClientConnections;
-(id)clientConnectionsMonitoringNotification:(id)arg0 ;
-(id)clientConnectionsMonitoringObjectID:(id)arg0 ;
-(id)copyClientsArray;
-(id)findClientWithPID:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(int)clientUsingDevice;
-(void)addClientWithConnection:(id)arg0 ;
-(void)addNotifications:(id)arg0 toClientWithPID:(id)arg1 ;
-(void)dealloc;
-(void)remNotifications:(id)arg0 toClientWithPID:(id)arg1 ;
-(void)sendMessage:(id)arg0 forClientWithPID:(id)arg1 ;
-(void)sendMessage:(id)arg0 withConnection:(id)arg1 ;
-(void)setClientWithPID:(id)arg0 usingDevice:(BOOL)arg1 ;
-(void)setClientWithPID:(id)arg0 usingObjectHandle:(id)arg1 ;


@end


#endif