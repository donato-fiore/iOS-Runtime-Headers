// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCREDITACCOUNTMERGESUMMARYACCOUNTDETAILS_H
#define PKCREDITACCOUNTMERGESUMMARYACCOUNTDETAILS_H

@class NSString, NSDecimalNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCreditAccountMergeSummaryAccountDetails : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSDecimalNumber *currentBalance; // ivar: _currentBalance
@property (copy, nonatomic) NSString *ownerAltDSID; // ivar: _ownerAltDSID
@property (retain, nonatomic) NSDecimalNumber *statementBalance; // ivar: _statementBalance


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCreditAccountMergeSummaryAccountDetails:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif