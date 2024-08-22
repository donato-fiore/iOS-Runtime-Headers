// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPUBLISHERATTRIBUTIONMANIFEST_H
#define GEOPUBLISHERATTRIBUTIONMANIFEST_H

@class PBCodable, NSMutableDictionary;
@protocol NSCopying;



@interface GEOPublisherAttributionManifest : PBCodable <NSCopying>

 {
    NSMutableDictionary *_publisherAttributionSources;
}


@property (retain, nonatomic) NSMutableDictionary *publisherAttributionSources;


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
-(id)publisherAttributionSourcesForKey:(id)arg0 ;
-(void)clearPublisherAttributionSources;
-(void)copyTo:(id)arg0 ;
-(void)enumeratePublisherAttributionSourcesUsingBlock:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif