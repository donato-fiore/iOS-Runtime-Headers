// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDMCLIENT_H
#define MDMCLIENT_H

@class NSXPCConnection;
@protocol MDMClientDataProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MDMClient : NSObject

@property (retain, nonatomic) NSObject<MDMClientDataProvider> *dataProvider; // ivar: _dataProvider
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue; // ivar: _xpcConnectionSyncQueue


+(id)sharedClient;
-(BOOL)authenticateWithCheckInURL:(id)arg0 identity:(struct __SecIdentity *)arg1 pinnedSecCertificateRefs:(id)arg2 pinningRevocationCheckRequired:(BOOL)arg3 topic:(id)arg4 useDevelopmentAPNS:(BOOL)arg5 signMessage:(BOOL)arg6 isUserEnrollment:(BOOL)arg7 enrollmentID:(id)arg8 outError:(*id)arg9 ;
-(BOOL)checkOutCheckInURL:(id)arg0 identity:(struct __SecIdentity *)arg1 pinnedSecCertificateRefs:(id)arg2 pinningRevocationCheckRequired:(BOOL)arg3 topic:(id)arg4 signMessage:(BOOL)arg5 isUserEnrollment:(BOOL)arg6 enrollmentID:(id)arg7 outError:(*id)arg8 ;
-(BOOL)isActivationLockAllowedWhileSupervised;
-(BOOL)isManagedByMDM;
-(BOOL)remoteManagementCheckInURL:(id)arg0 identity:(struct __SecIdentity *)arg1 pinnedSecCertificateRefs:(id)arg2 pinningRevocationCheckRequired:(BOOL)arg3 signMessage:(BOOL)arg4 isUserEnrollment:(BOOL)arg5 enrollmentID:(id)arg6 endpoint:(id)arg7 requestData:(id)arg8 outResponse:(*id)arg9 outError:(*id)arg10 ;
-(id)deviceEnrollmentAuthenticationDict;
-(id)init;
-(id)initWithDataProvider:(id)arg0 ;
-(id)userEnrollmentAuthenticationDictWithEnrollmentID:(id)arg0 ;
-(int)accessRights;
-(void)_destroyXPCConnectionAndInvalidate:(BOOL)arg0 ;
-(void)_queue_createAndStartMDMXPCConnection;
-(void)blockAppInstallsWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)getAssertionDescriptionsWithCompletion:(id)arg0 ;
-(void)migrateMDMWithContext:(int)arg0 completion:(id)arg1 ;
-(void)notifyNewConfiguration;
-(void)processDeviceRequest:(id)arg0 encodeResponse:(BOOL)arg1 completion:(id)arg2 ;
-(void)reauthenticationComplete;
-(void)requestInstallOfAppsInRestoreWithCompletion:(id)arg0 ;
-(void)retryNotNowResponse;
-(void)scheduleTokenUpdate;
-(void)scheduleTokenUpdateIfNecessary;
-(void)simulatePush;
-(void)simulatePushIfNetworkTetheredWithCompletion:(id)arg0 ;
-(void)simulatePushWithCompletion:(id)arg0 ;
-(void)unblockAppInstallsWithCompletion:(id)arg0 ;
-(void)uprootMDM;


@end


#endif