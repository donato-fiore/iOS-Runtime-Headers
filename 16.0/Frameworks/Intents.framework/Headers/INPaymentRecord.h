// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INPAYMENTRECORD_H
#define INPAYMENTRECORD_H

@class NSString;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INCurrencyAmount.h"
#import "INPerson.h"
#import "INPaymentMethod.h"

@interface INPaymentRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INCurrencyAmount *feeAmount; // ivar: _feeAmount
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *note; // ivar: _note
@property (readonly, copy, nonatomic) INPerson *payee; // ivar: _payee
@property (readonly, copy, nonatomic) INPerson *payer; // ivar: _payer
@property (readonly, copy, nonatomic) INPaymentMethod *paymentMethod; // ivar: _paymentMethod
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayee:(id)arg0 payer:(id)arg1 currencyAmount:(id)arg2 paymentMethod:(id)arg3 note:(id)arg4 status:(NSInteger)arg5 ;
-(id)initWithPayee:(id)arg0 payer:(id)arg1 currencyAmount:(id)arg2 paymentMethod:(id)arg3 note:(id)arg4 status:(NSInteger)arg5 feeAmount:(id)arg6 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif