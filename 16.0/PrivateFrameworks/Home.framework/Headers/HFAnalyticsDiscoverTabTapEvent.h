// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFANALYTICSDISCOVERTABTAPEVENT_H
#define HFANALYTICSDISCOVERTABTAPEVENT_H

@class NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsDiscoverTabTapEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *tapCount; // ivar: _tapCount


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif