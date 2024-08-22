// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPHISTORYENTRYSTORAGE_H
#define MSPHISTORYENTRYSTORAGE_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;


#import "MSPDirectionsSearch.h"
#import "MSPPlaceDisplay.h"
#import "MSPQuerySearch.h"
#import "MSPRidesharingTrip.h"
#import "MSPTransitStorageLineItem.h"

@interface MSPHistoryEntryStorage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (retain, nonatomic) MSPDirectionsSearch *directionsSearch; // ivar: _directionsSearch
@property (readonly, nonatomic) BOOL hasDirectionsSearch;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPlaceDisplay;
@property (nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasQuerySearch;
@property (readonly, nonatomic) BOOL hasRidesharingTrip;
@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTracksRAPRecordingOnly;
@property (readonly, nonatomic) BOOL hasTransitLineItem;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) MSPPlaceDisplay *placeDisplay; // ivar: _placeDisplay
@property (nonatomic) CGFloat position; // ivar: _position
@property (retain, nonatomic) MSPQuerySearch *querySearch; // ivar: _querySearch
@property (retain, nonatomic) MSPRidesharingTrip *ridesharingTrip; // ivar: _ridesharingTrip
@property (nonatomic) int searchType; // ivar: _searchType
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) BOOL tracksRAPRecordingOnly; // ivar: _tracksRAPRecordingOnly
@property (retain, nonatomic) MSPTransitStorageLineItem *transitLineItem; // ivar: _transitLineItem
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)searchTypeAsString:(int)arg0 ;
-(int)StringAsSearchType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif