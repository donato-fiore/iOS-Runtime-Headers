// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCXPCSERVICE_H
#define SBCXPCSERVICE_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBCXPCServiceInterface.h"
#import "SBCClientConfiguration.h"

@interface SBCXPCService : NSObject

@property (readonly, nonatomic) SBCXPCServiceInterface *XPCServiceInterface; // ivar: _XPCServiceInterface
@property (readonly, nonatomic) SBCClientConfiguration *clientConfiguration; // ivar: _clientConfiguration
@property (nonatomic, getter=isConnectionConfigured) BOOL connectionConfigured; // ivar: _connectionConfigured
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)XPCInterfaceDebugDescription;
+(id)newListener;
-(id)initWithClientConfiguration:(id)arg0 ;
-(id)newServiceConnection;
-(void)_openServiceConnection;
-(void)_serverDidLaunch;
-(void)closeServiceConnection;
-(void)dealloc;
-(void)didConnectToService;


@end


#endif