// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALSUBWORD_EMBEDDINGSUBWORDEMBEDDINGRESPONSE_H
#define SIRINLUEXTERNALSUBWORD_EMBEDDINGSUBWORDEMBEDDINGRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUINTERNALSubwordTokenChain.h"
#import "SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput.h"

@interface SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasSubwordTokenChain;
@property (readonly, nonatomic) BOOL hasSubwordTokenEmbedding;
@property (retain, nonatomic) SIRINLUINTERNALSubwordTokenChain *subwordTokenChain; // ivar: _subwordTokenChain
@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput *subwordTokenEmbedding; // ivar: _subwordTokenEmbedding


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