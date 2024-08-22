// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSETTINGSFRIENDLISTACCESS_H
#define GKSETTINGSFRIENDLISTACCESS_H

@class PSListController, NSDictionary, NSArray, PSSpecifier, GKLocalPlayer;



@interface GKSettingsFriendListAccess : PSListController

@property (retain, nonatomic) NSDictionary *gameSettings; // ivar: _gameSettings
@property (retain, nonatomic) NSArray *games; // ivar: _games
@property (weak, nonatomic) PSSpecifier *globalAccessSpecifier; // ivar: _globalAccessSpecifier
@property (nonatomic) BOOL loadingGames; // ivar: _loadingGames
@property (retain, nonatomic) GKLocalPlayer *localPlayer; // ivar: _localPlayer


-(BOOL)globalFriendListAccess;
-(BOOL)isFriendListSharingRestricted;
-(id)globalFriendListAccessSpecifier;
-(id)individualBundleIDFriendListAccessSpecifier;
-(id)init;
-(id)loadFreshSpecifiers;
-(id)loadingSpecifier;
-(id)specifiers;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)dealloc;
-(void)loadAllGames;
-(void)reloadWithClearLocalCache:(BOOL)arg0 ;
-(void)setGlobalFriendListAccess:(struct __CFBoolean *)arg0 withSpecifier:(id)arg1 ;


@end


#endif