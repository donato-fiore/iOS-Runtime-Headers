// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCTPNR_H
#define IDSCTPNR_H

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientPNRDelegate, IDSCTPNRDelegate;

#import <Foundation/Foundation.h>

#import "IDSCTPNRInfo.h"

@interface IDSCTPNR : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientPNRDelegate>



@property (weak, nonatomic) NSObject<IDSCTPNRDelegate> *PNRDelegate; // ivar: _PNRDelegate
@property (readonly, nonatomic) IDSCTPNRInfo *PNRInfo;
@property (nonatomic) NSInteger carrierShortcodeSupported; // ivar: _carrierShortcodeSupported
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (nonatomic) os_unfair_lock_s contextLock; // ivar: _contextLock
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPNRSupported;
@property (readonly, nonatomic) BOOL isSIMReady;
@property (retain, nonatomic) NSString *labelID; // ivar: _labelID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) BOOL userOptInRequired;


-(BOOL)isRelevantContext:(id)arg0 ;
-(BOOL)issuePNRForMechanism:(id)arg0 pushToken:(id)arg1 attemptCount:(unsigned int)arg2 completion:(id)arg3 ;
-(id)_initWithCoreTelephonyClient:(id)arg0 SIM:(id)arg1 ;
-(id)_telephonyRequestForPushToken:(id)arg0 phoneNumberValidationMechanism:(id)arg1 attemptCount:(unsigned int)arg2 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)operatorBundleChange:(id)arg0 ;
-(void)pnrReadyStateNotification:(id)arg0 regState:(BOOL)arg1 ;
-(void)pnrRequestSent:(id)arg0 pnrReqData:(id)arg1 ;
-(void)pnrResponseReceived:(id)arg0 pnrRspData:(id)arg1 ;
-(void)subscriptionInfoDidChange;


@end


#endif