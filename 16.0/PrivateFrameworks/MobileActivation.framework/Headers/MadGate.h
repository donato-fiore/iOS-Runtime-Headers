// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MADGATE_H
#define MADGATE_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface MadGate : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)deactivateDevice:(*id)arg0 ;
-(BOOL)deleteLegacyDeviceIdentity:(*id)arg0 ;
-(BOOL)handleActivationInfo:(id)arg0 withError:(*id)arg1 ;
-(BOOL)handleActivationInfoWithSession:(id)arg0 activationSignature:(id)arg1 error:(*id)arg2 ;
-(BOOL)isDeviceABrick:(*id)arg0 ;
-(BOOL)isInFieldCollected:(*id)arg0 ;
-(BOOL)isUCRTAvailable:(*id)arg0 ;
-(BOOL)reactivateDevice:(*id)arg0 ;
-(BOOL)recertifyDeviceWithError:(*id)arg0 ;
-(BOOL)unbrickDevice:(*id)arg0 ;
-(id)copyActivationRecord:(*id)arg0 ;
-(id)copyDCRT:(*id)arg0 ;
-(id)copyPCRTToken:(*id)arg0 ;
-(id)copyUCRTVersionInfo:(*id)arg0 ;
-(id)createActivationInfo:(*id)arg0 ;
-(id)createTunnel1ActivationInfo:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)createTunnel1SessionInfo:(*id)arg0 ;
-(id)getActivationBuild:(*id)arg0 ;
-(id)getActivationState:(*id)arg0 ;
-(id)getDCRTState:(*id)arg0 ;
-(id)getUCRTActivationLockState:(*id)arg0 ;
-(id)init;
-(id)issueClientCertificateLegacy:(id)arg0 error:(*id)arg1 ;
-(struct __SecIdentity *)copyLegacyDeviceIdentity:(*id)arg0 ;
-(void)dealloc;
-(void)issueDCRT:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateBasebandTicket:(struct __SecKey *)arg0 baaCert:(struct __SecCertificate *)arg1 baaIntermediateCert:(struct __SecCertificate *)arg2 options:(id)arg3 withCompletion:(id)arg4 ;


@end


#endif