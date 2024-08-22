// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODAILYUSESUMMARYUSEEVENT_H
#define GEODAILYUSESUMMARYUSEEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEODailyUseSummaryUseEvent : PBCodable <NSCopying>

 {
    NSString *_usageString;
    int _appType;
    unsigned int _count;
    int _eventType;
    BOOL _usageBool;
    ? _flags;
}


@property (nonatomic) int appType;
@property (nonatomic) unsigned int count;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasAppType;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasUsageBool;
@property (readonly, nonatomic) BOOL hasUsageString;
@property (nonatomic) BOOL usageBool;
@property (retain, nonatomic) NSString *usageString;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsAppType:(id)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif