// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPBRIGHTNESSMETRICDATA_H
#define SBAPPBRIGHTNESSMETRICDATA_H

@class NSString;


#import "SBAWDMetricData.h"

@interface SBAppBrightnessMetricData : SBAWDMetricData

@property (copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (nonatomic) NSUInteger brightness; // ivar: _brightness
@property (nonatomic) NSUInteger duration; // ivar: _duration




@end


#endif