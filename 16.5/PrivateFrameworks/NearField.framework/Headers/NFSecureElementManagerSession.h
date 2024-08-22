// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFSECUREELEMENTMANAGERSESSION_H
#define NFSECUREELEMENTMANAGERSESSION_H

@class NSMutableDictionary, NSString;
@protocol NFSecureElementManagerSessionCallbacks, NFAppletCollection, NFSecureElementManagerSessionDelegate;


#import "NFSession.h"

@interface NFSecureElementManagerSession : NFSession <NFSecureElementManagerSessionCallbacks, NFAppletCollection>

 {
    BOOL _hasApplets;
    NSMutableDictionary *_appletsById;
    id<NFSecureElementManagerSessionDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NFSecureElementManagerSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)deleteAllApplets:(BOOL)arg0 ;
-(BOOL)deleteAllApplets:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)deleteApplets:(id)arg0 queueServerConnection:(BOOL)arg1 ;
-(BOOL)deleteApplets:(id)arg0 queueServerConnection:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)didExitRestrictedMode:(id)arg0 error:(*id)arg1 ;
-(BOOL)disableAuthorizationForApplet:(id)arg0 andKey:(id)arg1 authorization:(id)arg2 error:(*id)arg3 ;
-(BOOL)disableAuthorizationForApplet:(id)arg0 andKeys:(id)arg1 authorization:(id)arg2 error:(*id)arg3 ;
-(BOOL)disableAuthorizationForApplet:(id)arg0 authorization:(id)arg1 ;
-(BOOL)disableAuthorizationForApplet:(id)arg0 authorization:(id)arg1 error:(*id)arg2 ;
-(BOOL)disableAuthorizationForApplets:(id)arg0 andKey:(id)arg1 authorization:(id)arg2 error:(*id)arg3 ;
-(BOOL)disableAuthorizationForApplets:(id)arg0 authorization:(id)arg1 error:(*id)arg2 ;
-(BOOL)expressModesEnabled;
-(BOOL)expressModesEnabledWithError:(*id)arg0 ;
-(BOOL)getAttackLogPresence:(id)arg0 error:(*id)arg1 ;
-(BOOL)getCryptogram:(*id)arg0 challengeResponse:(*id)arg1 ;
-(BOOL)getCryptogram:(*id)arg0 challengeResponse:(*id)arg1 error:(*id)arg2 ;
-(BOOL)powerCycleSEID:(id)arg0 error:(*id)arg1 ;
-(BOOL)refreshSecureElement:(id)arg0 ;
-(BOOL)refreshSecureElement:(id)arg0 error:(*id)arg1 ;
-(BOOL)restoreAuthorizarionForKeys:(id)arg0 onApplet:(id)arg1 error:(*id)arg2 ;
-(BOOL)restoreAuthorizationForAllAppletsExcept:(id)arg0 ;
-(BOOL)restoreAuthorizationForAllAppletsExcept:(id)arg0 error:(*id)arg1 ;
-(BOOL)setExpressModesEnabled:(BOOL)arg0 ;
-(BOOL)setExpressModesEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(NSInteger)expressModeControlState;
-(NSInteger)expressModeControlState:(*id)arg0 ;
-(NSInteger)getAndResetLPEMCounter:(*id)arg0 ;
-(id)_appletsById;
-(id)allApplets;
-(id)appletWithIdentifier:(id)arg0 ;
-(id)disableAuthorizationForPasses:(id)arg0 authorization:(id)arg1 ;
-(id)dumpDomain:(unsigned char)arg0 forSEID:(id)arg1 ;
-(id)dumpDomain:(unsigned char)arg0 forSEID:(id)arg1 error:(*id)arg2 ;
-(id)expressAppletIdentifiers;
-(id)expressAppletIdentifiersWithError:(*id)arg0 ;
-(id)felicaAppletState:(id)arg0 ;
-(id)felicaAppletState:(id)arg0 error:(*id)arg1 ;
-(id)getAttackCounterLogForSEID:(id)arg0 ;
-(id)getAttackCounterLogForSEID:(id)arg0 acknowledgeLogs:(BOOL)arg1 error:(*id)arg2 ;
-(id)getAttackCounterLogForSEID:(id)arg0 error:(*id)arg1 ;
-(id)getExpressPassConfigWithError:(*id)arg0 ;
-(id)getOSUpdateLog;
-(id)getServiceProviderDataForApplet:(id)arg0 error:(*id)arg1 ;
-(id)getServiceProviderDataForApplet:(id)arg0 publicKey:(id)arg1 scheme:(id)arg2 error:(*id)arg3 ;
-(id)getSignedPlatformDataForSeid:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)performPeerPaymentEnrollment:(id)arg0 error:(*id)arg1 ;
-(id)setExpressModesControlState:(NSInteger)arg0 ;
-(id)setExpressPassConfig:(id)arg0 restoreAuthorization:(BOOL)arg1 ;
-(id)signChallenge:(id)arg0 certs:(*id)arg1 ;
-(id)signChallenge:(id)arg0 certs:(*id)arg1 error:(*id)arg2 ;
-(id)signChallenge:(id)arg0 forAID:(id)arg1 certs:(*id)arg2 ;
-(id)signChallenge:(id)arg0 forAID:(id)arg1 certs:(*id)arg2 error:(*id)arg3 ;
-(id)signChallenge:(id)arg0 forAID:(id)arg1 sigInfo:(*id)arg2 error:(*id)arg3 ;
-(id)signChallenge:(id)arg0 useOSVersion:(BOOL)arg1 signatureInfo:(*id)arg2 ;
-(id)signChallenge:(id)arg0 useOSVersion:(BOOL)arg1 signatureInfo:(*id)arg2 error:(*id)arg3 ;
-(id)stateInformation;
-(id)stateInformationWithError:(*id)arg0 ;
-(id)stateInformationWithRedirectInfo:(id)arg0 error:(*id)arg1 ;
-(id)transceive:(id)arg0 forSEID:(id)arg1 ;
-(id)transceive:(id)arg0 forSEID:(id)arg1 error:(*id)arg2 ;
-(id)transceive:(id)arg0 forSEID:(id)arg1 toOS:(NSInteger)arg2 error:(*id)arg3 ;
-(id)transceiveMultiple:(id)arg0 forSEID:(id)arg1 error:(*id)arg2 ;
-(id)transceiveMultiple:(id)arg0 forSEID:(id)arg1 toOS:(NSInteger)arg2 error:(*id)arg3 ;
-(id)transitAppletState:(id)arg0 error:(*id)arg1 ;
-(unsigned int)runScript:(id)arg0 forSEID:(id)arg1 results:(*id)arg2 lastStatus:(*NSUInteger)arg3 ;
-(unsigned int)runScript:(id)arg0 parameters:(id)arg1 outputResults:(*id)arg2 ;
-(unsigned int)validateSEPairings:(*id)arg0 ;
-(unsigned int)validateSEPairings:(*id)arg0 outSEPairingVersion:(*NSUInteger)arg1 ;
-(void)_setApplets:(id)arg0 ;
-(void)didEndUnexpectedly;
-(void)didExitRestrictedMode:(id)arg0 ;


@end


#endif