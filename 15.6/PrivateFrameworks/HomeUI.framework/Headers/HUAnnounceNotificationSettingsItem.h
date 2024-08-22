// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUANNOUNCENOTIFICATIONSETTINGSITEM_H
#define HUANNOUNCENOTIFICATIONSETTINGSITEM_H

@class HFItem, HMUser;



@interface HUAnnounceNotificationSettingsItem : HFItem

@property (readonly, nonatomic) NSUInteger notificationMode; // ivar: _notificationMode
@property (readonly, nonatomic) NSUInteger sortOrder; // ivar: _sortOrder
@property (readonly, nonatomic) HMUser *user; // ivar: _user


+(NSUInteger)sortOrderForMode:(NSUInteger)arg0 ;
-(id)_notificationModeToString:(NSUInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithNotificationMode:(NSUInteger)arg0 user:(id)arg1 ;


@end


#endif