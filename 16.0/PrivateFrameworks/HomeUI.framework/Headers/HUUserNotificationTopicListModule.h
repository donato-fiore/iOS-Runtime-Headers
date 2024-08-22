// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUUSERNOTIFICATIONTOPICLISTMODULE_H
#define HUUSERNOTIFICATIONTOPICLISTMODULE_H

@class HFItemModule, HFItem, HMHome, HFUserNotificationServiceTopicItemProvider, HFStaticItemProvider;



@interface HUUserNotificationTopicListModule : HFItemModule

@property (retain, nonatomic) HFItem *bridgesItem; // ivar: _bridgesItem
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFItem *networkRoutersListItem; // ivar: _networkRoutersListItem
@property (readonly, nonatomic) HFUserNotificationServiceTopicItemProvider *notificationTopicItemProvider; // ivar: _notificationTopicItemProvider
@property (readonly, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider


+(id)sectionID;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemProviders;
-(id)topicForItem:(id)arg0 ;
-(void)_buildItemProviders;


@end


#endif