// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBJSTELEPHONY_H
#define AMSUIWEBJSTELEPHONY_H

@class NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext;
@protocol AMSUIWebJSTelephonyProtocol, AMSUIWebJSTelephonyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSUIWebJSTelephony : NSObject <AMSUIWebJSTelephonyProtocol>



@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIWebJSTelephonyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) NSString *radioTechnology;
@property (readonly, nonatomic) NSString *radioType;
@property (readonly) Class superclass;
@property (retain, nonatomic) CoreTelephonyClient *telephonyClient; // ivar: _telephonyClient
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *telephonyContext; // ivar: _telephonyContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyQueue; // ivar: _telephonyQueue
@property (nonatomic) BOOL telephonySetupFailed; // ivar: _telephonySetupFailed


+(BOOL)_hasCellularTelephonyCapability;
+(BOOL)_hasRequiredTelephonyEntitlement;
-(id)formattedPhoneNumber:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)operatorNameChanged:(id)arg0 name:(id)arg1 ;
-(void)phoneNumberAvailable:(id)arg0 ;
-(void)phoneNumberChanged:(id)arg0 ;


@end


#endif