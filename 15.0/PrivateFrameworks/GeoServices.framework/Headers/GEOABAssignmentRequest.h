// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOABASSIGNMENTREQUEST_H
#define GEOABASSIGNMENTREQUEST_H

@class PBRequest, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOPDClientMetadata.h"

@interface GEOABAssignmentRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDClientMetadata *_clientMetadata;
    NSString *_guid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _requestType;
    ? _flags;
}


@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (retain, nonatomic) NSString *guid;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly, nonatomic) BOOL hasGuid;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)requestTypeAsString:(int)arg0 ;
-(int)StringAsRequestType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif