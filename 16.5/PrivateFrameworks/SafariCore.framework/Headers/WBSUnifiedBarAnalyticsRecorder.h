// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSUNIFIEDBARANALYTICSRECORDER_H
#define WBSUNIFIEDBARANALYTICSRECORDER_H

@protocol WBSUnifiedBarAnalyticsRecorderDelegate;

#import <Foundation/Foundation.h>


@interface WBSUnifiedBarAnalyticsRecorder : NSObject

@property (weak, nonatomic) NSObject<WBSUnifiedBarAnalyticsRecorderDelegate> *delegate; // ivar: _delegate


-(void)_reportAnalytics;
-(void)schedulePeriodicReport;


@end


#endif