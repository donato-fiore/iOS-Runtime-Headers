// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBFINANCIALACCOUNTVALUE_H
#define _INPBFINANCIALACCOUNTVALUE_H

@class PBCodable, NSString;
@protocol _INPBFinancialAccountValue, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBBalanceAmountValue.h"
#import "_INPBValueMetadata.h"

@interface _INPBFinancialAccountValue : PBCodable <_INPBFinancialAccountValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDataString *accountNickname; // ivar: _accountNickname
@property (copy, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (nonatomic) int accountType; // ivar: _accountType
@property (retain, nonatomic) _INPBBalanceAmountValue *balance; // ivar: _balance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccountNickname;
@property (readonly, nonatomic) BOOL hasAccountNumber;
@property (nonatomic) BOOL hasAccountType;
@property (readonly, nonatomic) BOOL hasBalance;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (readonly, nonatomic) BOOL hasSecondaryBalance;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDataString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) _INPBBalanceAmountValue *secondaryBalance; // ivar: _secondaryBalance
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)accountTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAccountType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif