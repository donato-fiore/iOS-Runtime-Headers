// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTDETAILS_H
#define PKACCOUNTDETAILS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKAppleBalanceAccountDetails.h"
#import "PKCreditAccountDetails.h"
#import "PKPayLaterAccountDetails.h"

@interface PKAccountDetails : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) PKAppleBalanceAccountDetails *appleBalanceDetails; // ivar: _appleBalanceDetails
@property (readonly, nonatomic) PKCreditAccountDetails *creditDetails; // ivar: _creditDetails
@property (readonly, nonatomic) PKPayLaterAccountDetails *payLaterDetails; // ivar: _payLaterDetails
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAppleBalanceDetails:(id)arg0 ;
-(id)initWithCloudRecord:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCreditDetails:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithPayLaterDetails:(id)arg0 ;
-(void)encodeWithCloudRecord:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ingestExtendedAccountDetails:(id)arg0 ;


@end


#endif