// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CONTACTEMBEDDINGANALYSISPETCONTACTEMBEDDINGANALYSISEVENT_H
#define CONTACTEMBEDDINGANALYSISPETCONTACTEMBEDDINGANALYSISEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ContactEmbeddingAnalysisPETNeuralNetEmbedding.h"

@interface ContactEmbeddingAnalysisPETContactEmbeddingAnalysisEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *contactId; // ivar: _contactId
@property (retain, nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsAfterActivation; // ivar: _embeddingsAfterActivation
@property (retain, nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsBeforeActivation; // ivar: _embeddingsBeforeActivation


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