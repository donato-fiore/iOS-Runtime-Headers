// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOABEXPERIMENTASSIGNMENT_H
#define GEOABEXPERIMENTASSIGNMENT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOABDebugPanelExperimentBranch.h"

@interface GEOABExperimentAssignment : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    NSString *_offlineAbJson;
    NSString *_querySubstring;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _placeRequestType;
    int _serviceType;
    ? _flags;
}


@property (retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (readonly, nonatomic) BOOL hasDebugExperimentBranch;
@property (readonly, nonatomic) BOOL hasOfflineAbJson;
@property (nonatomic) BOOL hasPlaceRequestType;
@property (readonly, nonatomic) BOOL hasQuerySubstring;
@property (nonatomic) BOOL hasServiceType;
@property (retain, nonatomic) NSString *offlineAbJson;
@property (nonatomic) int placeRequestType;
@property (retain, nonatomic) NSString *querySubstring;
@property (nonatomic) int serviceType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
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
-(id)placeRequestTypeAsString:(int)arg0 ;
-(id)serviceTypeAsString:(int)arg0 ;
-(int)StringAsPlaceRequestType:(id)arg0 ;
-(int)StringAsServiceType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif