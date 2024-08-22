// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCREDITACCOUNTMERGESUMMARY_H
#define PKCREDITACCOUNTMERGESUMMARY_H

@class NSSet, NSDate, NSDecimalNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCreditAccountMergeSummary : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSSet *accountDetails; // ivar: _accountDetails
@property (retain, nonatomic) NSDate *mergeDate; // ivar: _mergeDate
@property (retain, nonatomic) NSDecimalNumber *totalBalance; // ivar: _totalBalance


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCreditAccountMergeSummary:(id)arg0 ;
-(NSUInteger)hash;
-(id)accountDetailsForAccountIdentifier:(id)arg0 ;
-(id)accountDetailsForAltDSID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif