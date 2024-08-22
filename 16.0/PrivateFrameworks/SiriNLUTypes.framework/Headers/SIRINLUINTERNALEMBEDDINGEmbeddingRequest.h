// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALEMBEDDINGEMBEDDINGREQUEST_H
#define SIRINLUINTERNALEMBEDDINGEMBEDDINGREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "SIRINLUINTERNALTokenChain.h"

@interface SIRINLUINTERNALEMBEDDINGEmbeddingRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasText;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) NSString *text; // ivar: _text
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