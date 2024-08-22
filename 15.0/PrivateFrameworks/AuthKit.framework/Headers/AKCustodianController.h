// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKCUSTODIANCONTROLLER_H
#define AKCUSTODIANCONTROLLER_H

@protocol AKCustodianDaemonProtocol;

#import <Foundation/Foundation.h>

#import "AKCustodianDaemonConnection.h"

@interface AKCustodianController : NSObject <AKCustodianDaemonProtocol>

 {
    AKCustodianDaemonConnection *_daemonConnection;
}




-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg0 ;
-(void)dealloc;
-(void)fetchCustodianDataRecoveryKeyWithContext:(id)arg0 completion:(id)arg1 ;
-(void)fetchCustodianRecoveryCodeConfigurationWithCompletion:(id)arg0 ;
-(void)fetchCustodianRecoveryTokenWithContext:(id)arg0 completion:(id)arg1 ;
-(void)finalizeCustodianSetupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)initiateCustodianSetupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)performTrustedContactsDataSync:(id)arg0 completion:(id)arg1 ;
-(void)revokeCustodianWithContext:(id)arg0 completion:(id)arg1 ;
-(void)sendEmbargoEndNotificationFeedbackWithContext:(id)arg0 urlKey:(id)arg1 completion:(id)arg2 ;
-(void)startCustodianRecoveryRequestWithContext:(id)arg0 completion:(id)arg1 ;
-(void)startCustodianRecoveryTransactionWithContext:(id)arg0 completion:(id)arg1 ;
-(void)updateCustodianRecoveryKeyWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif