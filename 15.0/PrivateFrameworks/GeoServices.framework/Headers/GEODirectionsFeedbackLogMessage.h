// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODIRECTIONSFEEDBACKLOGMESSAGE_H
#define GEODIRECTIONSFEEDBACKLOGMESSAGE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOLocation.h"

@interface GEODirectionsFeedbackLogMessage : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEONavigationAudioFeedback _navigationAudioFeedback;
    NSMutableArray *_directionsFeedbacks;
    CGFloat _durationOfTrip;
    GEOLocation *_finalLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _arrivedAtDestination;
    ? _flags;
}


@property (nonatomic) BOOL arrivedAtDestination;
@property (retain, nonatomic) NSMutableArray *directionsFeedbacks;
@property (nonatomic) CGFloat durationOfTrip;
@property (retain, nonatomic) GEOLocation *finalLocation;
@property (nonatomic) BOOL hasArrivedAtDestination;
@property (nonatomic) BOOL hasDurationOfTrip;
@property (readonly, nonatomic) BOOL hasFinalLocation;
@property (nonatomic) BOOL hasNavigationAudioFeedback;
@property (nonatomic) GEONavigationAudioFeedback navigationAudioFeedback;


+(BOOL)isValid:(id)arg0 ;
+(Class)directionsFeedbackType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)directionsFeedbackAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addDirectionsFeedback:(id)arg0 ;
-(void)clearDirectionsFeedbacks;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif