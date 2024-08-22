// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBJSPROPERTIES_H
#define AMSUIWEBJSPROPERTIES_H

@class NSDictionary, CoreTelephonyClient, CTXPCServiceSubscriptionContext;
@protocol AMSUIWebJSPropertiesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"

@interface AMSUIWebJSProperties : NSObject

@property (weak, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<AMSUIWebJSPropertiesDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *lastAccountsExport; // ivar: _lastAccountsExport
@property (retain, nonatomic) CoreTelephonyClient *telephonyClient; // ivar: _telephonyClient
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *telephonyContext; // ivar: _telephonyContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyQueue; // ivar: _telephonyQueue
@property (nonatomic) BOOL telephonySetupFailed; // ivar: _telephonySetupFailed


+(BOOL)_hasRequiredTelephonyEntitlement;
-(BOOL)_setupTelephonyIfNeeded;
-(id)_accountsProperties;
-(id)_clientOptionsProperties;
-(id)_deviceProperties;
-(id)_hexStringFromColor:(id)arg0 ;
-(id)_pluginProperties;
-(id)_processProperties;
-(id)_propertiesForClientInfo:(id)arg0 ;
-(id)_telephoneProperties;
-(id)generateProperties;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_lastConnectionReportDidChange:(id)arg0 ;
-(void)dealloc;
-(void)operatorNameChanged:(id)arg0 name:(id)arg1 ;
-(void)phoneNumberAvailable:(id)arg0 ;
-(void)phoneNumberChanged:(id)arg0 ;


@end


#endif