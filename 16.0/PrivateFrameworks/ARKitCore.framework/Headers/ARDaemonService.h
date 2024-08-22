// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARDAEMONSERVICE_H
#define ARDAEMONSERVICE_H

@class NSString, NSXPCConnection;
@protocol ARServiceType, ARDaemonServiceBaseProtocol, OS_os_transaction, OS_os_activity, ARRemoteServiceBaseProtocol, ARDaemonServiceDataSource, ARDaemonServiceDelegate;

#import <Foundation/Foundation.h>


@interface ARDaemonService : NSObject <ARServiceType, ARDaemonServiceBaseProtocol>

 {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_os_activity> *_daemonServiceActivity;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic, getter=isAuthorized) BOOL authorized; // ivar: _authorized
@property (readonly, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (readonly, nonatomic) int clientProcessIdentifier; // ivar: _clientProcessIdentifier
@property (readonly, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName
@property (readonly) NSObject<ARRemoteServiceBaseProtocol> *clientService; // ivar: _clientService
@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<ARDaemonServiceDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARDaemonServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSupported;
+(BOOL)isUnique;
+(Class)remoteServiceClass;
+(id)serviceName;
-(id)initAsLocalService;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithConnection:(id)arg0 exportedInterface:(id)arg1 remoteObjectInterface:(id)arg2 ;
-(void)interruptionHandler;
-(void)invalidate;
-(void)invalidationHandler;
-(void)resume;
-(void)startService:(id)arg0 ;
-(void)suspend;


@end


#endif