// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKAFIBBURDENLIFEFACTORLOGGINGINITIATEDANALYTICSEVENT_H
#define HKAFIBBURDENLIFEFACTORLOGGINGINITIATEDANALYTICSEVENT_H

@class HKSampleType, NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HKAFibBurdenLifeFactorLoggingInitiatedAnalyticsEvent : NSObject <HKAnalyticsEvent>

 {
    HKSampleType *_sampleType;
    NSInteger _context;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


-(id)determineFeatureVersionWithHealthDataSource:(id)arg0 ;
-(id)initWithSampleType:(id)arg0 context:(NSInteger)arg1 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif