// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPBOOKMARKSTORAGE_H
#define MSPBOOKMARKSTORAGE_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;


#import "MSPPlaceBookmark.h"
#import "MSPRegionBookmark.h"
#import "MSPRouteBookmark.h"
#import "MSPTransitLineBookmark.h"

@interface MSPBookmarkStorage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPlaceBookmark;
@property (nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasRegionBookmark;
@property (readonly, nonatomic) BOOL hasRouteBookmark;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTransitLineBookmark;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) MSPPlaceBookmark *placeBookmark; // ivar: _placeBookmark
@property (nonatomic) CGFloat position; // ivar: _position
@property (retain, nonatomic) MSPRegionBookmark *regionBookmark; // ivar: _regionBookmark
@property (retain, nonatomic) MSPRouteBookmark *routeBookmark; // ivar: _routeBookmark
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) MSPTransitLineBookmark *transitLineBookmark; // ivar: _transitLineBookmark
@property (nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif