// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDDAEMON_H
#define SDDAEMON_H

@class NSMutableDictionary, NSString, NSXPCListener, NSNumber;
@protocol NSXPCListenerDelegate, SDDaemonXPCServer;

#import <Foundation/Foundation.h>


@interface SDDaemon : NSObject <NSXPCListenerDelegate, SDDaemonXPCServer>



@property (retain) NSMutableDictionary *appConnections; // ivar: _appConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (nonatomic) int profileToken; // ivar: _profileToken
@property (readonly) Class superclass;
@property (retain) NSNumber *userIdentifier; // ivar: _userIdentifier


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_connectionForPid:(id)arg0 ;
-(id)remoteObjectProxyForPID:(id)arg0 ;
-(void)_releaseAppConnectionWithPid:(int)arg0 ;
-(void)_startListeningForProfileChanges;
-(void)_stopListeningForProfileChanges;
-(void)_storeAppConnection:(id)arg0 ;
-(void)_verifyCurrentDevice;
-(void)canDeviceEnrollInBetaUpdates:(id)arg0 completion:(id)arg1 ;
-(void)canFileFeedbackOnDevice:(id)arg0 completion:(id)arg1 ;
-(void)checkIn;
-(void)dealloc;
-(void)deleteSeedingAppleAccountForDevice:(id)arg0 completion:(id)arg1 ;
-(void)enrollDevice:(id)arg0 inProgram:(id)arg1 completion:(id)arg2 ;
-(void)enrolledBetaProgramForDevice:(id)arg0 completion:(id)arg1 ;
-(void)getCurrentDevice:(id)arg0 ;
-(void)getCurrentPrimaryAppleIDForDevice:(id)arg0 completion:(id)arg1 ;
-(void)getCurrentSeedingAppleIDForDevice:(id)arg0 completion:(id)arg1 ;
-(void)getDevicesForPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)invalidateDaemonCacheWithCompletion:(id)arg0 ;
-(void)isDeviceEnrolledInBetaProgram:(id)arg0 completion:(id)arg1 ;
-(void)isDeviceUsingSeedingAppleID:(id)arg0 completion:(id)arg1 ;
-(void)queryProgramsForSystemAccountsWithPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)setAppleAccountIdentifierFromAlternateDSID:(id)arg0 forDevice:(id)arg1 completion:(id)arg2 ;
-(void)start;
-(void)unenrollDevice:(id)arg0 completion:(id)arg1 ;


@end


#endif