// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSEARCHFORACCOUNTSINTENT_H
#define _INPBSEARCHFORACCOUNTSINTENT_H

@class PBCodable, NSString;
@protocol _INPBSearchForAccountsIntent, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBIntentMetadata.h"

@interface _INPBSearchForAccountsIntent : PBCodable <_INPBSearchForAccountsIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDataString *accountNickname; // ivar: _accountNickname
@property (nonatomic) int accountType; // ivar: _accountType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccountNickname;
@property (nonatomic) BOOL hasAccountType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (nonatomic) BOOL hasRequestedBalanceType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBDataString *organizationName; // ivar: _organizationName
@property (nonatomic) int requestedBalanceType; // ivar: _requestedBalanceType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)accountTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)requestedBalanceTypeAsString:(int)arg0 ;
-(int)StringAsAccountType:(id)arg0 ;
-(int)StringAsRequestedBalanceType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif