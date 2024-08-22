// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSPOKENGUIDANCE_H
#define GEOSPOKENGUIDANCE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOSpokenGuidance : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_announcements;
    NSMutableArray *_timeGaps;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _alignment;
    unsigned int _endDesiredTime;
    unsigned int _exclusiveSetIdentifier;
    unsigned int _numChainedVariants;
    unsigned int _priority;
    unsigned int _repetitionInterval;
    unsigned int _startDesiredTime;
    BOOL _tapBeforeAnnouncement;
    ? _flags;
}


@property (nonatomic) int alignment;
@property (retain, nonatomic) NSMutableArray *announcements;
@property (nonatomic) unsigned int endDesiredTime;
@property (nonatomic) unsigned int exclusiveSetIdentifier;
@property (nonatomic) BOOL hasAlignment;
@property (nonatomic) BOOL hasEndDesiredTime;
@property (nonatomic) BOOL hasExclusiveSetIdentifier;
@property (nonatomic) BOOL hasNumChainedVariants;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) BOOL hasRepetitionInterval;
@property (nonatomic) BOOL hasStartDesiredTime;
@property (nonatomic) BOOL hasTapBeforeAnnouncement;
@property (nonatomic) unsigned int numChainedVariants;
@property (nonatomic) unsigned int priority;
@property (nonatomic) unsigned int repetitionInterval;
@property (nonatomic) unsigned int startDesiredTime;
@property (nonatomic) BOOL tapBeforeAnnouncement;
@property (retain, nonatomic) NSMutableArray *timeGaps;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)announcementType;
+(Class)timeGapType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)alignmentAsString:(int)arg0 ;
-(id)announcementAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)timeGapAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAlignment:(id)arg0 ;
-(void)addAnnouncement:(id)arg0 ;
-(void)addTimeGap:(id)arg0 ;
-(void)clearAnnouncements;
-(void)clearTimeGaps;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif