// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTPAYMENTREMINDER_H
#define PKACCOUNTPAYMENTREMINDER_H

@class NSString, NSDecimalNumber, NSDate;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>


@interface PKAccountPaymentReminder : NSObject <NSSecureCoding, PKRecordObject>



@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDecimalNumber *minimumDue; // ivar: _minimumDue
@property (copy, nonatomic) NSDate *paymentDueDate; // ivar: _paymentDueDate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif