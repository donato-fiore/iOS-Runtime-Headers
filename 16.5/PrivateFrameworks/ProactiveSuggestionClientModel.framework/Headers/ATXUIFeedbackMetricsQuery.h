// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUIFEEDBACKMETRICSQUERY_H
#define ATXUIFEEDBACKMETRICSQUERY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ATXUIFeedbackMetricsQuery : NSObject

@property (nonatomic) NSInteger clientModelType; // ivar: _clientModelType
@property (nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUIFeedbackMetricsQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;


@end


#endif