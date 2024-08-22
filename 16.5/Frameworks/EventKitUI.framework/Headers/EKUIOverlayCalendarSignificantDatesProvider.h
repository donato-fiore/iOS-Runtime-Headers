// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIOVERLAYCALENDARSIGNIFICANTDATESPROVIDER_H
#define EKUIOVERLAYCALENDARSIGNIFICANTDATESPROVIDER_H

@class CalDateRange, NSDictionary, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject {
    CalDateRange *_cachedDateRange;
    CalDateRange *_cachedCentralYear;
    NSDictionary *_cachedFirstsOfMonths;
    NSDictionary *_cachedFirstsOfYears;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _currentGeneration;
    NSDate *_currentRequest;
    BOOL _loadPending;
}


@property (copy, nonatomic) id *significantDatesChangedHandler; // ivar: _significantDatesChangedHandler


-(id)firstOfOverlayMonthsForCalendarMonth:(id)arg0 ;
-(id)firstOfOverlayYearsForCalendarMonth:(id)arg0 ;
-(id)init;
-(void)_invalidateCaches;
-(void)_load;
-(void)_requestDate:(id)arg0 ;
-(void)dealloc;


@end


#endif