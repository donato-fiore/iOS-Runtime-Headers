// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHTIMEDOMAINBUILDINGHELPER_H
#define PGGRAPHTIMEDOMAINBUILDINGHELPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGGraphTimeDomainBuildingHelper : NSObject

@property (readonly, nonatomic) NSMutableDictionary *calendarUnitNodeByValueByUnit; // ivar: _calendarUnitNodeByValueByUnit
@property (readonly, nonatomic) NSMutableDictionary *dayOfWeekNodeByDayOfWeek; // ivar: _dayOfWeekNodeByDayOfWeek
@property (weak, nonatomic) PGGraph *graph; // ivar: _graph
@property (readonly, nonatomic) NSMutableDictionary *seasonNodeBySeasonName; // ivar: _seasonNodeBySeasonName


-(id)calendarUnitNodeForCalendarUnit:(NSUInteger)arg0 value:(NSInteger)arg1 ;
-(id)dayOfWeekNodeForDayOfWeek:(NSInteger)arg0 ;
-(id)description;
-(id)initWithGraph:(id)arg0 ;
-(id)seasonNodeForSeasonName:(id)arg0 ;


@end


#endif