// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODESETUPEXPERIENCEMETRICS_H
#define ATXMODESETUPEXPERIENCEMETRICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXModeSetupExperienceMetrics : NSObject

@property (copy, nonatomic) NSString *modeSemanticType; // ivar: _modeSemanticType
@property (nonatomic) NSInteger onboardingOutcome; // ivar: _onboardingOutcome


-(id)coreAnalyticsDictionary;
-(id)description;
-(id)metricName;
-(id)outcomeToString:(NSInteger)arg0 ;
-(void)sendToCoreAnalytics;


@end


#endif