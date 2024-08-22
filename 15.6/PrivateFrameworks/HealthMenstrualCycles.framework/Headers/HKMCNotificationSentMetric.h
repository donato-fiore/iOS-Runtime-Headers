// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMCNOTIFICATIONSENTMETRIC_H
#define HKMCNOTIFICATIONSENTMETRIC_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface HKMCNotificationSentMetric : NSObject

@property (retain, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (nonatomic) NSInteger numberOfDaysBeforePredictionEnd; // ivar: _numberOfDaysBeforePredictionEnd
@property (nonatomic) NSInteger numberOfDaysShiftedForFertileWindow; // ivar: _numberOfDaysShiftedForFertileWindow


+(id)eventName;
-(id)description;
-(id)initWithCategory:(id)arg0 ;
-(id)initWithCategory:(id)arg0 numberOfDaysShiftedForFertileWindow:(NSInteger)arg1 numberOfDaysBeforePredictionEnd:(NSInteger)arg2 ;


@end


#endif