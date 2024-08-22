// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSACCESSORYSETTINGSVISITEVENT_H
#define HFANALYTICSACCESSORYSETTINGSVISITEVENT_H



#import "HFAnalyticsEvent.h"
#import "HFItem.h"

@interface HFAnalyticsAccessorySettingsVisitEvent : HFAnalyticsEvent

@property (nonatomic) BOOL isHomePod; // ivar: _isHomePod
@property (nonatomic) BOOL isMediaAccessory; // ivar: _isMediaAccessory
@property (retain, nonatomic) HFItem *sourceItem; // ivar: _sourceItem


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif