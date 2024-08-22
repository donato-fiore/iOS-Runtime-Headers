// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHTIMEDOMAINBUILDINGHELPER_H
#define PGGRAPHTIMEDOMAINBUILDINGHELPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGGraphTimeDomainBuildingHelper : NSObject {
    PGGraph *_graph;
    NSMutableDictionary *_calendarUnitNodeByValueByUnit;
    NSMutableDictionary *_seasonNodeBySeasonName;
    NSMutableDictionary *_dayOfWeekNodeByDayOfWeek;
}




-(id)calendarUnitNodeForCalendarUnit:(NSUInteger)arg0 value:(NSInteger)arg1 ;
-(id)dayOfWeekNodeForDayOfWeek:(NSInteger)arg0 ;
-(id)description;
-(id)initWithGraph:(id)arg0 ;
-(id)seasonNodeForSeasonName:(id)arg0 ;


@end


#endif