// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALEMBEDDINGEMBEDDINGRESPONSE_H
#define SIRINLUINTERNALEMBEDDINGEMBEDDINGRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUINTERNALNLv4EmbeddingTensor.h"
#import "SIRINLUINTERNALSubwordTokenChain.h"
#import "SIRINLUINTERNALTokenChain.h"

@interface SIRINLUINTERNALEMBEDDINGEmbeddingResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger embeddingDim; // ivar: _embeddingDim
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor; // ivar: _embeddingTensor
@property (retain, nonatomic) NSMutableArray *embeddingTensorOutputs; // ivar: _embeddingTensorOutputs
@property (nonatomic) BOOL hasEmbeddingDim;
@property (readonly, nonatomic) BOOL hasEmbeddingTensor;
@property (nonatomic) BOOL hasNumLayer;
@property (nonatomic) BOOL hasNumSubwordToken;
@property (nonatomic) BOOL hasNumToken;
@property (readonly, nonatomic) BOOL hasSentenceEmbeddingTensor;
@property (readonly, nonatomic) BOOL hasSubwordTokenChain;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (nonatomic) NSUInteger numLayer; // ivar: _numLayer
@property (nonatomic) NSUInteger numSubwordToken; // ivar: _numSubwordToken
@property (nonatomic) NSUInteger numToken; // ivar: _numToken
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *sentenceEmbeddingTensor; // ivar: _sentenceEmbeddingTensor
@property (retain, nonatomic) NSMutableArray *subwordEmbeddingTensorOutputs; // ivar: _subwordEmbeddingTensorOutputs
@property (retain, nonatomic) SIRINLUINTERNALSubwordTokenChain *subwordTokenChain; // ivar: _subwordTokenChain
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)embeddingTensorOutputsAtIndex:(NSUInteger)arg0 ;
-(id)subwordEmbeddingTensorOutputsAtIndex:(NSUInteger)arg0 ;
-(void)addEmbeddingTensorOutputs:(id)arg0 ;
-(void)addSubwordEmbeddingTensorOutputs:(id)arg0 ;
-(void)clearEmbeddingTensorOutputs;
-(void)clearSubwordEmbeddingTensorOutputs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif