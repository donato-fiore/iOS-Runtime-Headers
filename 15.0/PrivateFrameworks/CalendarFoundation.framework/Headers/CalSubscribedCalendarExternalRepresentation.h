// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
+(void)setLastHolidayLanguage:(id)arg0 inDictionary:(id)arg1 ;
+(void)setLastHolidayRegion:(id)arg0 inDictionary:(id)arg1 ;
+(void)setSubscribedCalendarRefreshFlags:(NSUInteger)arg0 inDictionary:(id)arg1 ;


@end


#endif