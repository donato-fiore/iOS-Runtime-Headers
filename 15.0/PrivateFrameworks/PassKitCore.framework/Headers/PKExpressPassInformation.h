// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKEXPRESSPASSINFORMATION_H
#define PKEXPRESSPASSINFORMATION_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKExpressPassInformation : NSObject <NSSecureCoding>

 {
    NSDictionary *_configuration;
    NSString *_v0_expressMode;
}


@property (readonly, nonatomic) NSInteger cardType; // ivar: _cardType
@property (nonatomic) BOOL forceModernEncoding; // ivar: _forceModernEncoding
@property (readonly, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (readonly, nonatomic) NSDictionary *subcredentialCredentialIdentifiers;


+(BOOL)extractApplicationIdentifier:(*id)arg0 subcredentialIdentifier:(*id)arg1 fromIdentifiers:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initForPaymentPass:(id)arg0 configuration:(id)arg1 ;
-(id)criteriaForApplication:(id)arg0 ;
-(id)criteriaForPaymentApplicationIdentifier:(id)arg0 ;
-(id)description;
-(id)expressMode;
-(id)init;
-(id)initDummyExpressInfoForAutomaticSelectionCriteriaUpgradeRequest:(id)arg0 paymentPass:(id)arg1 withTechologyTest:(id)arg2 ;
-(id)initForExpressMode:(id)arg0 withPassUniqueIdentifier:(id)arg1 paymentApplicationIdentifier:(id)arg2 ;
-(id)initForPaymentPass:(id)arg0 withTechologyTest:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)paymentApplicationIdentifier;
-(id)paymentApplicationIdentifiers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateCredentialsWithHandler:(id)arg0 ;
-(void)enumerateCriteriaWithHandler:(id)arg0 ;


@end


#endif