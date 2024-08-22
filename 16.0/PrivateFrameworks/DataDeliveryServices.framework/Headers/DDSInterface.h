// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDSINTERFACE_H
#define DDSINTERFACE_H

@class NSString, NSXPCConnection;
@protocol DDSManaging, DDSManagingDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DDSInterface.h"

@interface DDSInterface : NSObject <DDSManaging, DDSManagingDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionUsageQueue; // ivar: _connectionUsageQueue
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<DDSManagingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<DDSManagingDelegate> *mDelegate; // ivar: _mDelegate
@property (retain, nonatomic) NSXPCConnection *remoteServer; // ivar: _remoteServer
@property (retain, nonatomic) NSObject<DDSManaging> *serverOverride; // ivar: _serverOverride
@property (readonly, nonatomic) DDSInterface *sharedInstance; // ivar: _sharedInstance
@property (readonly) Class superclass;


+(NSUInteger)xpcConnectionOptionsForServer;
+(id)interface;
-(id)init;
-(id)server;
-(id)serviceObjectProxy;
-(id)syncServer;
-(id)syncServiceObjectProxy;
-(void)addAssertionForQuery:(id)arg0 policy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3 ;
-(void)assertionIDsForClientID:(id)arg0 reply:(id)arg1 ;
-(void)createConnectionIfNecessary;
-(void)dealloc;
-(void)removeAssertionWithID:(id)arg0 ;
-(void)teardownXPCConnection;
-(void)triggerDump;
-(void)triggerUpdate;


@end


#endif