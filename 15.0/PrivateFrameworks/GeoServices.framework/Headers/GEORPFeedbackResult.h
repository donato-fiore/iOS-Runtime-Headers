// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPFEEDBACKRESULT_H
#define GEORPFEEDBACKRESULT_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEORPFeedbackIdLookupResult.h"
#import "GEORPFeedbackImageUploadResult.h"
#import "GEORPFeedbackLayoutConfigResult.h"
#import "GEORPFeedbackQueryResult.h"
#import "GEORPFeedbackSubmissionResult.h"

@interface GEORPFeedbackResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupResult *_idLookupResult;
    GEORPFeedbackImageUploadResult *_imageUploadResult;
    GEORPFeedbackLayoutConfigResult *_layoutConfigResult;
    GEORPFeedbackQueryResult *_queryResult;
    GEORPFeedbackSubmissionResult *_submissionResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasIdLookupResult;
@property (readonly, nonatomic) BOOL hasImageUploadResult;
@property (readonly, nonatomic) BOOL hasLayoutConfigResult;
@property (readonly, nonatomic) BOOL hasQueryResult;
@property (readonly, nonatomic) BOOL hasSubmissionResult;
@property (retain, nonatomic) GEORPFeedbackIdLookupResult *idLookupResult;
@property (retain, nonatomic) GEORPFeedbackImageUploadResult *imageUploadResult;
@property (retain, nonatomic) GEORPFeedbackLayoutConfigResult *layoutConfigResult;
@property (retain, nonatomic) GEORPFeedbackQueryResult *queryResult;
@property (retain, nonatomic) GEORPFeedbackSubmissionResult *submissionResult;
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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif