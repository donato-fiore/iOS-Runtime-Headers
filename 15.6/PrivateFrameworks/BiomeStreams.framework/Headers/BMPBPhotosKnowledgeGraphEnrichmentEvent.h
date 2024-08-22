// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBPHOTOSKNOWLEDGEGRAPHENRICHMENTEVENT_H
#define BMPBPHOTOSKNOWLEDGEGRAPHENRICHMENTEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBPhotosKnowledgeGraphEnrichmentEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (retain, nonatomic) NSMutableArray *entities; // ivar: _entities
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSMutableArray *locations; // ivar: _locations
@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entitiesAtIndex:(NSUInteger)arg0 ;
-(id)locationsAtIndex:(NSUInteger)arg0 ;
-(id)topicsAtIndex:(NSUInteger)arg0 ;
-(void)addEntities:(id)arg0 ;
-(void)addLocations:(id)arg0 ;
-(void)addTopics:(id)arg0 ;
-(void)clearEntities;
-(void)clearLocations;
-(void)clearTopics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif