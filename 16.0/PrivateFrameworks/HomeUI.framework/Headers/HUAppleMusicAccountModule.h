// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUAPPLEMUSICACCOUNTMODULE_H
#define HUAPPLEMUSICACCOUNTMODULE_H

@class HFItemModule, HFStaticItemProvider, NSString;
@protocol HFAppleMusicAccountObserver, HFAccessoryObserver, HFMediaProfileContainer;


#import "HUAppleMusicAccountItemProvider.h"
#import "HUAppleMusicItem.h"

@interface HUAppleMusicAccountModule : HFItemModule <HFAppleMusicAccountObserver, HFAccessoryObserver>



@property (readonly, nonatomic) HFStaticItemProvider *appleMusicAccountActionItemProvider; // ivar: _appleMusicAccountActionItemProvider
@property (readonly, nonatomic) HUAppleMusicAccountItemProvider *appleMusicAccountItemProvider; // ivar: _appleMusicAccountItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *explicitAccountSignedInMessage;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUAppleMusicItem *loggedInUsernameItem; // ivar: _loggedInUsernameItem
@property (readonly, nonatomic) HUAppleMusicItem *loginItem; // ivar: _loginItem
@property (readonly, nonatomic) HUAppleMusicItem *logoutItem; // ivar: _logoutItem
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly, nonatomic) NSUInteger numberOfKnownAccounts;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (copy, nonatomic) id *stateChangeObserver; // ivar: _stateChangeObserver
@property (readonly) Class superclass;


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithMediaProfileContainer:(id)arg0 itemUpdater:(id)arg1 ;
-(id)itemProviders;
-(id)signInMessage:(BOOL)arg0 ;
-(void)accessoryDidUpdatePreferredMediaUser:(id)arg0 ;
-(void)dispatcher:(id)arg0 appleMusicAccountsDidUpdate:(id)arg1 ;


@end


#endif