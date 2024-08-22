// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPDSCLIENT_H
#define CKDPDSCLIENT_H

@class PDSRegistrar, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDPDSClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) PDSRegistrar *registrar; // ivar: _registrar
@property (retain, nonatomic) NSMutableDictionary *registrationsByDSID; // ivar: _registrationsByDSID


+(id)sharedClient;
-(BOOL)_unregisterRegistration:(id)arg0 forDSID:(id)arg1 outError:(*id)arg2 ;
-(BOOL)ensureRegistrationForContainer:(id)arg0 outError:(*id)arg1 ;
-(BOOL)unregisterAllTokensForAccountID:(id)arg0 outError:(*id)arg1 ;
-(BOOL)unregisterTokenForContainer:(id)arg0 outError:(*id)arg1 ;
-(char)_pdsPushEnvironmentFromAPSEnvironmentString:(id)arg0 ;
-(id)_init;
-(id)_pdsQualifierFromContainerID:(id)arg0 ;
-(id)_pdsTopicFromBundleIdentifier:(id)arg0 withContainerID:(id)arg1 ;
-(id)_registrationForAppContainerAccountTuple:(id)arg0 pushBundleIdentifier:(id)arg1 pdsPushEnvironment:(char)arg2 ;
-(id)_registrationForContainer:(id)arg0 ;
-(id)inlock_registrationsForDSID:(id)arg0 ;
-(void)expungeStaleDSIDs;
-(void)unregisterAllTokens;


@end


#endif