// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLHISTORYGROUP_H
#define SCLHISTORYGROUP_H

@class NSCalendar, NSMutableArray, NSDate;

#import <Foundation/Foundation.h>

#import "SCLSchedule.h"

@interface SCLHistoryGroup : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy, nonatomic) SCLSchedule *effectiveSchedule; // ivar: _effectiveSchedule
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (readonly, nonatomic) NSDate *referenceDate; // ivar: _referenceDate


+(id)historyGroupsByPrioritizingSchedule:(id)arg0 forDate:(id)arg1 inCalendar:(id)arg2 items:(id)arg3 ;
-(BOOL)canContainUnlockHistoryItem:(id)arg0 ;
-(id)initWithEffectiveSchedule:(id)arg0 calendar:(id)arg1 referenceDate:(id)arg2 ;


@end


#endif