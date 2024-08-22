// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSEARCHFORBILLSINTENTRESPONSE_H
#define _INPBSEARCHFORBILLSINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBSearchForBillsIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSearchForBillsIntentResponse : PBCodable <_INPBSearchForBillsIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *bills; // ivar: _bills
@property (readonly, nonatomic) NSUInteger billsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)billsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addBills:(id)arg0 ;
-(void)clearBills;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif