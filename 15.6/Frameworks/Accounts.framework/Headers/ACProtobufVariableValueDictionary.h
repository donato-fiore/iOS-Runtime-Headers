// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACPROTOBUFVARIABLEVALUEDICTIONARY_H
#define ACPROTOBUFVARIABLEVALUEDICTIONARY_H

@class PBCodable, NSDictionary, NSMutableArray;
@protocol NSCopying;



@interface ACProtobufVariableValueDictionary : PBCodable <NSCopying>



@property (copy, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSMutableArray *pairs; // ivar: _pairs


+(Class)pairType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)pairAtIndex:(NSUInteger)arg0 ;
-(void)addPair:(id)arg0 ;
-(void)clearPairs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif