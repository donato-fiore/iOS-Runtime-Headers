// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPFEEDBACKSUBMISSIONPARAMETERS_H
#define GEORPFEEDBACKSUBMISSIONPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEORPFeedbackCommonContext.h"
#import "GEORPFeedbackCommonCorrections.h"
#import "GEORPFeedbackDetails.h"
#import "GEORPFeedbackDynamicForm.h"

@interface GEORPFeedbackSubmissionParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientSubmissionUuid;
    GEORPFeedbackCommonContext *_commonContext;
    GEORPFeedbackCommonCorrections *_commonCorrections;
    GEORPFeedbackDetails *_details;
    GEORPFeedbackDynamicForm *_dynamicForm;
    NSString *_parentFeedbackId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _type;
    ? _flags;
}


@property (retain, nonatomic) NSString *clientSubmissionUuid;
@property (retain, nonatomic) GEORPFeedbackCommonContext *commonContext;
@property (retain, nonatomic) GEORPFeedbackCommonCorrections *commonCorrections;
@property (retain, nonatomic) GEORPFeedbackDetails *details;
@property (retain, nonatomic) GEORPFeedbackDynamicForm *dynamicForm;
@property (readonly, nonatomic) BOOL hasClientSubmissionUuid;
@property (readonly, nonatomic) BOOL hasCommonContext;
@property (readonly, nonatomic) BOOL hasCommonCorrections;
@property (readonly, nonatomic) BOOL hasDetails;
@property (readonly, nonatomic) BOOL hasDynamicForm;
@property (readonly, nonatomic) BOOL hasParentFeedbackId;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *parentFeedbackId;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif