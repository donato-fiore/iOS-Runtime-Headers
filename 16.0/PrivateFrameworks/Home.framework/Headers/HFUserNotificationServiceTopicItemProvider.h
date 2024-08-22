// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFUSERNOTIFICATIONSERVICETOPICITEMPROVIDER_H
#define HFUSERNOTIFICATIONSERVICETOPICITEMPROVIDER_H

@class HMHome, NSSet;


#import "HFItemProvider.h"

@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (copy, nonatomic) NSSet *topicItems; // ivar: _topicItems


-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif