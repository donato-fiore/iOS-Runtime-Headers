// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHIPPINGMETHOD_H
#define PKSHIPPINGMETHOD_H

@class NSString;
@protocol NSCopying, NSSecureCoding;


#import "PKPaymentSummaryItem.h"
#import "PKDateComponentsRange.h"

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding>



@property (copy, nonatomic) PKDateComponentsRange *dateComponentsRange; // ivar: _dateComponentsRange
@property (copy, nonatomic) NSString *detail; // ivar: _detail
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)shippingMethodWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToShippingMethod:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif