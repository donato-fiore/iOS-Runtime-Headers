// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKBUSINESSHOURS_H
#define GEORPFEEDBACKBUSINESSHOURS_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOPDHours.h"

@interface GEORPFeedbackBusinessHours : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_comments;
    NSUInteger _end;
    NSUInteger _start;
    GEOPDHours *_weeklyHours;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _hoursType;
    ? _flags;
}


@property (retain, nonatomic) NSString *comments;
@property (nonatomic) NSUInteger end;
@property (readonly, nonatomic) BOOL hasComments;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasHoursType;
@property (nonatomic) BOOL hasStart;
@property (readonly, nonatomic) BOOL hasWeeklyHours;
@property (nonatomic) int hoursType;
@property (nonatomic) NSUInteger start;
@property (retain, nonatomic) GEOPDHours *weeklyHours;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)hoursTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsHoursType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif