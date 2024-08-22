// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALPREPROCESSINGWRAPPER_H
#define SIRINLUINTERNALPREPROCESSINGWRAPPER_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUINTERNALEMBEDDINGEmbeddingResponse.h"
#import "SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse.h"
#import "SIRINLUINTERNALSPANMATCHSpanMatchResponse.h"
#import "SIRINLUINTERNALTOKENIZERTokenizerResponse.h"

@interface SIRINLUINTERNALPreprocessingWrapper : PBCodable <NSCopying>



@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *embeddingResponse; // ivar: _embeddingResponse
@property (readonly, nonatomic) BOOL hasEmbeddingResponse;
@property (readonly, nonatomic) BOOL hasMentionResolverResponse;
@property (readonly, nonatomic) BOOL hasSpanMatchResponse;
@property (readonly, nonatomic) BOOL hasTokenizerResponse;
@property (retain, nonatomic) SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse *mentionResolverResponse; // ivar: _mentionResolverResponse
@property (retain, nonatomic) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse; // ivar: _spanMatchResponse
@property (retain, nonatomic) SIRINLUINTERNALTOKENIZERTokenizerResponse *tokenizerResponse; // ivar: _tokenizerResponse


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