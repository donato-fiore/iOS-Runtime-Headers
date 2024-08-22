// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSAPPFOREGROUNDDURATIONEVENT_H
#define HFANALYTICSAPPFOREGROUNDDURATIONEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsAppForegroundDurationEvent : HFAnalyticsEvent

@property (nonatomic) NSNumber *foregroundDuration; // ivar: _foregroundDuration
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) BOOL userHasAccessories; // ivar: _userHasAccessories


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif