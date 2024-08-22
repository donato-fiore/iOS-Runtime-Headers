// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSSIDEBARINTERACTIONEVENT_H
#define HFANALYTICSSIDEBARINTERACTIONEVENT_H

@class NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsSideBarInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *deviceOrientationStr; // ivar: _deviceOrientationStr
@property (retain, nonatomic) NSString *itemClassName; // ivar: _itemClassName


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif