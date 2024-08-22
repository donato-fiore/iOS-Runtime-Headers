// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALINTERNALSPANDATA_H
#define SIRINLUINTERNALINTERNALSPANDATA_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUINTERNALMentionDetectorSpanData.h"
#import "SIRINLUINTERNALMentionResolverSpanData.h"
#import "SIRINLUINTERNALOvertonKGSpanData.h"
#import "SIRINLUINTERNALPLUMSpanData.h"
#import "SIRINLUINTERNALSiriVocabularySpanData.h"

@interface SIRINLUINTERNALInternalSpanData : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMentionDetectorSpanData;
@property (readonly, nonatomic) BOOL hasMentionResolverSpanData;
@property (readonly, nonatomic) BOOL hasOvertonKgSpanData;
@property (readonly, nonatomic) BOOL hasPlumSpanData;
@property (readonly, nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) SIRINLUINTERNALMentionDetectorSpanData *mentionDetectorSpanData; // ivar: _mentionDetectorSpanData
@property (retain, nonatomic) SIRINLUINTERNALMentionResolverSpanData *mentionResolverSpanData; // ivar: _mentionResolverSpanData
@property (retain, nonatomic) SIRINLUINTERNALOvertonKGSpanData *overtonKgSpanData; // ivar: _overtonKgSpanData
@property (retain, nonatomic) SIRINLUINTERNALPLUMSpanData *plumSpanData; // ivar: _plumSpanData
@property (retain, nonatomic) SIRINLUINTERNALSiriVocabularySpanData *siriVocabularySpanData; // ivar: _siriVocabularySpanData


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