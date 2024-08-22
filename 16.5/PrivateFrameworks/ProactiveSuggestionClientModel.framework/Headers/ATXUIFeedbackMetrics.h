// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUIFEEDBACKMETRICS_H
#define ATXUIFEEDBACKMETRICS_H


#import <Foundation/Foundation.h>


@interface ATXUIFeedbackMetrics : NSObject

@property (nonatomic) NSUInteger engagementCount; // ivar: _engagementCount
@property (readonly, nonatomic) CGFloat engagementRate;
@property (nonatomic) NSUInteger impressionCount; // ivar: _impressionCount
@property (nonatomic) NSUInteger rejectionCount; // ivar: _rejectionCount
@property (readonly, nonatomic) CGFloat rejectionRate;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUIFeedbackMetrics:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif