// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPFEEDBACKIDLOOKUPPARAMETERS_H
#define GEORPFEEDBACKIDLOOKUPPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEORPFeedbackIdLookupParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _feedbackComponentTypes;
    NSMutableArray *_feedbackIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int feedbackComponentTypes;
@property (readonly, nonatomic) NSUInteger feedbackComponentTypesCount;
@property (retain, nonatomic) NSMutableArray *feedbackIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)feedbackIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedbackComponentTypesAsString:(int)arg0 ;
-(id)feedbackIdAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsFeedbackComponentTypes:(id)arg0 ;
-(int)feedbackComponentTypeAtIndex:(NSUInteger)arg0 ;
-(void)addFeedbackComponentType:(int)arg0 ;
-(void)addFeedbackId:(id)arg0 ;
-(void)clearFeedbackComponentTypes;
-(void)clearFeedbackIds;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif