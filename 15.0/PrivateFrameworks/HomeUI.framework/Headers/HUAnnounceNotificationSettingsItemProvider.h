// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUANNOUNCENOTIFICATIONSETTINGSITEMPROVIDER_H
#define HUANNOUNCENOTIFICATIONSETTINGSITEMPROVIDER_H

@class HFItemProvider, HMHome, NSMutableSet, HMUser;



@interface HUAnnounceNotificationSettingsItemProvider : HFItemProvider

@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSMutableSet *items; // ivar: _items
@property (readonly, nonatomic) HMUser *user;


-(id)_notificationModes;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)reloadItems;


@end


#endif