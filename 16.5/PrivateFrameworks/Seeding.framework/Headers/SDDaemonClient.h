// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(BOOL)canCurrentDeviceEnrollInBetaProgram;
-(BOOL)isCurrentDeviceUsingSeedingAppleID;
-(id)daemonRemoteObjectProxy;
-(id)deviceAppleIDUsernameForCurrentDevice;
-(id)getCurrentDeviceEnrolledBetaProgramSynchronously;
-(id)getCurrentDeviceSynchronously;
-(id)init;
-(id)seedingAppleIDUsernameForCurrentDevice;
-(id)synchronousDaemonRemoteObjectProxy;
-(void)canFileFeedbackOnDevice:(id)arg0 completion:(id)arg1 ;
-(void)deleteSeedingAppleAccountWithCompletion:(id)arg0 ;
-(void)enrollDevice:(id)arg0 inProgram:(id)arg1 completion:(id)arg2 ;
-(void)enrolledBetaProgramForDevice:(id)arg0 completion:(id)arg1 ;
-(void)getCurrentDevice:(id)arg0 ;
-(void)getDevicesForPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)initializeDaemonConnection;
-(void)invalidateCacheWithCompletion:(id)arg0 ;
-(void)isDeviceEnrolledInBetaProgram:(id)arg0 completion:(id)arg1 ;
-(void)queryProgramsForSystemAccountsWithPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)setAppleAccountIdentifierWithAlternateDSIDForCurrentDevice:(id)arg0 completion:(id)arg1 ;
-(void)unenrollDevice:(id)arg0 completion:(id)arg1 ;


@end


#endif