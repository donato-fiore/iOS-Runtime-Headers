// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFUSERNOTIFICATIONSERVICETOPICITEM_H
#define HFUSERNOTIFICATIONSERVICETOPICITEM_H

@class HMHome;


#import "HFItem.h"
#import "HFUserNotificationServiceTopic.h"

@interface HFUserNotificationServiceTopicItem : HFItem

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFUserNotificationServiceTopic *topic; // ivar: _topic


-(id)_notificationModeToString:(NSUInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithHome:(id)arg0 topic:(id)arg1 ;


@end


#endif