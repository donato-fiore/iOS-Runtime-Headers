// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDDAEMON_H
#define SDDAEMON_H

@class NSMutableDictionary, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, SDDaemonXPCServer;

#import <Foundation/Foundation.h>


@interface SDDaemon : NSObject <NSXPCListenerDelegate, SDDaemonXPCServer>



@property (retain) NSMutableDictionary *appConnections; // ivar: _appConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_connectionForPid:(id)arg0 ;
-(id)remoteObjectProxyForPID:(id)arg0 ;
-(void)_releaseAppConnectionWithPid:(int)arg0 ;
-(void)_storeAppConnection:(id)arg0 ;
-(void)_verifyCurrentDevice;
-(void)checkIn;
-(void)enrollDevice:(id)arg0 inProgram:(id)arg1 completion:(id)arg2 ;
-(void)getCurrentDevice:(id)arg0 ;
-(void)getDevicesForPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)isDeviceEnrolledInBetaProgram:(id)arg0 completion:(id)arg1 ;
-(void)queryProgramsForSystemAccountsWithPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)start;
-(void)unenrollDevice:(id)arg0 completion:(id)arg1 ;


@end


#endif