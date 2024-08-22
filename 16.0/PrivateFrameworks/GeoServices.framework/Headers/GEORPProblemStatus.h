// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPPROBLEMSTATUS_H
#define GEORPPROBLEMSTATUS_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEORPDetails.h"
#import "GEORPNotification.h"
#import "GEORPResolution.h"

@interface GEORPProblemStatus : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    CGFloat _creationDate;
    GEORPDetails *_details;
    GEORPNotification *_notification;
    NSString *_problemId;
    GEORPResolution *_problemResolution;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _problemState;
    ? _flags;
}


@property (nonatomic) CGFloat creationDate;
@property (retain, nonatomic) GEORPDetails *details;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasDetails;
@property (readonly, nonatomic) BOOL hasNotification;
@property (readonly, nonatomic) BOOL hasProblemId;
@property (readonly, nonatomic) BOOL hasProblemResolution;
@property (nonatomic) BOOL hasProblemState;
@property (retain, nonatomic) GEORPNotification *notification;
@property (retain, nonatomic) NSString *problemId;
@property (retain, nonatomic) GEORPResolution *problemResolution;
@property (nonatomic) int problemState;


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
-(id)problemStateAsString:(int)arg0 ;
-(int)StringAsProblemState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif