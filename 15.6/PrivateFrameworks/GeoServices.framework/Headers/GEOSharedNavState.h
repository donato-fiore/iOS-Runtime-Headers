// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSHAREDNAVSTATE_H
#define GEOSHAREDNAVSTATE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOMapItemStorage.h"
#import "GEOSharedNavETAInfo.h"
#import "GEOSharedNavRouteInfo.h"
#import "GEOSharedNavSenderInfo.h"

@interface GEOSharedNavState : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_destinationInfo;
    GEOSharedNavETAInfo *_etaInfo;
    NSString *_groupIdentifier;
    CGFloat _localUpdatedTimestamp;
    GEOSharedNavRouteInfo *_routeInfo;
    GEOSharedNavSenderInfo *_senderInfo;
    CGFloat _updatedTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _protocolVersion;
    int _referenceFrame;
    unsigned int _transportType;
    BOOL _arrived;
    BOOL _closed;
    BOOL _muted;
    ? _flags;
}


@property (nonatomic) BOOL arrived;
@property (nonatomic) BOOL closed;
@property (retain, nonatomic) GEOMapItemStorage *destinationInfo;
@property (retain, nonatomic) GEOSharedNavETAInfo *etaInfo;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (nonatomic) BOOL hasArrived;
@property (nonatomic) BOOL hasClosed;
@property (readonly, nonatomic) BOOL hasDestinationInfo;
@property (readonly, nonatomic) BOOL hasEtaInfo;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (nonatomic) BOOL hasLocalUpdatedTimestamp;
@property (nonatomic) BOOL hasMuted;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) BOOL hasReferenceFrame;
@property (readonly, nonatomic) BOOL hasRouteInfo;
@property (readonly, nonatomic) BOOL hasSenderInfo;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasUpdatedTimestamp;
@property (nonatomic) CGFloat localUpdatedTimestamp;
@property (nonatomic) BOOL muted;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) int referenceFrame;
@property (retain, nonatomic) GEOSharedNavRouteInfo *routeInfo;
@property (retain, nonatomic) GEOSharedNavSenderInfo *senderInfo;
@property (nonatomic) unsigned int transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) CGFloat updatedTimestamp;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(id)referenceFrameAsString:(int)arg0 ;
-(int)StringAsReferenceFrame:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif