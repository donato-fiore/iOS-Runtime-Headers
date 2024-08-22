// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDITINSTALLMENTPLANLINEITEM_H
#define PKCREDITINSTALLMENTPLANLINEITEM_H

@class NSDecimalNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCreditInstallmentPlanLineItem : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *itemDescription; // ivar: _itemDescription
@property (retain, nonatomic) NSDecimalNumber *paymentsToDateAmount; // ivar: _paymentsToDateAmount
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInstallmentPlanLineItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif