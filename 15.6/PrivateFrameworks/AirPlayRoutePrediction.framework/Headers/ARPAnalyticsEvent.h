// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPANALYTICSEVENT_H
#define ARPANALYTICSEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ARPAnalyticsEvent : NSObject

@property (copy, nonatomic) NSString *actualDevice; // ivar: _actualDevice
@property (copy, nonatomic) NSString *correction; // ivar: _correction
@property (copy, nonatomic) NSString *correctionTiming; // ivar: _correctionTiming
@property (copy, nonatomic) NSString *failure; // ivar: _failure
@property (nonatomic) NSUInteger numberOfMicrolocations; // ivar: _numberOfMicrolocations
@property (copy, nonatomic) NSString *predictedDevice; // ivar: _predictedDevice
@property (copy, nonatomic) NSString *prediction; // ivar: _prediction
@property (nonatomic) BOOL predictionCorrect; // ivar: _predictionCorrect
@property (copy, nonatomic) NSString *predictionReason; // ivar: _predictionReason
@property (copy, nonatomic) NSString *suppressionReason; // ivar: _suppressionReason


+(id)feedbackEventsFromAppUsageEvents:(id)arg0 playingEvents:(id)arg1 microLocationEvents:(id)arg2 feedbackEvents:(id)arg3 ;
-(id)analyticsDictionary;
-(id)description;
-(id)init;


@end


#endif