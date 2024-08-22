// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSCOREANALYTICSMETRICHANDLER_H
#define BCSCOREANALYTICSMETRICHANDLER_H

@class NSString;
@protocol BCSMetricHandler;

#import <Foundation/Foundation.h>


@interface BCSCoreAnalyticsMetricHandler : NSObject <BCSMetricHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleSubmittedMetric:(id)arg0 ;


@end


#endif