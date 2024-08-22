// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBDICTIONARY_H
#define _INPBDICTIONARY_H

@class PBCodable, NSString, NSArray;
@protocol _INPBDictionary, NSSecureCoding, NSCopying;



@interface _INPBDictionary : PBCodable <_INPBDictionary, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *pairs; // ivar: _pairs
@property (readonly, nonatomic) NSUInteger pairsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)pairType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)pairAtIndex:(NSUInteger)arg0 ;
-(void)addPair:(id)arg0 ;
-(void)clearPairs;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif