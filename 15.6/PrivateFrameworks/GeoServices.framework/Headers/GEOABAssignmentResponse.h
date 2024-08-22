// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOABASSIGNMENTRESPONSE_H
#define GEOABASSIGNMENTRESPONSE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOABClientConfig.h"
#import "GEOABSecondPartyPlaceRequestClientMetaData.h"

@interface GEOABAssignmentResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_assignments;
    NSUInteger _branchExpirationTtlHours;
    GEOABClientConfig *_clientConfig;
    GEOABSecondPartyPlaceRequestClientMetaData *_mapsAbClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_parsecClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_rapClientMetadata;
    NSUInteger _refreshIntervalSeconds;
    NSString *_requestGuid;
    GEOABSecondPartyPlaceRequestClientMetaData *_siriClientMetadata;
    NSString *_sourceURL;
    CGFloat _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _invalidatePoiCache;
    BOOL _invalidateTileCache;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *assignments;
@property (nonatomic) NSUInteger branchExpirationTtlHours;
@property (retain, nonatomic) GEOABClientConfig *clientConfig;
@property (nonatomic) BOOL hasBranchExpirationTtlHours;
@property (readonly, nonatomic) BOOL hasClientConfig;
@property (nonatomic) BOOL hasInvalidatePoiCache;
@property (nonatomic) BOOL hasInvalidateTileCache;
@property (readonly, nonatomic) BOOL hasMapsAbClientMetadata;
@property (readonly, nonatomic) BOOL hasParsecClientMetadata;
@property (readonly, nonatomic) BOOL hasRapClientMetadata;
@property (nonatomic) BOOL hasRefreshIntervalSeconds;
@property (readonly, nonatomic) BOOL hasRequestGuid;
@property (readonly, nonatomic) BOOL hasSiriClientMetadata;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL invalidatePoiCache;
@property (nonatomic) BOOL invalidateTileCache;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *mapsAbClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *parsecClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *rapClientMetadata;
@property (nonatomic) NSUInteger refreshIntervalSeconds;
@property (retain, nonatomic) NSString *requestGuid;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *siriClientMetadata;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic) CGFloat timestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)assignmentType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)_clientConfigValueForKey:(id)arg0 ;
-(id)assignmentAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addAssignment:(id)arg0 ;
-(void)clearAssignments;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif