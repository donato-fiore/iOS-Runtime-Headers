// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCNOTIFICATIONSENTMETRIC_H
#define HKMCNOTIFICATIONSENTMETRIC_H

@class NSNumber, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface HKMCNotificationSentMetric : NSObject

@property (retain, nonatomic) NSNumber *areHealthNotificationsAuthorized; // ivar: _areHealthNotificationsAuthorized
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (retain, nonatomic) NSNumber *internalLiveOnCycleFactorOverrideEnabled; // ivar: _internalLiveOnCycleFactorOverrideEnabled
@property (retain, nonatomic) NSNumber *numberOfDaysOffsetFromFertileWindowEnd; // ivar: _numberOfDaysOffsetFromFertileWindowEnd
@property (retain, nonatomic) NSNumber *numberOfDaysShiftedForFertileWindow; // ivar: _numberOfDaysShiftedForFertileWindow
@property (retain, nonatomic) NSNumber *numberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification; // ivar: _numberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification


+(id)eventName;
-(id)description;
-(id)initWithCategory:(id)arg0 areHealthNotificationsAuthorized:(id)arg1 ;


@end


#endif