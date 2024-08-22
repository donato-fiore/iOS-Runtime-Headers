// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCURRENCYAMOUNT_H
#define INCURRENCYAMOUNT_H

@class NSDecimalNumber, NSString;
@protocol INCodableAttributeRelationComparing, INCurrencyAmountExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INCurrencyAmount : NSObject <INCodableAttributeRelationComparing, INCurrencyAmountExport, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_intents_compareValue:(id)arg0 relation:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithAmount:(id)arg0 currencyCode:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif