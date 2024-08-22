// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTSCHEDULEDPAYMENTLIST_H
#define PKACCOUNTSCHEDULEDPAYMENTLIST_H

@class NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountScheduledPaymentList : NSObject <NSSecureCoding>

 {
    NSMutableArray *_scheduledPayments;
}


@property (readonly, nonatomic) NSArray *scheduledPayments;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheduledPayment:(id)arg0 ;
-(id)jsonArrayRepresentationWithCertificatesResponse:(id)arg0 ;
-(id)scheduledPaymentOfFundingSourceType:(NSInteger)arg0 ;
-(void)addScheduledPayment:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif