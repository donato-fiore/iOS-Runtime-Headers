// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTPAYMENTSCHEDULEDETAILS_H
#define PKACCOUNTPAYMENTSCHEDULEDETAILS_H

@class NSTimeZone, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountPaymentScheduleDetails : NSObject <NSSecureCoding>

 {
    NSTimeZone *_productTimeZone;
}


@property (nonatomic) NSInteger frequency; // ivar: _frequency
@property (copy, nonatomic) NSString *paymentTermsIdentifier; // ivar: _paymentTermsIdentifier
@property (nonatomic) NSInteger preset; // ivar: _preset
@property (copy, nonatomic) NSDate *scheduledDate; // ivar: _scheduledDate
@property (nonatomic) NSInteger scheduledDay; // ivar: _scheduledDay


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)hashString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 productTimeZone:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setScheduleTimeZone:(id)arg0 ;


@end


#endif