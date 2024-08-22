// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBPAYLOADNEEDSVALUE_H
#define _INPBPAYLOADNEEDSVALUE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBPayloadNeedsValue, NSSecureCoding, NSCopying;



@interface _INPBPayloadNeedsValue : PBCodable <_INPBPayloadNeedsValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *promptItems; // ivar: _promptItems
@property (readonly, nonatomic) NSUInteger promptItemsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)promptItemsAtIndex:(NSUInteger)arg0 ;
-(void)addPromptItems:(id)arg0 ;
-(void)clearPromptItems;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif