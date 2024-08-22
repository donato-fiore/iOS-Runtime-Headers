// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDLSERVICEDISCOVERYMANAGER_H
#define AWDLSERVICEDISCOVERYMANAGER_H

@class NSLock, NSXPCConnection, NSMutableArray;

#import <Foundation/Foundation.h>


@interface AWDLServiceDiscoveryManager : NSObject {
    NSLock *_lock;
    NSXPCConnection *_xpcConnection;
    int _notifyToken;
    BOOL _attemptedReconnect;
    NSMutableArray *_activeTrafficRegistrations;
    NSInteger _suspendCount;
}




-(BOOL)_requiresConnection;
// -(BOOL)_usingAWDLDiscoveryManagerProxy:(id)arg0 onSuccess:(unk)arg1 error:(id)arg2  ;
-(BOOL)clearTrafficRegistration:(id)arg0 error:(*id)arg1 ;
-(BOOL)queryAirPlayConnectivityWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)resumeAWDLWithError:(*id)arg0 ;
-(BOOL)setTrafficRegistration:(id)arg0 error:(*id)arg1 ;
-(BOOL)suspendAWDLWithError:(*id)arg0 ;
-(id)init;
-(void)_destroyConnection;
-(void)_retryConnection;
-(void)connectionInvalidated;
-(void)dealloc;


@end


#endif