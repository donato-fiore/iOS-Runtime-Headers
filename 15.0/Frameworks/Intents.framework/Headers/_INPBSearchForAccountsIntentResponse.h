// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSEARCHFORACCOUNTSINTENTRESPONSE_H
#define _INPBSEARCHFORACCOUNTSINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBSearchForAccountsIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSearchForAccountsIntentResponse : PBCodable <_INPBSearchForAccountsIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *accounts; // ivar: _accounts
@property (readonly, nonatomic) NSUInteger accountsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)accountsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addAccounts:(id)arg0 ;
-(void)clearAccounts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif