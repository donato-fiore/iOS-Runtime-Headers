// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALSUBSCRIBEDCALENDAREXTERNALREPRESENTATION_H
#define CALSUBSCRIBEDCALENDAREXTERNALREPRESENTATION_H


#import <Foundation/Foundation.h>


@interface CalSubscribedCalendarExternalRepresentation : NSObject



+(NSUInteger)subscribedCalendarRefreshFlagsFromDictionary:(id)arg0 ;
+(id)dictionaryWithExternalRepresentationData:(id)arg0 ;
+(id)externalRepresentationDataWithDictionary:(id)arg0 ;
+(id)lastHolidayLanguageFromDictionary:(id)arg0 ;
+(id)lastHolidayRegionFromDictionary:(id)arg0 ;
+(id)logHandle;
+(int)migrationVersionFromDictionary:(id)arg0 ;
+(void)setLastHolidayLanguage:(id)arg0 inDictionary:(id)arg1 ;
+(void)setLastHolidayRegion:(id)arg0 inDictionary:(id)arg1 ;
+(void)setMigrationVersion:(int)arg0 inDictionary:(id)arg1 ;
+(void)setSubscribedCalendarRefreshFlags:(NSUInteger)arg0 inDictionary:(id)arg1 ;


@end


#endif