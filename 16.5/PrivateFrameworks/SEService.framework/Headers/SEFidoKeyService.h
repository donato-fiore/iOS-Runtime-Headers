// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEFIDOKEYSERVICE_H
#define SEFIDOKEYSERVICE_H


#import <Foundation/Foundation.h>


@interface SEFidoKeyService : NSObject



+(id)shared;
-(BOOL)deleteFidoKeyFor:(id)arg0 usingSession:(id)arg1 withSessionSEID:(id)arg2 error:(*id)arg3 ;
-(id)checkFidoKeyPresence:(id)arg0 usingSession:(id)arg1 withSessionSEID:(id)arg2 error:(*id)arg3 ;
-(id)checkMultipleFidoKeyPresence:(id)arg0 usingSession:(id)arg1 withSessionSEID:(id)arg2 error:(*id)arg3 ;
-(id)createFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 challenge:(id)arg2 usingSession:(id)arg3 withSessionSEID:(id)arg4 error:(*id)arg5 ;
-(id)createFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 challenge:(id)arg2 usingSession:(id)arg3 withSessionSEID:(id)arg4 externalizedAuth:(id)arg5 error:(*id)arg6 ;
-(id)signMultipleWithFidoKeysFor:(id)arg0 challenges:(id)arg1 forEndpointIdentifiers:(id)arg2 usingSession:(id)arg3 withSessionSEID:(id)arg4 externalizedAuth:(id)arg5 error:(*id)arg6 ;
-(id)signWithFidoKeyFor:(id)arg0 challenge:(id)arg1 forNFCKeyWithIdentifier:(id)arg2 usingSession:(id)arg3 withSessionSEID:(id)arg4 externalizedAuth:(id)arg5 error:(*id)arg6 ;
-(id)verifyWithFidoKeyFor:(id)arg0 signedChallenge:(id)arg1 usingSession:(id)arg2 withSessionSEID:(id)arg3 error:(*id)arg4 ;


@end


#endif