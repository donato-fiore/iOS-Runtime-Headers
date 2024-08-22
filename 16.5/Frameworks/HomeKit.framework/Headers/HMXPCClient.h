// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMXPCCLIENT_H
#define HMXPCCLIENT_H

@class HMFMessageTransport, NSUUID, NSXPCConnection, NSString, NSMutableArray, NSDictionary;
@protocol HMFMessageTransportDelegate, HMFLogging;


#import "HMXPCMessageTransportConfiguration.h"

@interface HMXPCClient : HMFMessageTransport <HMFMessageTransportDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger homeDataAuthorizationStatus; // ivar: _homeDataAuthorizationStatus
@property (readonly, nonatomic) BOOL isAuthorizedForHomeDataAccess;
@property (readonly, copy, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (nonatomic) int notifyRegisterToken; // ivar: _notifyRegisterToken
@property (readonly, nonatomic) NSMutableArray *reconnectionHandlers; // ivar: _reconnectionHandlers
@property (nonatomic) BOOL requiresCheckin; // ivar: _requiresCheckin
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo; // ivar: _userInfo


+(id)exportedInterface;
+(id)logCategory;
+(id)remoteObjectInterface;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 userInfo:(id)arg1 ;
-(void)dealloc;
-(void)messageTransport:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)registerReconnectionHandler:(id)arg0 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif