// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SDDAEMONCLIENT_H
#define SDDAEMONCLIENT_H

@class NSXPCConnection, NSString;
@protocol SDDaemonXPCClient;

#import <Foundation/Foundation.h>


@interface SDDaemonClient : NSObject <SDDaemonXPCClient>



@property (retain) NSXPCConnection *daemonConnection; // ivar: _daemonConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)daemonRemoteObjectProxy;
-(id)init;
-(void)enrollDevice:(id)arg0 inProgram:(id)arg1 completion:(id)arg2 ;
-(void)getCurrentDevice:(id)arg0 ;
-(void)getDevicesForPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)initializeDaemonConnection;
-(void)isDeviceEnrolledInBetaProgram:(id)arg0 completion:(id)arg1 ;
-(void)queryProgramsForSystemAccountsWithPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)unenrollDevice:(id)arg0 completion:(id)arg1 ;


@end


#endif