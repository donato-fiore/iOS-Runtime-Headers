// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INBILLDETAILS_H
#define INBILLDETAILS_H

@class NSString, NSDateComponents;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INCurrencyAmount.h"
#import "INBillPayee.h"

@interface INBillDetails : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (copy, nonatomic) INCurrencyAmount *amountDue; // ivar: _amountDue
@property (copy, nonatomic) INBillPayee *billPayee; // ivar: _billPayee
@property (nonatomic) NSInteger billType; // ivar: _billType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDateComponents *dueDate; // ivar: _dueDate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) INCurrencyAmount *lateFee; // ivar: _lateFee
@property (copy, nonatomic) INCurrencyAmount *minimumDue; // ivar: _minimumDue
@property (copy, nonatomic) NSDateComponents *paymentDate; // ivar: _paymentDate
@property (nonatomic) NSInteger paymentStatus; // ivar: _paymentStatus
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithBillType:(NSInteger)arg0 paymentStatus:(NSInteger)arg1 billPayee:(id)arg2 amountDue:(id)arg3 minimumDue:(id)arg4 lateFee:(id)arg5 dueDate:(id)arg6 paymentDate:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif