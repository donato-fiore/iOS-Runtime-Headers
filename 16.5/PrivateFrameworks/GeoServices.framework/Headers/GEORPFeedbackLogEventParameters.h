// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKLOGEVENTPARAMETERS_H
#define GEORPFEEDBACKLOGEVENTPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEORPTimestamp.h"
#import "GEORPFeedbackLogEventDetails.h"

@interface GEORPFeedbackLogEventParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientEventUuid;
    GEORPTimestamp *_createdAt;
    GEORPFeedbackLogEventDetails *_details;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _type;
    ? _flags;
}


@property (retain, nonatomic) NSString *clientEventUuid;
@property (retain, nonatomic) GEORPTimestamp *createdAt;
@property (retain, nonatomic) GEORPFeedbackLogEventDetails *details;
@property (readonly, nonatomic) BOOL hasClientEventUuid;
@property (readonly, nonatomic) BOOL hasCreatedAt;
@property (readonly, nonatomic) BOOL hasDetails;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
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
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif