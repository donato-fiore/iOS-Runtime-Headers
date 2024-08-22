// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPPLACEINFO_H
#define GEORPPLACEINFO_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOPDPlaceRequest.h"
#import "GEOPDPlaceResponse.h"

@interface GEORPPlaceInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    NSString *_sourceApplication;
    NSString *_sourceUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (readonly, nonatomic) BOOL hasPlaceResponse;
@property (readonly, nonatomic) BOOL hasSourceApplication;
@property (readonly, nonatomic) BOOL hasSourceUrl;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (retain, nonatomic) GEOPDPlaceResponse *placeResponse;
@property (retain, nonatomic) NSString *sourceApplication;
@property (retain, nonatomic) NSString *sourceUrl;


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
-(void)clearLocations;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSessionId;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif