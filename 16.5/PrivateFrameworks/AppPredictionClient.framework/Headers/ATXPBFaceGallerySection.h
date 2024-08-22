// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBFACEGALLERYSECTION_H
#define ATXPBFACEGALLERYSECTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ATXPBFaceGallerySection : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSemanticType;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (nonatomic) int semanticType; // ivar: _semanticType
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)itemsAtIndex:(NSUInteger)arg0 ;
-(id)semanticTypeAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsSemanticType:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)clearItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif