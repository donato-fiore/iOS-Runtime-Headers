// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONLOGMETRIC_H
#define HKMEDICATIONLOGMETRIC_H

@class NSNumber, NSDictionary;

#import <Foundation/Foundation.h>

#import "HKMedicationAnalyticsGenericFieldsProvider.h"

@interface HKMedicationLogMetric : NSObject {
    HKMedicationAnalyticsGenericFieldsProvider *_genericDataProvider;
    NSInteger _actions;
    NSInteger _provenance;
    NSInteger _context;
    BOOL _isLoggingMultipleMeds;
    NSNumber *_hoursAgoLoggedForMax;
    NSNumber *_hoursAgoLoggedForMin;
    NSNumber *_hoursFromScheduledTimeLoggedMax;
    NSNumber *_hoursFromScheduledTimeLoggedMin;
    NSNumber *_hoursFromScheduledToTakenOrSkippedMax;
    NSNumber *_hoursFromScheduledToTakenOrSkippedMin;
    NSNumber *_isPartiallyLoggingScheduledMeds;
}


@property (copy, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload


+(id)eventName;
-(id)actionsPayload;
-(id)contextValue;
-(id)description;
-(id)initWithActions:(NSInteger)arg0 provenance:(NSInteger)arg1 context:(NSInteger)arg2 loggingMultipleMeds:(BOOL)arg3 hoursAgoLoggedForMax:(id)arg4 hoursAgoLoggedForMin:(id)arg5 hoursFromScheduledTimeLoggedMax:(id)arg6 hoursFromScheduledTimeLoggedMin:(id)arg7 hoursFromScheduledToTakenOrSkippedMax:(id)arg8 hoursFromScheduledToTakenOrSkippedMin:(id)arg9 isPartiallyLoggingScheduledMeds:(id)arg10 dataSource:(id)arg11 ;
-(id)provenanceValue;


@end


#endif