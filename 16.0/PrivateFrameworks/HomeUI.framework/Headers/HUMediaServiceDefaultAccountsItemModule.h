// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIASERVICEDEFAULTACCOUNTSITEMMODULE_H
#define HUMEDIASERVICEDEFAULTACCOUNTSITEMMODULE_H

@class HFItemModule, NSString, HMHome, NSSet;
@protocol HUMediaServiceItemProviderDelegate;


#import "HUMediaServiceItemProvider.h"

@interface HUMediaServiceDefaultAccountsItemModule : HFItemModule <HUMediaServiceItemProviderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (readonly, nonatomic) HUMediaServiceItemProvider *mediaServiceItemProvider; // ivar: _mediaServiceItemProvider
@property (readonly) Class superclass;


-(BOOL)containsItem:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)updateDefaultAccount:(id)arg0 ;
-(void)mediaServiceItemProviderDidUpdateServices:(id)arg0 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;


@end


#endif