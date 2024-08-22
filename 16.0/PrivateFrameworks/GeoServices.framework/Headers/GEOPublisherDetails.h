// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPUBLISHERDETAILS_H
#define GEOPUBLISHERDETAILS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOPublisherDetails : PBCodable <NSCopying>

 {
    ? _publisherIds;
    BOOL _currentlyFollowing;
    ? _flags;
}


@property (nonatomic) BOOL currentlyFollowing;
@property (nonatomic) BOOL hasCurrentlyFollowing;
@property (readonly, nonatomic) *NSUInteger publisherIds;
@property (readonly, nonatomic) NSUInteger publisherIdsCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)publisherIdAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addPublisherId:(NSUInteger)arg0 ;
-(void)clearPublisherIds;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif