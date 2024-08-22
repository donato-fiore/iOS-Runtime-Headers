// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALNLV4EMBEDDINGTENSOR_H
#define SIRINLUINTERNALNLV4EMBEDDINGTENSOR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SIRINLUINTERNALNLv4EmbeddingTensor : PBCodable <NSCopying>

 {
    ? _values;
    ? _has;
}


@property (retain, nonatomic) NSString *embedderId; // ivar: _embedderId
@property (nonatomic) NSUInteger embeddingDim; // ivar: _embeddingDim
@property (readonly, nonatomic) BOOL hasEmbedderId;
@property (nonatomic) BOOL hasEmbeddingDim;
@property (nonatomic) BOOL hasNumLayer;
@property (nonatomic) BOOL hasNumToken;
@property (nonatomic) NSUInteger numLayer; // ivar: _numLayer
@property (nonatomic) NSUInteger numToken; // ivar: _numToken
@property (readonly, nonatomic) *float values;
@property (readonly, nonatomic) NSUInteger valuesCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)valuesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addValues:(float)arg0 ;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif