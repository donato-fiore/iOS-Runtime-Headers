// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPFEEDBACKQUERYPARAMETERS_H
#define GEORPFEEDBACKQUERYPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEORPFeedbackComponentQueryParameters.h"
#import "GEORPFilter.h"

@interface GEORPFeedbackQueryParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _feedbackComponentTypes;
    GEORPFeedbackComponentQueryParameters *_componentQueryParameters;
    GEORPFilter *_filter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEORPFeedbackComponentQueryParameters *componentQueryParameters;
@property (readonly, nonatomic) *int feedbackComponentTypes;
@property (readonly, nonatomic) NSUInteger feedbackComponentTypesCount;
@property (retain, nonatomic) GEORPFilter *filter;
@property (readonly, nonatomic) BOOL hasComponentQueryParameters;
@property (readonly, nonatomic) BOOL hasFilter;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedbackComponentTypesAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsFeedbackComponentTypes:(id)arg0 ;
-(int)feedbackComponentTypeAtIndex:(NSUInteger)arg0 ;
-(void)addFeedbackComponentType:(int)arg0 ;
-(void)clearFeedbackComponentTypes;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif