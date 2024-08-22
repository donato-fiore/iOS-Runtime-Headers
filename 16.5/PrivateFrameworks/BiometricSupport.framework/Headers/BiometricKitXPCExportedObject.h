// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICKITXPCEXPORTEDOBJECT_H
#define BIOMETRICKITXPCEXPORTEDOBJECT_H

@class NSMutableDictionary, NSXPCConnection, NSString;
@protocol BiometricKitXpcProtocol;

#import <Foundation/Foundation.h>

#import "BiometricKitXPCServer.h"

@interface BiometricKitXPCExportedObject : NSObject <BiometricKitXpcProtocol>

 {
    NSMutableDictionary *_clients;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BiometricKitXPCServer *server; // ivar: _server
@property (readonly) Class superclass;


-(id)client:(NSUInteger)arg0 ;
-(id)clients;
-(id)init;
-(void)cancel:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)completeEnrollment:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)connect:(id)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)dealloc;
-(void)detectPresenceWithOptions:(id)arg0 async:(BOOL)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)diagnostics:(int)arg0 options:(id)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)disconnect:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)dropUnlockToken:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)enableBackgroundFdet:(BOOL)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)enableMatchAutoRetry:(BOOL)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)enroll:(int)arg0 user:(unsigned int)arg1 options:(id)arg2 async:(BOOL)arg3 client:(NSUInteger)arg4 replyBlock:(id)arg5 ;
-(void)enrollContinue:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)fileRadarWithLogs:(id)arg0 description:(id)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)forceBioLockoutForUser:(unsigned int)arg0 options:(id)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)getBioLockoutStateForUser:(unsigned int)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getBiometryAvailabilityForUser:(unsigned int)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getCalibrationDataInfo:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)getCountersignedStoreToken:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)getDeviceHardwareState:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)getDeviceState:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)getExpressModeStateForUser:(unsigned int)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getFreeIdentityCount:(int)arg0 user:(unsigned int)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)getIdentitiesDatabaseHashForUser:(unsigned int)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getIdentityFromUUID:(id)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getLastMatchEvent:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)getLogs:(BOOL)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getMaxIdentityCount:(int)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getNodeTopologyForIdentity:(id)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getPeriocularMatchState:(unsigned int)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getPreferencesValueForKey:(id)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getProtectedConfigurationForUser:(unsigned int)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)getProvisioningState:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)getSensorCalibrationStatus:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)getSensorInfo:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)getSystemProtectedConfiguration:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)identities:(id)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)isAriadneSignpostsEnabled:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)isFingerOn:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)isPeriocularEnrollmentSupported:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)isXARTAvailable:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)logEventOrCode:(NSUInteger)arg0 ;
-(void)match:(id)arg0 options:(id)arg1 async:(BOOL)arg2 client:(NSUInteger)arg3 replyBlock:(id)arg4 ;
-(void)notifyAppIsBackground:(BOOL)arg0 client:(NSUInteger)arg1 ;
-(void)notifyAppIsInactive:(BOOL)arg0 client:(NSUInteger)arg1 ;
-(void)pauseFaceDetectTimer:(BOOL)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)pullAlignmentData:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)pullCalibrationData:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)pullCaptureBuffer:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)pullDebugImageData:(BOOL)arg0 rotated:(BOOL)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)pullMatchPolicyInfoData:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)queryIdentityMigrationFailureForUser:(unsigned int)arg0 clear:(BOOL)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)registerDSID:(NSUInteger)arg0 options:(id)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)registerDelegate:(BOOL)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)registerStoreToken:(id)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)removeAllIdentitiesForUser:(unsigned int)arg0 options:(id)arg1 async:(BOOL)arg2 client:(NSUInteger)arg3 replyBlock:(id)arg4 ;
-(void)removeIdentity:(id)arg0 options:(id)arg1 async:(BOOL)arg2 client:(NSUInteger)arg3 replyBlock:(id)arg4 ;
-(void)removePeriocularTemplatesWithOptions:(id)arg0 async:(BOOL)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)resetAppleConnectCounter:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)setDebugImages:(BOOL)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)setPreferencesValue:(id)arg0 forKey:(id)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)setProtectedConfiguration:(id)arg0 user:(unsigned int)arg1 options:(id)arg2 async:(BOOL)arg3 client:(NSUInteger)arg4 replyBlock:(id)arg5 ;
-(void)setSystemProtectedConfiguration:(id)arg0 options:(id)arg1 async:(BOOL)arg2 client:(NSUInteger)arg3 replyBlock:(id)arg4 ;
-(void)setTemplate:(id)arg0 forIdentity:(id)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)setUserDSID:(NSUInteger)arg0 options:(id)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)startNewMatchAttempt:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)suspendEnrollment:(BOOL)arg0 client:(NSUInteger)arg1 replyBlock:(id)arg2 ;
-(void)terminate;
-(void)timestampEvent:(NSUInteger)arg0 absoluteTime:(NSUInteger)arg1 client:(NSUInteger)arg2 replyBlock:(id)arg3 ;
-(void)updateIdentity:(id)arg0 options:(id)arg1 async:(BOOL)arg2 client:(NSUInteger)arg3 replyBlock:(id)arg4 ;


@end


#endif