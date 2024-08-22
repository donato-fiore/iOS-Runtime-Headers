// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMICROLOCATIONVISITDUETEVENT_H
#define ATXMICROLOCATIONVISITDUETEVENT_H

@class NSUUID, NSDictionary;


#import "ATXDuetEvent.h"

@interface ATXMicrolocationVisitDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSUUID *dominantMicrolocationUUID; // ivar: _dominantMicrolocationUUID
@property (readonly, nonatomic) NSDictionary *microlocationUUIDProbabilities; // ivar: _microlocationUUIDProbabilities


-(id)description;
-(id)identifier;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(id)initWithDominantMicrolocationUUID:(id)arg0 microlocationProbabilities:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;


@end


#endif