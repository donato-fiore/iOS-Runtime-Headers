// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCSCHEDULEDANALYSISMETRIC_H
#define HKMCSCHEDULEDANALYSISMETRIC_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface HKMCScheduledAnalysisMetric : NSObject

@property (copy, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (nonatomic) NSInteger timeSuccessful; // ivar: _timeSuccessful


+(id)eventName;
-(id)description;
-(id)initWithTimeSuccessful:(NSInteger)arg0 ;


@end


#endif