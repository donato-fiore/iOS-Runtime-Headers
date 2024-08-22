// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTCREDITTERMSUPDATE_H
#define PKACCOUNTCREDITTERMSUPDATE_H

@class NSString;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKCreditAccountRates.h"

@interface PKAccountCreditTermsUpdate : NSObject <NSSecureCoding, PKRecordObject>



@property (copy, nonatomic) NSString *adverseActionContentIdentifier; // ivar: _adverseActionContentIdentifier
@property (retain, nonatomic) PKCurrencyAmount *creditLimit; // ivar: _creditLimit
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger initiator; // ivar: _initiator
@property (retain, nonatomic) PKCreditAccountRates *rates; // ivar: _rates
@property (copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif