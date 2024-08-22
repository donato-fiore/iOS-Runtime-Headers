// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPPPROPERTYPREDICATE_H
#define MPPPROPERTYPREDICATE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "MPPMediaPredicateValue.h"

@interface MPPPropertyPredicate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int comparisonType; // ivar: _comparisonType
@property (nonatomic) BOOL hasComparisonType;
@property (readonly, nonatomic) BOOL hasProperty;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *property; // ivar: _property
@property (retain, nonatomic) MPPMediaPredicateValue *value; // ivar: _value


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