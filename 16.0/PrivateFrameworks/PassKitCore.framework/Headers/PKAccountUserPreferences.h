// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTUSERPREFERENCES_H
#define PKACCOUNTUSERPREFERENCES_H

@class NSDecimalNumber;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PKAccountUserPreferences : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>



@property (retain, nonatomic) NSDecimalNumber *monthlySpendLimitAmount; // ivar: _monthlySpendLimitAmount
@property (nonatomic) BOOL monthlySpendLimitEnabled; // ivar: _monthlySpendLimitEnabled
@property (nonatomic) BOOL showAvailableCredit; // ivar: _showAvailableCredit
@property (nonatomic) BOOL spendingEnabled; // ivar: _spendingEnabled
@property (retain, nonatomic) NSDecimalNumber *transactionSpendLimitAmount; // ivar: _transactionSpendLimitAmount
@property (nonatomic) BOOL transactionSpendLimitEnabled; // ivar: _transactionSpendLimitEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountUserPreferences:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountUserPreferences:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsonRepresentationForAccountUserAccessLevel:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif