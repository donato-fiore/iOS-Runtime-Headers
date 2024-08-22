// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBPHOTOSKNOWLEDGEGRAPHENRICHMENTENTITY_H
#define BMPBPHOTOSKNOWLEDGEGRAPHENRICHMENTENTITY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBPhotosKnowledgeGraphEnrichmentEntity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int category; // ivar: _category
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasScore;
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat score; // ivar: _score


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