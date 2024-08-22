// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPFEEDBACKRESPONSE_H
#define GEORPFEEDBACKRESPONSE_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEORPFeedbackResult.h"

@interface GEORPFeedbackResponse : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEORPFeedbackResult *_feedbackResult;
    int _feedbackRequestType;
    int _status;
    BOOL _attestationNotFound;
    BOOL _discardLogs;
    ? _flags;
}


@property (nonatomic) BOOL attestationNotFound;
@property (nonatomic) BOOL discardLogs;
@property (nonatomic) int feedbackRequestType;
@property (retain, nonatomic) GEORPFeedbackResult *feedbackResult;
@property (nonatomic) BOOL hasAttestationNotFound;
@property (nonatomic) BOOL hasDiscardLogs;
@property (nonatomic) BOOL hasFeedbackRequestType;
@property (readonly, nonatomic) BOOL hasFeedbackResult;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedbackRequestTypeAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsFeedbackRequestType:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif