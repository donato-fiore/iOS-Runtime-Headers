// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTOPTIONSDEFAULTS_H
#define PKPAYMENTOPTIONSDEFAULTS_H

@class NSString, NSDictionary, CNContact;
@protocol PKPaymentOptionsSynchronizationDelegate, PKPaymentOptionsProtocol;

#import <Foundation/Foundation.h>

#import "PKPaymentOptionsSynchronization.h"

@interface PKPaymentOptionsDefaults : NSObject <PKPaymentOptionsSynchronizationDelegate, PKPaymentOptionsProtocol>

 {
    int _defaultsChangedNotifyToken;
    NSUInteger _postedNotificationCount;
    PKPaymentOptionsSynchronization *_optionsSynchronization;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *defaultBillingAddresses; // ivar: _defaultBillingAddresses
@property (retain, nonatomic) CNContact *defaultContactEmail; // ivar: _defaultContactEmail
@property (retain, nonatomic) CNContact *defaultContactName; // ivar: _defaultContactName
@property (retain, nonatomic) CNContact *defaultContactPhone; // ivar: _defaultContactPhone
@property (retain, nonatomic) CNContact *defaultShippingAddress; // ivar: _defaultShippingAddress
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaults;
-(id)_contactForKeychainKey:(id)arg0 ;
-(id)_keychainDataForKey:(id)arg0 ;
-(id)_lastUpdatedDatesForBillingAddresses;
-(id)_rawDefaultBillingAddresses;
-(id)defaultBillingAddressForBankAccountIdentifier:(id)arg0 ;
-(id)defaultBillingAddressForBankInformation:(id)arg0 ;
-(id)defaultBillingAddressForPaymentPass:(id)arg0 ;
-(id)defaultBillingAddressForPrimaryAccountIdentifier:(id)arg0 ;
-(id)defaultBillingAddressForRemotePaymentInstrument:(id)arg0 ;
-(id)init;
-(id)lastUpdatedDateForPrimaryAccountIdentifier:(id)arg0 ;
-(void)_deleteKeychainDataForKey:(id)arg0 ;
-(void)_deleteKeychainDataForKey:(id)arg0 localOnly:(BOOL)arg1 ;
-(void)_hardDeleteDefaultBillingAddress;
-(void)_registerForChangeNotifications;
-(void)_setContact:(id)arg0 forKeychainKey:(id)arg1 ;
-(void)_setContact:(id)arg0 property:(id)arg1 forKeychainKey:(id)arg2 ;
-(void)_setKeychainData:(id)arg0 forKey:(id)arg1 ;
-(void)_setRawDefaultBillingAddresses:(id)arg0 ;
-(void)_unregisterForChangeNotifications;
-(void)dealloc;
-(void)deleteAllDefaults;
-(void)deleteAllLocalDefaults;
-(void)deleteDefaultBillingAddress:(id)arg0 ;
-(void)deleteDefaultBillingAddressForPrimaryAccountIdentifier:(id)arg0 ;
-(void)deleteDefaultContactEmail;
-(void)deleteDefaultContactName;
-(void)deleteDefaultContactPhone;
-(void)deleteDefaultForContactKey:(id)arg0 ;
-(void)deleteDefaultShippingAddress;
-(void)migrateToSyncable;
-(void)optionsSynchronizationDidChangeTo:(BOOL)arg0 ;
-(void)setDefaultBillingAddress:(id)arg0 forBankInformation:(id)arg1 ;
-(void)setDefaultBillingAddress:(id)arg0 forPaymentPass:(id)arg1 ;
-(void)setDefaultBillingAddress:(id)arg0 forPrimaryAccountIdentifier:(id)arg1 ;
-(void)setDefaultBillingAddress:(id)arg0 forRemotePaymentInstrument:(id)arg1 ;
-(void)updateLastUpdatedDate:(id)arg0 forPrimaryAccountIdentifier:(id)arg1 ;


@end


#endif