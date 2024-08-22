// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUUSERNOTIFICATIONTOPICSERVICELISTMODULE_H
#define HUUSERNOTIFICATIONTOPICSERVICELISTMODULE_H

@class HFItemModule, HMHome, HFUserNotificationServiceTopic, HFTransformItemProvider;



@interface HUUserNotificationTopicServiceListModule : HFItemModule

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFUserNotificationServiceTopic *topic; // ivar: _topic
@property (readonly, nonatomic) HFTransformItemProvider *transformCameraItemProvider; // ivar: _transformCameraItemProvider
@property (readonly, nonatomic) HFTransformItemProvider *transformServiceItemProvider; // ivar: _transformServiceItemProvider


+(id)_createTransformItemForItem:(id)arg0 notificationSettingsProvider:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 topic:(id)arg2 ;
-(id)itemProviders;
-(id)serviceLikeItemForItem:(id)arg0 ;
-(void)_buildItemProviders;


@end


#endif