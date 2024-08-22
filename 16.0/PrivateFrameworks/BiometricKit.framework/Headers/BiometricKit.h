// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BIOMETRICKIT_H
#define BIOMETRICKIT_H

@class NSString;
@protocol BiometricKitXPCClientDelegate, BiometricKitDelegateXpcProtocol, OS_os_log, BiometricKitDelegate;

#import <Foundation/Foundation.h>

#import "BiometricKitXPCClient.h"

@interface BiometricKit : NSObject <BiometricKitXPCClientDelegate, BiometricKitDelegateXpcProtocol>

 {
    BiometricKitXPCClient *_xpcClient;
    int _enrollingMode;
    int _matchingMode;
    NSDictionary" _images;
    ? _compSet;
    BOOL _showDebugImages;
    ? _enrollImageSet;
    BOOL _isInternalInstall;
    BOOL _ariadneSignposts;
    NSObject<OS_os_log> *_osLog;
    NSObject<OS_os_log> *_osLogTrace;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<BiometricKitDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) int enrollProgressConfigRenderMode; // ivar: _enrollProgressConfigRenderMode
@property (readonly) NSUInteger hash;
@property BOOL inUse; // ivar: _inUse
@property (readonly) Class superclass;


+(NSInteger)getSensorPatchVersion;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)manager;
-(BOOL)fileRadarWithLogs:(id)arg0 withDescription:(id)arg1 ;
-(BOOL)isDelegate;
-(BOOL)isFingerOn;
-(BOOL)isTouchIDAvailableWithInfo:(*NSInteger)arg0 ;
-(BOOL)isTouchIDCapable;
-(NSInteger)getBioLockoutState;
-(NSInteger)getBioLockoutStateForUser:(unsigned int)arg0 ;
-(NSInteger)getCalBlobVersion;
-(NSInteger)getCalibrationDataState;
-(NSInteger)getFreeIdentityCount:(int)arg0 forUser:(unsigned int)arg1 ;
-(NSInteger)getMaxIdentityCount:(int)arg0 ;
-(NSInteger)getProvisioningState;
-(NSInteger)getSensorCalibrationStatus;
-(float)getModulationRatio;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createMatchInfo:(id)arg0 withTopology:(struct ? *)arg1 withMatchImage:(struct ? *)arg2 ;
-(id)getCalibrationDataInfo;
-(id)getIdentitiesDatabaseHash;
-(id)getIdentitiesDatabaseHashForUser:(unsigned int)arg0 ;
-(id)getIdentitiesDatabaseUUID;
-(id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg0 ;
-(id)getIdentityFromUUID:(id)arg0 ;
-(id)getLogs:(BOOL)arg0 withDetails:(*id)arg1 ;
-(id)getMatchPolicyInfo;
-(id)getProtectedConfiguration;
-(id)getProtectedConfigurationForUser:(unsigned int)arg0 ;
-(id)getSensorInfo;
-(id)getSystemProtectedConfiguration;
-(id)getTemplateInfo:(id)arg0 ;
-(id)identities:(id)arg0 ;
-(id)imageDictFromRawImageData:(struct ? *)arg0 ;
-(id)init;
-(id)pullCalibrationData;
-(id)pullCaptureBuffer;
-(id)pullDebugImage:(BOOL)arg0 rotated:(BOOL)arg1 ;
-(int)detectFingerWithOptions:(id)arg0 ;
-(int)detectPresenceWithOptions:(id)arg0 ;
-(int)diagnostics:(int)arg0 withOptions:(id)arg1 passed:(*BOOL)arg2 withDetails:(*id)arg3 ;
-(int)dropUnlockToken;
-(int)enableBackgroundFdet:(BOOL)arg0 ;
-(int)enroll:(int)arg0 forUser:(unsigned int)arg1 withOptions:(id)arg2 ;
-(int)enroll:(int)arg0 withOptions:(id)arg1 ;
-(int)forceBioLockout;
-(int)forceBioLockoutForUser:(unsigned int)arg0 ;
-(int)getCountersignedStoreToken:(*id)arg0 ;
-(int)match:(id)arg0 ;
-(int)match:(id)arg0 withOptions:(id)arg1 ;
-(int)registerDSID:(NSUInteger)arg0 withAuthToken:(id)arg1 ;
-(int)registerDSID:(NSUInteger)arg0 withOptions:(id)arg1 ;
-(int)registerStoreToken:(id)arg0 ;
-(int)removeAllIdentitiesForUser:(unsigned int)arg0 withOptions:(id)arg1 ;
-(int)removeIdentity:(id)arg0 ;
-(int)removeIdentity:(id)arg0 withOptions:(id)arg1 ;
-(int)resetAppleConnectCounter;
-(int)setProtectedConfiguration:(id)arg0 forUser:(unsigned int)arg1 withOptions:(id)arg2 ;
-(int)setProtectedConfiguration:(id)arg0 withAuthToken:(id)arg1 ;
-(int)setProtectedConfiguration:(id)arg0 withOptions:(id)arg1 ;
-(int)setSystemProtectedConfiguration:(id)arg0 withOptions:(id)arg1 ;
-(int)setUserDSID:(NSUInteger)arg0 withAuthToken:(id)arg1 ;
-(int)setUserDSID:(NSUInteger)arg0 withOptions:(id)arg1 ;
-(int)updateIdentity:(id)arg0 ;
-(int)updateIdentity:(id)arg0 withOptions:(id)arg1 ;
-(void)_enrollResult:(id)arg0 ;
-(void)_homeButtonPressed;
-(void)_matchResult:(id)arg0 withDictionary:(id)arg1 ;
-(void)_statusMessage:(unsigned int)arg0 ;
-(void)_taskResumeStatus:(int)arg0 ;
-(void)_templateUpdate:(id)arg0 withDictionary:(id)arg1 ;
-(void)_touchIDButtonPressed:(BOOL)arg0 ;
-(void)appDidBecomeActive:(id)arg0 ;
-(void)appDidEnterBackground:(id)arg0 ;
-(void)appWillEnterForeground:(id)arg0 ;
-(void)appWillResignActive:(id)arg0 ;
-(void)cancel;
-(void)connectionInterrupted;
-(void)dealloc;
-(void)enrollFeedback:(id)arg0 client:(NSUInteger)arg1 ;
-(void)enrollProgressMessage:(unsigned int)arg0 ;
-(void)enrollResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)enrollUpdate:(id)arg0 client:(NSUInteger)arg1 ;
-(void)homeButtonPressed:(NSUInteger)arg0 ;
-(void)logEventOrCode:(NSUInteger)arg0 ;
-(void)matchResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)pullDebugImageData:(BOOL)arg0 rotated:(BOOL)arg1 target:(struct ? *)arg2 ;
-(void)removeAllIdentitiesForUser:(unsigned int)arg0 withOptions:(id)arg1 withReply:(id)arg2 ;
-(void)removeIdentity:(id)arg0 withOptions:(id)arg1 withReply:(id)arg2 ;
-(void)setDebugImages:(BOOL)arg0 ;
-(void)setProtectedConfiguration:(id)arg0 forUser:(unsigned int)arg1 withOptions:(id)arg2 withReply:(id)arg3 ;
-(void)setProtectedConfiguration:(id)arg0 withOptions:(id)arg1 withReply:(id)arg2 ;
-(void)setSystemProtectedConfiguration:(id)arg0 withOptions:(id)arg1 withReply:(id)arg2 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;
-(void)statusMessage:(unsigned int)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)taskResumeStatus:(int)arg0 client:(NSUInteger)arg1 ;
-(void)templateUpdate:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)timestampEvent:(NSUInteger)arg0 ;
-(void)touchIDButtonPressed:(BOOL)arg0 client:(NSUInteger)arg1 ;
-(void)updateIdentity:(id)arg0 withOptions:(id)arg1 withReply:(id)arg2 ;


@end


#endif