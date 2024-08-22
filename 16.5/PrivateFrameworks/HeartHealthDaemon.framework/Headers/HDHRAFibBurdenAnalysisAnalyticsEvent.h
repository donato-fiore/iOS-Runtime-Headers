// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRAFIBBURDENANALYSISANALYTICSEVENT_H
#define HDHRAFIBBURDENANALYSISANALYTICSEVENT_H

@class HKHRAFibBurdenAnalysisResult, NSNumber, NSDictionary, NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HDHRAFibBurdenAnalysisAnalyticsEvent : NSObject <HKAnalyticsEvent>

 {
    HKHRAFibBurdenAnalysisResult *_result;
    NSInteger _calculationType;
    NSNumber *_calculationTypeDetails;
    NSInteger _numberOfTachograms;
    NSDictionary *_additionalPayloadFromAlgorithm;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


-(NSInteger)_bucketNumberOfTachogramsFrom:(NSInteger)arg0 ;
-(id)_calculationTypeStringFromCalculationType:(NSInteger)arg0 ;
-(id)initWithResult:(id)arg0 calculationType:(NSInteger)arg1 calculationTypeDetails:(id)arg2 numberOfTachograms:(NSInteger)arg3 additionalPayloadFromAlgorithm:(id)arg4 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif