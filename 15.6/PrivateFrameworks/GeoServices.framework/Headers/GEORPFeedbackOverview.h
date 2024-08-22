// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPFEEDBACKOVERVIEW_H
#define GEORPFEEDBACKOVERVIEW_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEORPTimestamp.h"

@interface GEORPFeedbackOverview : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPTimestamp *_createdAt;
    GEORPTimestamp *_lastUpdatedAt;
    NSString *_stateDescription;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _feedbackState;
    int _type;
    ? _flags;
}


@property (retain, nonatomic) GEORPTimestamp *createdAt;
@property (nonatomic) int feedbackState;
@property (readonly, nonatomic) BOOL hasCreatedAt;
@property (nonatomic) BOOL hasFeedbackState;
@property (readonly, nonatomic) BOOL hasLastUpdatedAt;
@property (readonly, nonatomic) BOOL hasStateDescription;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) GEORPTimestamp *lastUpdatedAt;
@property (retain, nonatomic) NSString *stateDescription;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedbackStateAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsFeedbackState:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif