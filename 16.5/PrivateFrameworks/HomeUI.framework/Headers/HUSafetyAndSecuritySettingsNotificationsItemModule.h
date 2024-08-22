// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSAFETYANDSECURITYSETTINGSNOTIFICATIONSITEMMODULE_H
#define HUSAFETYANDSECURITYSETTINGSNOTIFICATIONSITEMMODULE_H

@class HFItemModule, HMHome, HFItemProvider;



@interface HUSafetyAndSecuritySettingsNotificationsItemModule : HFItemModule

@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFItemProvider *safetyAndSecurityDeviceItemProvider; // ivar: _safetyAndSecurityDeviceItemProvider


+(id)_safetyAndSecurityDeviceItemComparator:(SEL)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemProviders;
-(void)_buildItemProviders;


@end


#endif