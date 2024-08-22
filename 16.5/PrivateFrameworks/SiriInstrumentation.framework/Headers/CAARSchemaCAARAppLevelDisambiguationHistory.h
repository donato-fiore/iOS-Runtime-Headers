// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAARSCHEMACAARAPPLEVELDISAMBIGUATIONHISTORY_H
#define CAARSCHEMACAARAPPLEVELDISAMBIGUATIONHISTORY_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CAARSchemaCAARAppLevelDisambiguationHistory : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMinutesSinceLastDisambiguationSameApps;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastTenMinutes;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumAppDisambiguationsLastTwoMinutes;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastTenMinutes;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumSelectedAppDisambiguationsTwoMinutes;
@property (nonatomic) BOOL hasWasAppSelectedInLastDisambiguation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int minutesSinceLastDisambiguationSameApps; // ivar: _minutesSinceLastDisambiguationSameApps
@property (nonatomic) unsigned int numAppDisambiguationsLastInfinity; // ivar: _numAppDisambiguationsLastInfinity
@property (nonatomic) unsigned int numAppDisambiguationsLastOneDay; // ivar: _numAppDisambiguationsLastOneDay
@property (nonatomic) unsigned int numAppDisambiguationsLastOneHour; // ivar: _numAppDisambiguationsLastOneHour
@property (nonatomic) unsigned int numAppDisambiguationsLastSevenDays; // ivar: _numAppDisambiguationsLastSevenDays
@property (nonatomic) unsigned int numAppDisambiguationsLastSixHours; // ivar: _numAppDisambiguationsLastSixHours
@property (nonatomic) unsigned int numAppDisambiguationsLastTenMinutes; // ivar: _numAppDisambiguationsLastTenMinutes
@property (nonatomic) unsigned int numAppDisambiguationsLastTwentyEightDays; // ivar: _numAppDisambiguationsLastTwentyEightDays
@property (nonatomic) unsigned int numAppDisambiguationsLastTwoMinutes; // ivar: _numAppDisambiguationsLastTwoMinutes
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastInfinity; // ivar: _numSelectedAppDisambiguationsLastInfinity
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastOneDay; // ivar: _numSelectedAppDisambiguationsLastOneDay
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastOneHour; // ivar: _numSelectedAppDisambiguationsLastOneHour
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastSevenDays; // ivar: _numSelectedAppDisambiguationsLastSevenDays
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastSixHours; // ivar: _numSelectedAppDisambiguationsLastSixHours
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastTenMinutes; // ivar: _numSelectedAppDisambiguationsLastTenMinutes
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastTwentyEightDays; // ivar: _numSelectedAppDisambiguationsLastTwentyEightDays
@property (nonatomic) unsigned int numSelectedAppDisambiguationsTwoMinutes; // ivar: _numSelectedAppDisambiguationsTwoMinutes
@property (nonatomic) BOOL wasAppSelectedInLastDisambiguation; // ivar: _wasAppSelectedInLastDisambiguation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMinutesSinceLastDisambiguationSameApps;
-(void)deleteNumAppDisambiguationsLastInfinity;
-(void)deleteNumAppDisambiguationsLastOneDay;
-(void)deleteNumAppDisambiguationsLastOneHour;
-(void)deleteNumAppDisambiguationsLastSevenDays;
-(void)deleteNumAppDisambiguationsLastSixHours;
-(void)deleteNumAppDisambiguationsLastTenMinutes;
-(void)deleteNumAppDisambiguationsLastTwentyEightDays;
-(void)deleteNumAppDisambiguationsLastTwoMinutes;
-(void)deleteNumSelectedAppDisambiguationsLastInfinity;
-(void)deleteNumSelectedAppDisambiguationsLastOneDay;
-(void)deleteNumSelectedAppDisambiguationsLastOneHour;
-(void)deleteNumSelectedAppDisambiguationsLastSevenDays;
-(void)deleteNumSelectedAppDisambiguationsLastSixHours;
-(void)deleteNumSelectedAppDisambiguationsLastTenMinutes;
-(void)deleteNumSelectedAppDisambiguationsLastTwentyEightDays;
-(void)deleteNumSelectedAppDisambiguationsTwoMinutes;
-(void)deleteWasAppSelectedInLastDisambiguation;
-(void)writeTo:(id)arg0 ;


@end


#endif