// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLOCKSCREENEDITMETRIC_H
#define ATXLOCKSCREENEDITMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXLockscreenEditMetric : ATXCoreAnalyticsMetric

@property (nonatomic) BOOL didLockscreenHaveWidgetsBeforeEdit; // ivar: _didLockscreenHaveWidgetsBeforeEdit
@property (nonatomic) NSInteger duration; // ivar: _duration
@property (copy, nonatomic) NSString *entryPoint; // ivar: _entryPoint
@property (nonatomic) BOOL isNew; // ivar: _isNew
@property (copy, nonatomic) NSString *lockscreenId; // ivar: _lockscreenId
@property (copy, nonatomic) NSString *outcome; // ivar: _outcome
@property (nonatomic) NSUInteger secondsSinceLastEdit; // ivar: _secondsSinceLastEdit
@property (nonatomic) BOOL userChangedColor; // ivar: _userChangedColor
@property (nonatomic) BOOL userChangedFont; // ivar: _userChangedFont
@property (nonatomic) BOOL userChangedNumberingSystem; // ivar: _userChangedNumberingSystem
@property (nonatomic) BOOL userChangedPosterContent; // ivar: _userChangedPosterContent
@property (nonatomic) BOOL userChangedWidgets; // ivar: _userChangedWidgets


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif