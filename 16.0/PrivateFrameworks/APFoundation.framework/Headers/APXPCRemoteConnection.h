// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APXPCREMOTECONNECTION_H
#define APXPCREMOTECONNECTION_H

@class NSMutableArray, NSString, NSXPCConnection;

#import <Foundation/Foundation.h>

#import "APUnfairLock.h"

@interface APXPCRemoteConnection : NSObject

@property (retain, nonatomic) NSMutableArray *delegates; // ivar: _delegates
@property (readonly, nonatomic) NSString *machService; // ivar: _machService
@property (nonatomic) int numClients; // ivar: _numClients
@property (readonly, nonatomic) APUnfairLock *unfairLock; // ivar: _unfairLock
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)connectionFor:(id)arg0 ;
+(id)connectionForMachService:(id)arg0 ;
+(id)sharedConnectionFor:(id)arg0 ;
+(id)sharedConnections;
+(void)addSharedConnection:(id)arg0 forMachService:(id)arg1 ;
+(void)removeSharedConnectionForMachService:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)decreaseConnectionCount;
-(void)increaseConnectionCount;
-(void)invalidateForDelegate:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif