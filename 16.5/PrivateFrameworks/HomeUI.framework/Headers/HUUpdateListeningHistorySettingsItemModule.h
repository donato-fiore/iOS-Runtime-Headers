// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUUPDATELISTENINGHISTORYSETTINGSITEMMODULE_H
#define HUUPDATELISTENINGHISTORYSETTINGSITEMMODULE_H

@class HFItemModule, HMHome, HFItemProvider, HMUser;



@interface HUUpdateListeningHistorySettingsItemModule : HFItemModule

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFItemProvider *mediaDeviceItemProvider; // ivar: _mediaDeviceItemProvider
@property (retain, nonatomic) HFItemProvider *otherDeviceItemProvider; // ivar: _otherDeviceItemProvider
@property (readonly, nonatomic) HMUser *user; // ivar: _user


+(id)_ulhDeviceItemComparator:(SEL)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 user:(id)arg2 ;
-(id)itemProviders;
-(id)setUpdateListeningHistorySetting:(BOOL)arg0 forItem:(id)arg1 ;
-(void)_buildItemProviders;


@end


#endif