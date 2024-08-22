// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTINSTALLMENTITEM_H
#define PKPAYMENTINSTALLMENTITEM_H

@class NSDecimalNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentInstallmentItem : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSDecimalNumber *apr; // ivar: _apr
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) NSInteger installmentItemType; // ivar: _installmentItemType
@property (copy, nonatomic) NSString *programIdentifier; // ivar: _programIdentifier
@property (copy, nonatomic) NSString *programTerms; // ivar: _programTerms


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInstallmentItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif