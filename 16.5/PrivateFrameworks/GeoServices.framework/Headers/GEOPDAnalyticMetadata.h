// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDANALYTICMETADATA_H
#define GEOPDANALYTICMETADATA_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOAbAssignInfo.h"
#import "GEOLocalTime.h"

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOSessionID _sessionId;
    GEOAbAssignInfo *_abAssignInfo;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    NSString *_loggedAbExperiment;
    NSString *_osVersion;
    NSString *_productName;
    CGFloat _relativeTimestamp;
    GEOLocalTime *_requestTime;
    NSMutableArray *_serviceTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _requestSource;
    unsigned int _routeStopCount;
    unsigned int _sequenceNumber;
    BOOL _isFromApi;
    BOOL _isInternalInstall;
    BOOL _isInternalTool;
    BOOL _isSiriOriginalRequest;
    ? _flags;
}


@property (retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *appMajorVersion;
@property (retain, nonatomic) NSString *appMinorVersion;
@property (retain, nonatomic) NSString *hardwareModel;
@property (readonly, nonatomic) BOOL hasAbAssignInfo;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;
@property (readonly, nonatomic) BOOL hasHardwareModel;
@property (nonatomic) BOOL hasIsFromApi;
@property (nonatomic) BOOL hasIsInternalInstall;
@property (nonatomic) BOOL hasIsInternalTool;
@property (nonatomic) BOOL hasIsSiriOriginalRequest;
@property (readonly, nonatomic) BOOL hasLoggedAbExperiment;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (readonly, nonatomic) BOOL hasProductName;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) BOOL hasRequestSource;
@property (readonly, nonatomic) BOOL hasRequestTime;
@property (nonatomic) BOOL hasRouteStopCount;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL isFromApi;
@property (nonatomic) BOOL isInternalInstall;
@property (nonatomic) BOOL isInternalTool;
@property (nonatomic) BOOL isSiriOriginalRequest;
@property (retain, nonatomic) NSString *loggedAbExperiment;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *productName;
@property (nonatomic) CGFloat relativeTimestamp;
@property (nonatomic) int requestSource;
@property (retain, nonatomic) GEOLocalTime *requestTime;
@property (nonatomic) unsigned int routeStopCount;
@property (nonatomic) unsigned int sequenceNumber;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (nonatomic) GEOSessionID sessionId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)serviceTagType;
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
-(id)initWithTraits:(id)arg0 ;
-(id)jsonRepresentation;
-(id)requestSourceAsString:(int)arg0 ;
-(id)serviceTagAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRequestSource:(id)arg0 ;
-(void)addServiceTag:(id)arg0 ;
-(void)clearServiceTags;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif