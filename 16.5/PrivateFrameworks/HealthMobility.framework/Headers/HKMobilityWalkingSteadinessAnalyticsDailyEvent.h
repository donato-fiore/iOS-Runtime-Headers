// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMOBILITYWALKINGSTEADINESSANALYTICSDAILYEVENT_H
#define HKMOBILITYWALKINGSTEADINESSANALYTICSDAILYEVENT_H

@class NSString;
@protocol HKAnalyticsEvent, HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider;

#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessAnalyticsDailyEvent : NSObject <HKAnalyticsEvent>



@property (retain, nonatomic) NSObject<HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


-(id)initWithDataSource:(id)arg0 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif