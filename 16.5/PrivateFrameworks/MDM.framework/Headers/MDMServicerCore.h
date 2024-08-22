// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMSERVICERCORE_H
#define MDMSERVICERCORE_H

@class NSString, NSXPCConnection;
@protocol MDMXPCProtocol, MDMUserXPCProtocol;

#import <Foundation/Foundation.h>

#import "MDMServerCore.h"

@interface MDMServicerCore : NSObject <MDMXPCProtocol, MDMUserXPCProtocol>



@property (readonly, nonatomic) NSUInteger channelType; // ivar: _channelType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MDMServerCore *server; // ivar: _server
@property (readonly) Class superclass;
@property (weak, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)_remoteProcess:(id)arg0 hasEntitlement:(id)arg1 ;
-(id)_MDMAccessEntitlementForChannelType:(NSUInteger)arg0 ;
-(id)_lacksEntitlementError:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 server:(id)arg1 ;
-(void)blockAppInstallsWithCompletion:(id)arg0 ;
-(void)getAssertionDescriptionsWithCompletion:(id)arg0 ;
-(void)migrateMDMWithContext:(int)arg0 completion:(id)arg1 ;
-(void)notifyNewConfigurationWithCompletion:(id)arg0 ;
-(void)processDeviceRequest:(id)arg0 encodeResponse:(BOOL)arg1 completion:(id)arg2 ;
-(void)processUserRequest:(id)arg0 encodeResponse:(BOOL)arg1 completion:(id)arg2 ;
-(void)pushTokenWithCompletion:(id)arg0 ;
-(void)reauthenticationCompleteWithCompletion:(id)arg0 ;
-(void)requestInstallOfAppsInRestoreWithCompletion:(id)arg0 ;
-(void)retryNotNowWithCompletion:(id)arg0 ;
-(void)scheduleTokenUpdateIfNecessaryWithCompletion:(id)arg0 ;
-(void)scheduleTokenUpdateWithCompletion:(id)arg0 ;
-(void)simulatePushIfNetworkTetheredWithCompletion:(id)arg0 ;
-(void)simulatePushWithCompletion:(id)arg0 ;
-(void)touchWithCompletion:(id)arg0 ;
-(void)unblockAppInstallsWithCompletion:(id)arg0 ;
-(void)uprootMDMWithCompletion:(id)arg0 ;


@end


#endif