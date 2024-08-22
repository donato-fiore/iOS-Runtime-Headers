// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPMEDIAPREDICATEVALUE_H
#define MPPMEDIAPREDICATEVALUE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface MPPMediaPredicateValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL boolPredicateValue; // ivar: _boolPredicateValue
@property (retain, nonatomic) NSData *bytesPredicateValue; // ivar: _bytesPredicateValue
@property (nonatomic) CGFloat doublePredicateValue; // ivar: _doublePredicateValue
@property (nonatomic) float floatPredicateValue; // ivar: _floatPredicateValue
@property (nonatomic) BOOL hasBoolPredicateValue;
@property (readonly, nonatomic) BOOL hasBytesPredicateValue;
@property (nonatomic) BOOL hasDoublePredicateValue;
@property (nonatomic) BOOL hasFloatPredicateValue;
@property (nonatomic) BOOL hasIntegerPredicateValue;
@property (readonly, nonatomic) BOOL hasStringPredicateValue;
@property (nonatomic) NSInteger integerPredicateValue; // ivar: _integerPredicateValue
@property (retain, nonatomic) NSString *stringPredicateValue; // ivar: _stringPredicateValue
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif