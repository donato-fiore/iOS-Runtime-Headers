// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSDISCOVERTABCONTENTVIEWEDEVENT_H
#define HFANALYTICSDISCOVERTABCONTENTVIEWEDEVENT_H

@class NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsDiscoverTabContentViewedEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *contentID; // ivar: _contentID
@property (retain, nonatomic) NSString *locale; // ivar: _locale


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif