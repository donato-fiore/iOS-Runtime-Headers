// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBPAYLOADNEEDSDISAMBIGUATION_H
#define _INPBPAYLOADNEEDSDISAMBIGUATION_H

@class PBCodable, NSString, NSArray;
@protocol _INPBPayloadNeedsDisambiguation, NSSecureCoding, NSCopying;



@interface _INPBPayloadNeedsDisambiguation : PBCodable <_INPBPayloadNeedsDisambiguation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *disambiguationItems; // ivar: _disambiguationItems
@property (readonly, nonatomic) NSUInteger disambiguationItemsCount;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)disambiguationItemsAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addDisambiguationItems:(id)arg0 ;
-(void)clearDisambiguationItems;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif