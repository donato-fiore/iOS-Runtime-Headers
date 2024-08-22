// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULOCKCATEGORYSETTINGSITEMMANAGER_H
#define HULOCKCATEGORYSETTINGSITEMMANAGER_H

@class HFItemManager, NSString, HFStaticItem, HFServiceItemProvider, HMHome, HFPinCodeManager, HFStaticItemProvider, HFUserNotificationServiceTopic, HFUserItemProvider;
@protocol HFPinCodeManagerObserver;



@interface HULockCategorySettingsItemManager : HFItemManager <HFPinCodeManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFStaticItem *guestsItem; // ivar: _guestsItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFServiceItemProvider *lockServiceItemProvider; // ivar: _lockServiceItemProvider
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) HFUserNotificationServiceTopic *topic; // ivar: _topic
@property (retain, nonatomic) HFUserItemProvider *userItemProvider; // ivar: _userItemProvider


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 topic:(id)arg1 home:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 topic:(id)arg1 pinCodeManager:(id)arg2 home:(id)arg3 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif