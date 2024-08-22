// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSEARCHFORCONTACTINTENTRESPONSE_H
#define _INPBSEARCHFORCONTACTINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSearchForContactIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSearchForContactIntentResponse : PBCodable <_INPBSearchForContactIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *matchedContacts; // ivar: _matchedContacts
@property (readonly, nonatomic) NSUInteger matchedContactsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)matchedContactsAtIndex:(NSUInteger)arg0 ;
-(void)addMatchedContacts:(id)arg0 ;
-(void)clearMatchedContacts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif