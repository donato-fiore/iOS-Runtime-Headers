// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCMDMCLIENT_H
#define MCMDMCLIENT_H


#import <Foundation/Foundation.h>


@interface MCMDMClient : NSObject



+(id)sharedClient;
-(BOOL)authenticateWithCheckInURL:(id)arg0 identity:(struct __SecIdentity *)arg1 pinnedSecCertificateRefs:(id)arg2 pinningRevocationCheckRequired:(BOOL)arg3 topic:(id)arg4 useDevelopmentAPNS:(BOOL)arg5 signMessage:(BOOL)arg6 isUserEnrollment:(BOOL)arg7 enrollmentID:(id)arg8 outError:(*id)arg9 ;
-(BOOL)checkOutCheckInURL:(id)arg0 identity:(struct __SecIdentity *)arg1 pinnedSecCertificateRefs:(id)arg2 pinningRevocationCheckRequired:(BOOL)arg3 topic:(id)arg4 signMessage:(BOOL)arg5 isUserEnrollment:(BOOL)arg6 enrollmentID:(id)arg7 outError:(*id)arg8 ;
-(BOOL)isActivationLockAllowedWhileSupervised;
-(BOOL)isManagedByMDM;
-(int)_MCMigrationContextToMDMMigrationContext:(int)arg0 ;
-(int)_MDMAccessFlagToMCMDMAccessFlag:(int)arg0 ;
-(int)accessRights;
-(void)getAssertionDescriptionsWithCompletion:(id)arg0 ;
-(void)migrateMDMWithContext:(int)arg0 completion:(id)arg1 ;
-(void)notifyNewConfiguration;
-(void)processDeviceRequest:(id)arg0 encodeResponse:(BOOL)arg1 completion:(id)arg2 ;
-(void)retryNotNowResponse;
-(void)scheduleTokenUpdate;
-(void)scheduleTokenUpdateIfNecessary;
-(void)simulatePush;
-(void)simulatePushIfNetworkTetheredWithCompletion:(id)arg0 ;
-(void)uprootMDM;


@end


#endif