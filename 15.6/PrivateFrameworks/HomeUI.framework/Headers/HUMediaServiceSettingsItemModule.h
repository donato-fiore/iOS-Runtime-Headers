// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMEDIASERVICESETTINGSITEMMODULE_H
#define HUMEDIASERVICESETTINGSITEMMODULE_H

@class HFItemModule, NSString, HFStaticItem, HMHome, NSSet;
@protocol HUMediaServiceItemProviderDelegate;


#import "HUMediaServiceItemProvider.h"

@interface HUMediaServiceSettingsItemModule : HFItemModule <HUMediaServiceItemProviderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFStaticItem *defaultAccountsItem; // ivar: _defaultAccountsItem
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (retain, nonatomic) HUMediaServiceItemProvider *mediaServiceItemProvider; // ivar: _mediaServiceItemProvider
@property (readonly) Class superclass;


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(void)_createItemProviders;
-(void)mediaServiceItemProviderDidUpdateServices:(id)arg0 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;


@end


#endif