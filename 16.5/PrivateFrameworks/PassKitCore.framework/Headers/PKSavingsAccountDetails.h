// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSAVINGSACCOUNTDETAILS_H
#define PKSAVINGSACCOUNTDETAILS_H

@class NSString, NSURL, NSDate, NSTimeZone;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKSavingsAccountSummary.h"

@interface PKSavingsAccountDetails : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (retain, nonatomic) PKSavingsAccountSummary *accountSummary; // ivar: _accountSummary
@property (copy, nonatomic) NSString *businessChatIdentifier; // ivar: _businessChatIdentifier
@property (copy, nonatomic) NSString *contactNumber; // ivar: _contactNumber
@property (copy, nonatomic) NSURL *contactWebsite; // ivar: _contactWebsite
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (nonatomic) BOOL moreInfoRequired; // ivar: _moreInfoRequired
@property (copy, nonatomic) NSURL *privacyPolicyURL; // ivar: _privacyPolicyURL
@property (retain, nonatomic) NSTimeZone *productTimeZone; // ivar: _productTimeZone
@property (copy, nonatomic) NSString *routingNumber; // ivar: _routingNumber
@property (nonatomic) BOOL termsAcceptanceRequired; // ivar: _termsAcceptanceRequired
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif