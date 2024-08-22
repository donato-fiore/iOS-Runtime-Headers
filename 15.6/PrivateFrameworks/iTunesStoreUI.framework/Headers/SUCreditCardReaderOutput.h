// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCREDITCARDREADEROUTPUT_H
#define SUCREDITCARDREADEROUTPUT_H

@class NSString, NSNumber, NSError;
@protocol SSXPCCoding, NSSecureCoding;


#import "SUScriptObject.h"

@interface SUCreditCardReaderOutput : SUScriptObject <SSXPCCoding, NSSecureCoding>



@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) NSString *cardCardholderName; // ivar: _cardCardholderName
@property (copy, nonatomic) NSNumber *cardExpirationDay; // ivar: _cardExpirationDay
@property (copy, nonatomic) NSNumber *cardExpirationMonth; // ivar: _cardExpirationMonth
@property (copy, nonatomic) NSString *cardExpirationStringValue; // ivar: _cardExpirationStringValue
@property (copy, nonatomic) NSNumber *cardExpirationYear; // ivar: _cardExpirationYear
@property (copy, nonatomic) NSString *cardNumber; // ivar: _cardNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL manualEntrySelected; // ivar: _manualEntrySelected
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)attributeKeys;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif