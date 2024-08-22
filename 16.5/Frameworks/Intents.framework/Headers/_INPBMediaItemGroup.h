// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBMEDIAITEMGROUP_H
#define _INPBMEDIAITEMGROUP_H

@class PBCodable, NSString, NSArray;
@protocol _INPBMediaItemGroup, NSSecureCoding, NSCopying;



@interface _INPBMediaItemGroup : PBCodable <_INPBMediaItemGroup, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *values; // ivar: _values
@property (readonly, nonatomic) NSUInteger valuesCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)valuesAtIndex:(NSUInteger)arg0 ;
-(void)addValues:(id)arg0 ;
-(void)clearValues;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif