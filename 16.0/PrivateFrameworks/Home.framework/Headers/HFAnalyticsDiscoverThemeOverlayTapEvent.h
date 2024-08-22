// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFANALYTICSDISCOVERTHEMEOVERLAYTAPEVENT_H
#define HFANALYTICSDISCOVERTHEMEOVERLAYTAPEVENT_H

@class NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsDiscoverThemeOverlayTapEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *themeType; // ivar: _themeType


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif