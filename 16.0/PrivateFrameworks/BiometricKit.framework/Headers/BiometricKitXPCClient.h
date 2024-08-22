// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BIOMETRICKITXPCCLIENT_H
#define BIOMETRICKITXPCCLIENT_H

@protocol BiometricKitXPCClientDelegate><BiometricKitDelegateXpcProtocol;

#import <Foundation/Foundation.h>

#import "BiometricKitXPCClientConnection.h"

@interface BiometricKitXPCClient : NSObject {
    NSUInteger _clientID;
    NSUInteger _connectionID;
    NSInteger _clientType;
    BiometricKitXPCClientConnection *_connection;
    BOOL _connectionInitialized;
    BOOL _connectionInvalidated;
    BOOL _connectionInterrupted;
}


@property (readonly, nonatomic) NSUInteger clientID;
@property (readonly, nonatomic) NSUInteger connectionId;
@property (weak, nonatomic) NSObject<BiometricKitXPCClientDelegate><BiometricKitDelegateXpcProtocol> *delegate; // ivar: _delegate


+(void)initialize;
-(BOOL)fileRadarWithLogs:(id)arg0 withDescription:(id)arg1 ;
-(BOOL)isAriadneSignpostsEnabled;
-(BOOL)isFingerOn;
-(BOOL)isXARTAvailable;
-(NSInteger)getDeviceState;
-(NSInteger)getFreeIdentityCount:(int)arg0 forUser:(unsigned int)arg1 ;
-(NSInteger)getMaxIdentityCount:(int)arg0 ;
-(NSInteger)getProvisioningState;
-(NSInteger)getSensorCalibrationStatus;
-(id)getCalibrationDataInfo;
-(id)getIdentitiesDatabaseHashForUser:(unsigned int)arg0 ;
-(id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg0 ;
-(id)getIdentityFromUUID:(id)arg0 ;
-(id)getLogs:(BOOL)arg0 withDetails:(*id)arg1 ;
-(id)getNodeTopologyForIdentity:(id)arg0 ;
-(id)getProtectedConfigurationForUser:(unsigned int)arg0 ;
-(id)getSensorInfo;
-(id)getSystemProtectedConfiguration;
-(id)identities:(id)arg0 ;
-(id)init;
-(id)initWithDeviceType:(NSInteger)arg0 clientType:(NSInteger)arg1 ;
-(id)pullAlignmentData;
-(id)pullCalibrationData;
-(id)pullCaptureBuffer;
-(id)pullDebugImageData:(BOOL)arg0 rotated:(BOOL)arg1 imageWidth:(*unsigned int)arg2 imageHeight:(*unsigned int)arg3 ;
-(id)pullMatchPolicyInfoData;
-(int)completeEnrollment;
-(int)connect;
-(int)diagnostics:(int)arg0 withOptions:(id)arg1 passed:(*BOOL)arg2 withDetails:(*id)arg3 ;
-(int)dropUnlockToken;
-(int)enableBackgroundFdet:(BOOL)arg0 ;
-(int)enableMatchAutoRetry:(BOOL)arg0 ;
-(int)enrollContinue;
-(int)forceBioLockoutForUser:(unsigned int)arg0 withOptions:(id)arg1 ;
-(int)getBioLockoutState:(*NSInteger)arg0 forUser:(unsigned int)arg1 ;
-(int)getBiometryAvailability:(*NSInteger)arg0 forUser:(unsigned int)arg1 ;
-(int)getCountersignedStoreToken:(*id)arg0 ;
-(int)getDeviceHardwareState:(*unsigned int)arg0 ;
-(int)getExpressModeState:(*NSInteger)arg0 forUser:(unsigned int)arg1 ;
-(int)getLastMatchEvent:(*id)arg0 ;
-(int)getPeriocularMatchState:(unsigned int)arg0 state:(*NSInteger)arg1 ;
-(int)initializeConnection;
-(int)isPeriocularEnrollmentSupported:(*BOOL)arg0 ;
-(int)pauseFaceDetectTimer:(BOOL)arg0 ;
-(int)queryIdentityMigrationFailureForUser:(unsigned int)arg0 failed:(*BOOL)arg1 clear:(BOOL)arg2 ;
-(int)registerDSID:(NSUInteger)arg0 withOptions:(id)arg1 ;
-(int)registerStoreToken:(id)arg0 ;
-(int)resetAppleConnectCounter;
-(int)setTemplate:(id)arg0 forIdentity:(id)arg1 ;
-(int)setUserDSID:(NSUInteger)arg0 withOptions:(id)arg1 ;
-(int)startNewMatchAttempt;
-(int)suspendEnrollment:(BOOL)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)detectPresenceWithOptions:(id)arg0 async:(BOOL)arg1 withReply:(id)arg2 ;
-(void)disconnect;
-(void)enroll:(int)arg0 forUser:(unsigned int)arg1 withOptions:(id)arg2 async:(BOOL)arg3 withReply:(id)arg4 ;
-(void)interruptConnection;
-(void)invalidateConnection;
-(void)logEventOrCode:(NSUInteger)arg0 ;
-(void)match:(id)arg0 withOptions:(id)arg1 async:(BOOL)arg2 withReply:(id)arg3 ;
-(void)notifyAppIsBackground:(BOOL)arg0 ;
-(void)notifyAppIsInactive:(BOOL)arg0 ;
-(void)registerDelegate:(BOOL)arg0 ;
-(void)registerDelegateCall:(BOOL)arg0 ;
-(void)removeAllIdentitiesForUser:(unsigned int)arg0 withOptions:(id)arg1 async:(BOOL)arg2 withReply:(id)arg3 ;
-(void)removeIdentity:(id)arg0 withOptions:(id)arg1 async:(BOOL)arg2 withReply:(id)arg3 ;
-(void)removePeriocularTemplatesWithOptions:(id)arg0 async:(BOOL)arg1 withReply:(id)arg2 ;
-(void)setDebugImages:(BOOL)arg0 ;
-(void)setProtectedConfiguration:(id)arg0 forUser:(unsigned int)arg1 withOptions:(id)arg2 async:(BOOL)arg3 withReply:(id)arg4 ;
-(void)setSystemProtectedConfiguration:(id)arg0 withOptions:(id)arg1 async:(BOOL)arg2 withReply:(id)arg3 ;
-(void)timestampEvent:(NSUInteger)arg0 absoluteTime:(NSUInteger)arg1 ;
-(void)updateIdentity:(id)arg0 withOptions:(id)arg1 async:(BOOL)arg2 withReply:(id)arg3 ;


@end


#endif