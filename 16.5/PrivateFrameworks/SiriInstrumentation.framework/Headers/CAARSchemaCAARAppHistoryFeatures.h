// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAARSCHEMACAARAPPHISTORYFEATURES_H
#define CAARSCHEMACAARAPPHISTORYFEATURES_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CAARSchemaCAARAppHistoryFeatures : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNumAppLaunchesLastInfinity;
@property (nonatomic) BOOL hasNumAppLaunchesLastOneDay;
@property (nonatomic) BOOL hasNumAppLaunchesLastOneHour;
@property (nonatomic) BOOL hasNumAppLaunchesLastSevenDays;
@property (nonatomic) BOOL hasNumAppLaunchesLastSixHours;
@property (nonatomic) BOOL hasNumAppLaunchesLastTenMinutes;
@property (nonatomic) BOOL hasNumAppLaunchesLastTwentyEightDays;
@property (nonatomic) BOOL hasNumAppLaunchesLastTwoMinutes;
@property (nonatomic) BOOL hasNumMinutesSinceAppInstalled;
@property (nonatomic) BOOL hasNumMinutesSinceAppLastLaunched;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numAppLaunchesLastInfinity; // ivar: _numAppLaunchesLastInfinity
@property (nonatomic) unsigned int numAppLaunchesLastOneDay; // ivar: _numAppLaunchesLastOneDay
@property (nonatomic) unsigned int numAppLaunchesLastOneHour; // ivar: _numAppLaunchesLastOneHour
@property (nonatomic) unsigned int numAppLaunchesLastSevenDays; // ivar: _numAppLaunchesLastSevenDays
@property (nonatomic) unsigned int numAppLaunchesLastSixHours; // ivar: _numAppLaunchesLastSixHours
@property (nonatomic) unsigned int numAppLaunchesLastTenMinutes; // ivar: _numAppLaunchesLastTenMinutes
@property (nonatomic) unsigned int numAppLaunchesLastTwentyEightDays; // ivar: _numAppLaunchesLastTwentyEightDays
@property (nonatomic) unsigned int numAppLaunchesLastTwoMinutes; // ivar: _numAppLaunchesLastTwoMinutes
@property (nonatomic) unsigned int numMinutesSinceAppInstalled; // ivar: _numMinutesSinceAppInstalled
@property (nonatomic) unsigned int numMinutesSinceAppLastLaunched; // ivar: _numMinutesSinceAppLastLaunched


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteNumAppLaunchesLastInfinity;
-(void)deleteNumAppLaunchesLastOneDay;
-(void)deleteNumAppLaunchesLastOneHour;
-(void)deleteNumAppLaunchesLastSevenDays;
-(void)deleteNumAppLaunchesLastSixHours;
-(void)deleteNumAppLaunchesLastTenMinutes;
-(void)deleteNumAppLaunchesLastTwentyEightDays;
-(void)deleteNumAppLaunchesLastTwoMinutes;
-(void)deleteNumMinutesSinceAppInstalled;
-(void)deleteNumMinutesSinceAppLastLaunched;
-(void)writeTo:(id)arg0 ;


@end


#endif