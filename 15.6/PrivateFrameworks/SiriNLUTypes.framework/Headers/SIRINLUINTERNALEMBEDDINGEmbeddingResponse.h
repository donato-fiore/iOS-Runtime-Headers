// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALEMBEDDINGEMBEDDINGRESPONSE_H
#define SIRINLUINTERNALEMBEDDINGEMBEDDINGRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUINTERNALNLv4EmbeddingTensor.h"
#import "SIRINLUINTERNALTokenChain.h"

@interface SIRINLUINTERNALEMBEDDINGEmbeddingResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger embeddingDim; // ivar: _embeddingDim
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor; // ivar: _embeddingTensor
@property (nonatomic) BOOL hasEmbeddingDim;
@property (readonly, nonatomic) BOOL hasEmbeddingTensor;
@property (nonatomic) BOOL hasNumLayer;
@property (nonatomic) BOOL hasNumToken;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (nonatomic) NSUInteger numLayer; // ivar: _numLayer
@property (nonatomic) NSUInteger numToken; // ivar: _numToken
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif