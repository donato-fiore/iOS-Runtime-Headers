// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDQUICKLINKPARAMS_H
#define GEOPDQUICKLINKPARAMS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDQuickLinkParams : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    int _quickLinkItemIndex;
    ? _flags;
}


@property (nonatomic) BOOL hasQuickLinkItemIndex;
@property (nonatomic) int quickLinkItemIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif