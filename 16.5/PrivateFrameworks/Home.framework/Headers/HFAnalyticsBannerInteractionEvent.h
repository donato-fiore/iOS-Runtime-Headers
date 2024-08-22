// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSBANNERINTERACTIONEVENT_H
#define HFANALYTICSBANNERINTERACTIONEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsBannerInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *hiddenBannerCount; // ivar: _hiddenBannerCount
@property (retain, nonatomic) NSString *itemClassName; // ivar: _itemClassName


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif