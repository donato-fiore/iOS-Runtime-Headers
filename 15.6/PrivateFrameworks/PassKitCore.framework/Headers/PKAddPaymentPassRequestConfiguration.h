// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADDPAYMENTPASSREQUESTCONFIGURATION_H
#define PKADDPAYMENTPASSREQUESTCONFIGURATION_H

@class NSArray, NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *cardDetails; // ivar: _cardDetails
@property (copy, nonatomic) NSString *cardholderName; // ivar: _cardholderName
@property (readonly, copy, nonatomic) NSString *encryptionScheme; // ivar: _encryptionScheme
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, nonatomic, getter=isPaymentAccount) BOOL paymentAccount;
@property (copy, nonatomic) NSString *paymentNetwork; // ivar: _paymentNetwork
@property (copy, nonatomic) NSString *primaryAccountIdentifier; // ivar: _primaryAccountIdentifier
@property (copy, nonatomic) NSString *primaryAccountSuffix; // ivar: _primaryAccountSuffix
@property (copy, nonatomic) NSSet *productIdentifiers; // ivar: _productIdentifiers
@property (nonatomic) BOOL requiresFelicaSecureElement; // ivar: _requiresFelicaSecureElement
@property (nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(id)_effectiveDetails;
-(id)_filterWebServices:(id)arg0 primaryAccountIdentifierRequired:(BOOL)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncryptionScheme:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif