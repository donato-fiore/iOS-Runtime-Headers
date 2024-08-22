// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAUTOMATICRELOADPAYMENTSUMMARYITEM_H
#define PKAUTOMATICRELOADPAYMENTSUMMARYITEM_H

@class NSDecimalNumber;
@protocol NSCopying, NSSecureCoding;


#import "PKPaymentSummaryItem.h"

@interface PKAutomaticReloadPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDecimalNumber *thresholdAmount; // ivar: _thresholdAmount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAutomaticReloadPaymentSummaryItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif