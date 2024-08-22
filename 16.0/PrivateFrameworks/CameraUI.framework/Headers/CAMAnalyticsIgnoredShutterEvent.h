// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMANALYTICSIGNOREDSHUTTEREVENT_H
#define CAMANALYTICSIGNOREDSHUTTEREVENT_H



#import "CAMAnalyticsEvent.h"

@interface CAMAnalyticsIgnoredShutterEvent : CAMAnalyticsEvent



-(id)_timeSinceLastPressRangeStringForMilliseconds:(NSInteger)arg0 ;
-(id)eventName;
-(id)initWithReasons:(NSUInteger)arg0 timeSinceLastPress:(CGFloat)arg1 dynamicShutterEnabled:(BOOL)arg2 responsiveShutterEnabled:(BOOL)arg3 ;


@end


#endif