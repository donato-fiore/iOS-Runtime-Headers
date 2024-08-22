// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGM2NLEVENTINBANNER_H
#define SGM2NLEVENTINBANNER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2NLEventInBanner : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int actionType; // ivar: _actionType
@property (retain, nonatomic) NSString *addedAttendeesCount; // ivar: _addedAttendeesCount
@property (retain, nonatomic) NSString *calendarAppUsageLevel; // ivar: _calendarAppUsageLevel
@property (nonatomic) unsigned int confidenceScore; // ivar: _confidenceScore
@property (nonatomic) int dateAdj; // ivar: _dateAdj
@property (nonatomic) unsigned int daysFromStartDate; // ivar: _daysFromStartDate
@property (nonatomic) int duraAdj; // ivar: _duraAdj
@property (retain, nonatomic) NSString *eventType; // ivar: _eventType
@property (nonatomic) int extractionLevel; // ivar: _extractionLevel
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasAddedAttendeesCount;
@property (readonly, nonatomic) BOOL hasCalendarAppUsageLevel;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL hasDateAdj;
@property (nonatomic) BOOL hasDaysFromStartDate;
@property (nonatomic) BOOL hasDuraAdj;
@property (readonly, nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasExtractionLevel;
@property (nonatomic) BOOL hasInterface;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasLanguageID;
@property (nonatomic) BOOL hasLocationAdj;
@property (nonatomic) BOOL hasMailAppUsageLevel;
@property (nonatomic) BOOL hasMessagesAppUsageLevel;
@property (nonatomic) BOOL hasParticipantCount;
@property (nonatomic) BOOL hasSignificantSender;
@property (nonatomic) BOOL hasTitleAdj;
@property (nonatomic) BOOL hasTitleSource;
@property (nonatomic) BOOL hasUsedBubblesCount;
@property (nonatomic) int interface; // ivar: _interface
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *languageID; // ivar: _languageID
@property (nonatomic) int locationAdj; // ivar: _locationAdj
@property (nonatomic) int mailAppUsageLevel; // ivar: _mailAppUsageLevel
@property (nonatomic) int messagesAppUsageLevel; // ivar: _messagesAppUsageLevel
@property (nonatomic) unsigned int participantCount; // ivar: _participantCount
@property (nonatomic) int significantSender; // ivar: _significantSender
@property (nonatomic) int titleAdj; // ivar: _titleAdj
@property (nonatomic) int titleSource; // ivar: _titleSource
@property (nonatomic) unsigned int usedBubblesCount; // ivar: _usedBubblesCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateAdjAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)duraAdjAsString:(int)arg0 ;
-(id)extractionLevelAsString:(int)arg0 ;
-(id)interfaceAsString:(int)arg0 ;
-(id)locationAdjAsString:(int)arg0 ;
-(id)mailAppUsageLevelAsString:(int)arg0 ;
-(id)messagesAppUsageLevelAsString:(int)arg0 ;
-(id)significantSenderAsString:(int)arg0 ;
-(id)titleAdjAsString:(int)arg0 ;
-(id)titleSourceAsString:(int)arg0 ;
-(int)StringAsActionType:(id)arg0 ;
-(int)StringAsDateAdj:(id)arg0 ;
-(int)StringAsDuraAdj:(id)arg0 ;
-(int)StringAsExtractionLevel:(id)arg0 ;
-(int)StringAsInterface:(id)arg0 ;
-(int)StringAsLocationAdj:(id)arg0 ;
-(int)StringAsMailAppUsageLevel:(id)arg0 ;
-(int)StringAsMessagesAppUsageLevel:(id)arg0 ;
-(int)StringAsSignificantSender:(id)arg0 ;
-(int)StringAsTitleAdj:(id)arg0 ;
-(int)StringAsTitleSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif