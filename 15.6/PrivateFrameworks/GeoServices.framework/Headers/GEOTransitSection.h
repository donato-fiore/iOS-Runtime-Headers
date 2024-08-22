// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTRANSITSECTION_H
#define GEOTRANSITSECTION_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOTransitSection : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _actionSheetArtworkIndexs;
    ? _routeDetailsArtworkIndexs;
    ? _stepIndexs;
    NSString *_actionSheetName;
    NSMutableArray *_ticketingSegments;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _nextOptionsIndex;
    BOOL _disableAlightNotifications;
    ? _flags;
}


@property (readonly, nonatomic) *unsigned int actionSheetArtworkIndexs;
@property (readonly, nonatomic) NSUInteger actionSheetArtworkIndexsCount;
@property (retain, nonatomic) NSString *actionSheetName;
@property (nonatomic) BOOL disableAlightNotifications;
@property (readonly, nonatomic) BOOL hasActionSheetName;
@property (nonatomic) BOOL hasDisableAlightNotifications;
@property (nonatomic) BOOL hasNextOptionsIndex;
@property (nonatomic) int nextOptionsIndex;
@property (readonly, nonatomic) *unsigned int routeDetailsArtworkIndexs;
@property (readonly, nonatomic) NSUInteger routeDetailsArtworkIndexsCount;
@property (readonly, nonatomic) *unsigned int stepIndexs;
@property (readonly, nonatomic) NSUInteger stepIndexsCount;
@property (retain, nonatomic) NSMutableArray *ticketingSegments;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)ticketingSegmentType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)ticketingSegmentAtIndex:(NSUInteger)arg0 ;
-(unsigned int)actionSheetArtworkIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)routeDetailsArtworkIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)stepIndexAtIndex:(NSUInteger)arg0 ;
-(void)addActionSheetArtworkIndex:(unsigned int)arg0 ;
-(void)addRouteDetailsArtworkIndex:(unsigned int)arg0 ;
-(void)addStepIndex:(unsigned int)arg0 ;
-(void)addTicketingSegment:(id)arg0 ;
-(void)clearActionSheetArtworkIndexs;
-(void)clearRouteDetailsArtworkIndexs;
-(void)clearStepIndexs;
-(void)clearTicketingSegments;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif