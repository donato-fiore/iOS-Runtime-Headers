// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSCOREDVALUE_H
#define _INPBSCOREDVALUE_H

@class PBCodable, NSString;
@protocol _INPBScoredValue, NSSecureCoding, NSCopying;



@interface _INPBScoredValue : PBCodable <_INPBScoredValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger score; // ivar: _score
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif