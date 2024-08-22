// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPANALYTICSSLEEPSCHEDULECHANGEINFO_H
#define HKSPANALYTICSSLEEPSCHEDULECHANGEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKSPAnalyticsSleepScheduleChangeInfo : NSObject

@property (readonly, nonatomic) NSString *activePairedWatchProductType; // ivar: _activePairedWatchProductType
@property (readonly, nonatomic) NSUInteger application; // ivar: _application
@property (readonly, nonatomic) BOOL isSleepTrackingEnabled; // ivar: _isSleepTrackingEnabled


-(id)initWithApplication:(NSUInteger)arg0 activePairedWatchProductType:(id)arg1 isSleepTrackingEnabled:(BOOL)arg2 ;


@end


#endif