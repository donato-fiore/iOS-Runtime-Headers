// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLECODEDVALUECOLLECTION_H
#define HDCODABLECODEDVALUECOLLECTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDCodableCodedValueCollection : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *codedValues; // ivar: _codedValues


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)codedValuesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCodedValues:(id)arg0 ;
-(void)clearCodedValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif