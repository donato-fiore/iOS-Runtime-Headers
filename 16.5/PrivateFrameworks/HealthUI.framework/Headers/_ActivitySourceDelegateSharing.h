// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ACTIVITYSOURCEDELEGATESHARING_H
#define _ACTIVITYSOURCEDELEGATESHARING_H

@class ActivitySourceDelegate, NSCalendar, NSDictionary;



@interface _ActivitySourceDelegateSharing : ActivitySourceDelegate

@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSDictionary *timescopeToSummariesTable; // ivar: _timescopeToSummariesTable


-(id)_filterSummaries:(id)arg0 dateRange:(id)arg1 ;
-(id)activitySummariesForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)initWithTimescopeToSummariesTable:(id)arg0 activityValue:(NSInteger)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3 calendar:(id)arg4 ;
-(void)setUpdateDelegate:(id)arg0 ;


@end


#endif