// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGEVENTCURATEDCOLLECTIONSTATS_H
#define GEOLOGMSGEVENTCURATEDCOLLECTIONSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgEventCuratedCollectionStats : PBCodable <NSCopying>

 {
    ? _savedCollectionMuids;
}


@property (readonly, nonatomic) *NSUInteger savedCollectionMuids;
@property (readonly, nonatomic) NSUInteger savedCollectionMuidsCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)savedCollectionMuidsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addSavedCollectionMuids:(NSUInteger)arg0 ;
-(void)clearSavedCollectionMuids;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif