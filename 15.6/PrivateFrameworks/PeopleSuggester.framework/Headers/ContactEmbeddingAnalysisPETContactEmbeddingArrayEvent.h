// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONTACTEMBEDDINGANALYSISPETCONTACTEMBEDDINGARRAYEVENT_H
#define CONTACTEMBEDDINGANALYSISPETCONTACTEMBEDDINGARRAYEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ContactEmbeddingAnalysisPETContactEmbeddingArrayEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *contactEmbeddings; // ivar: _contactEmbeddings
@property (retain, nonatomic) NSString *sessinobd; // ivar: _sessinobd
@property (retain, nonatomic) NSString *userId; // ivar: _userId


+(Class)contactEmbeddingType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contactEmbeddingAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContactEmbedding:(id)arg0 ;
-(void)clearContactEmbeddings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif