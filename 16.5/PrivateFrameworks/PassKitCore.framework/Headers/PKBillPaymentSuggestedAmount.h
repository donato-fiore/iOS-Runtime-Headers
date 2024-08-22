// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBILLPAYMENTSUGGESTEDAMOUNT_H
#define PKBILLPAYMENTSUGGESTEDAMOUNT_H

@class NSDecimalNumber, NSString;

#import <Foundation/Foundation.h>


@interface PKBillPaymentSuggestedAmount : NSObject

@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (nonatomic) NSUInteger category; // ivar: _category
@property (nonatomic) NSInteger merchantCategory; // ivar: _merchantCategory
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)roundingAmount:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAmount:(id)arg0 category:(NSUInteger)arg1 ;


@end


#endif