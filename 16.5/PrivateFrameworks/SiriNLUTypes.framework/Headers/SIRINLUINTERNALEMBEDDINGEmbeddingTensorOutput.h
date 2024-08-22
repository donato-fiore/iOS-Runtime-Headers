// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALEMBEDDINGEMBEDDINGTENSOROUTPUT_H
#define SIRINLUINTERNALEMBEDDINGEMBEDDINGTENSOROUTPUT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRINLUINTERNALNLv4EmbeddingTensor.h"

@interface SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger embeddingDim; // ivar: _embeddingDim
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor; // ivar: _embeddingTensor
@property (retain, nonatomic) NSString *embeddingVersion; // ivar: _embeddingVersion
@property (nonatomic) BOOL hasEmbeddingDim;
@property (readonly, nonatomic) BOOL hasEmbeddingTensor;
@property (readonly, nonatomic) BOOL hasEmbeddingVersion;
@property (nonatomic) BOOL hasIsStableEmbeddingsVersion;
@property (readonly, nonatomic) BOOL hasSentenceEmbeddingTensor;
@property (nonatomic) BOOL isStableEmbeddingsVersion; // ivar: _isStableEmbeddingsVersion
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *sentenceEmbeddingTensor; // ivar: _sentenceEmbeddingTensor


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