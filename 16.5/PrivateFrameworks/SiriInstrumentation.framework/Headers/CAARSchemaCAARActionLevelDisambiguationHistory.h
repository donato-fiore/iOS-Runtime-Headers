// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAARSCHEMACAARACTIONLEVELDISAMBIGUATIONHISTORY_H
#define CAARSCHEMACAARACTIONLEVELDISAMBIGUATIONHISTORY_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CAARSchemaCAARActionLevelDisambiguationHistory : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMinutesSinceLastActionDisambiguationForThisAction;
@property (nonatomic) BOOL hasMinutesSinceLastDisambiguationForSameActions;
@property (nonatomic) BOOL hasMinutesSinceLastDisambiguationSameActions;
@property (nonatomic) BOOL hasNumActionDisambiguationsLasTenMinutes;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastTwoMinutes;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastTenMinutes;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastTwoMinutes;
@property (nonatomic) BOOL hasWasActionSelectedInLastDisambiguation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int minutesSinceLastActionDisambiguationForThisAction; // ivar: _minutesSinceLastActionDisambiguationForThisAction
@property (nonatomic) unsigned int minutesSinceLastDisambiguationForSameActions; // ivar: _minutesSinceLastDisambiguationForSameActions
@property (nonatomic) BOOL minutesSinceLastDisambiguationSameActions; // ivar: _minutesSinceLastDisambiguationSameActions
@property (nonatomic) unsigned int numActionDisambiguationsLasTenMinutes; // ivar: _numActionDisambiguationsLasTenMinutes
@property (nonatomic) unsigned int numActionDisambiguationsLastInfinity; // ivar: _numActionDisambiguationsLastInfinity
@property (nonatomic) unsigned int numActionDisambiguationsLastOneDay; // ivar: _numActionDisambiguationsLastOneDay
@property (nonatomic) unsigned int numActionDisambiguationsLastOneHour; // ivar: _numActionDisambiguationsLastOneHour
@property (nonatomic) unsigned int numActionDisambiguationsLastSevenDays; // ivar: _numActionDisambiguationsLastSevenDays
@property (nonatomic) unsigned int numActionDisambiguationsLastSixHours; // ivar: _numActionDisambiguationsLastSixHours
@property (nonatomic) unsigned int numActionDisambiguationsLastTwentyEightDays; // ivar: _numActionDisambiguationsLastTwentyEightDays
@property (nonatomic) unsigned int numActionDisambiguationsLastTwoMinutes; // ivar: _numActionDisambiguationsLastTwoMinutes
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastInfinity; // ivar: _numSelectedActionDisambiguationsLastInfinity
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastOneDay; // ivar: _numSelectedActionDisambiguationsLastOneDay
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastOneHour; // ivar: _numSelectedActionDisambiguationsLastOneHour
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastSevenDays; // ivar: _numSelectedActionDisambiguationsLastSevenDays
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastSixHours; // ivar: _numSelectedActionDisambiguationsLastSixHours
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTenMinutes; // ivar: _numSelectedActionDisambiguationsLastTenMinutes
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTwentyEightDays; // ivar: _numSelectedActionDisambiguationsLastTwentyEightDays
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTwoMinutes; // ivar: _numSelectedActionDisambiguationsLastTwoMinutes
@property (nonatomic) BOOL wasActionSelectedInLastDisambiguation; // ivar: _wasActionSelectedInLastDisambiguation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMinutesSinceLastActionDisambiguationForThisAction;
-(void)deleteMinutesSinceLastDisambiguationForSameActions;
-(void)deleteMinutesSinceLastDisambiguationSameActions;
-(void)deleteNumActionDisambiguationsLasTenMinutes;
-(void)deleteNumActionDisambiguationsLastInfinity;
-(void)deleteNumActionDisambiguationsLastOneDay;
-(void)deleteNumActionDisambiguationsLastOneHour;
-(void)deleteNumActionDisambiguationsLastSevenDays;
-(void)deleteNumActionDisambiguationsLastSixHours;
-(void)deleteNumActionDisambiguationsLastTwentyEightDays;
-(void)deleteNumActionDisambiguationsLastTwoMinutes;
-(void)deleteNumSelectedActionDisambiguationsLastInfinity;
-(void)deleteNumSelectedActionDisambiguationsLastOneDay;
-(void)deleteNumSelectedActionDisambiguationsLastOneHour;
-(void)deleteNumSelectedActionDisambiguationsLastSevenDays;
-(void)deleteNumSelectedActionDisambiguationsLastSixHours;
-(void)deleteNumSelectedActionDisambiguationsLastTenMinutes;
-(void)deleteNumSelectedActionDisambiguationsLastTwentyEightDays;
-(void)deleteNumSelectedActionDisambiguationsLastTwoMinutes;
-(void)deleteWasActionSelectedInLastDisambiguation;
-(void)writeTo:(id)arg0 ;


@end


#endif