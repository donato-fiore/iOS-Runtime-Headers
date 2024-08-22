// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPDEPLOYMENTRULECONFIG_H
#define UARPDEPLOYMENTRULECONFIG_H

@class NSArray, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface UARPDeploymentRuleConfig : NSObject

@property (copy) NSArray *countryList; // ivar: _countryList
@property (copy) NSNumber *deploymentLimit; // ivar: _deploymentLimit
@property (copy) NSDate *goLiveDate; // ivar: _goLiveDate
@property (copy) NSNumber *rampPeriod; // ivar: _rampPeriod




@end


#endif