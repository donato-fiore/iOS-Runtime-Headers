// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGOPTIONINSTALLMENT_H
#define PKPAYLATERFINANCINGOPTIONINSTALLMENT_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPayLaterFinancingAmount.h"

@interface PKPayLaterFinancingOptionInstallment : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKPayLaterFinancingAmount *dueAmount; // ivar: _dueAmount
@property (copy, nonatomic) NSDate *dueDate; // ivar: _dueDate


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