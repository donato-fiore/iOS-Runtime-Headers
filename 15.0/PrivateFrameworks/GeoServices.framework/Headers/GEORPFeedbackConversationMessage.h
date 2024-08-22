// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPFEEDBACKCONVERSATIONMESSAGE_H
#define GEORPFEEDBACKCONVERSATIONMESSAGE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEORPTimestamp.h"
#import "GEORPPostedBy.h"

@interface GEORPFeedbackConversationMessage : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    GEORPTimestamp *_postedAt;
    GEORPPostedBy *_postedBy;
    NSMutableArray *_surveyResponses;
    NSString *_uuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *comments;
@property (readonly, nonatomic) BOOL hasComments;
@property (readonly, nonatomic) BOOL hasPostedAt;
@property (readonly, nonatomic) BOOL hasPostedBy;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) GEORPTimestamp *postedAt;
@property (retain, nonatomic) GEORPPostedBy *postedBy;
@property (retain, nonatomic) NSMutableArray *surveyResponses;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *uuid;


+(BOOL)isValid:(id)arg0 ;
+(Class)surveyResponseType;
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
-(id)surveyResponseAtIndex:(NSUInteger)arg0 ;
-(void)addSurveyResponse:(id)arg0 ;
-(void)clearSurveyResponses;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif