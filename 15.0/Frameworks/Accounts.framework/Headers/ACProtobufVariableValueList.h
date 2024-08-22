// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACPROTOBUFVARIABLEVALUELIST_H
#define ACPROTOBUFVARIABLEVALUELIST_H

@class PBCodable, NSArray, NSSet, NSMutableArray;
@protocol NSCopying;



@interface ACProtobufVariableValueList : PBCodable <NSCopying>



@property (copy, nonatomic) NSArray *array;
@property (copy, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values; // ivar: _values


+(Class)valueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)_convertArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithArray:(id)arg0 ;
-(id)initWithSet:(id)arg0 ;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)addValue:(id)arg0 ;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif