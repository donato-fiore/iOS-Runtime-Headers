// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADSTATSSHAREDCALENDARS_H
#define CADSTATSSHAREDCALENDARS_H

@class NSMutableDictionary;


#import "CADStatCollector.h"

@interface CADStatsSharedCalendars : CADStatCollector {
    NSMutableDictionary *calendarInfos;
}




+(id)eventName;
-(BOOL)wantsCalendars;
-(id)eventDictionaries;
-(void)prepareWithContext:(id)arg0 ;
-(void)processCalendars:(id)arg0 inStore:(*void)arg1 ;


@end


#endif