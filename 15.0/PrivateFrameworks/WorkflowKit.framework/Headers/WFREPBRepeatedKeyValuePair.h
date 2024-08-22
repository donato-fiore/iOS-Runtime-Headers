// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREPBREPEATEDKEYVALUEPAIR_H
#define WFREPBREPEATEDKEYVALUEPAIR_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface WFREPBRepeatedKeyValuePair : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSMutableArray *values; // ivar: _values


+(Class)valueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)addValue:(id)arg0 ;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif