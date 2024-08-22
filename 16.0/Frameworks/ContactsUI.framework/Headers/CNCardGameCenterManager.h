// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCARDGAMECENTERMANAGER_H
#define CNCARDGAMECENTERMANAGER_H

@class CNContact, GKServiceProxy, CNUICoreRecentsManager;
@protocol CNCancelable, CNSchedulerProvider, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNCardGameCenterManager : NSObject

@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) GKServiceProxy *gameCenterProxy; // ivar: _gameCenterProxy
@property (nonatomic) BOOL hasCheckedAuthenticatedLocalPlayer; // ivar: _hasCheckedAuthenticatedLocalPlayer
@property (retain, nonatomic) CNUICoreRecentsManager *recentsManager; // ivar: _recentsManager
@property (retain, nonatomic) NSObject<CNCancelable> *relationshipResultsCancelable; // ivar: _relationshipResultsCancelable
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly, nonatomic) NSObject<CNScheduler> *workQueue; // ivar: _workQueue


-(BOOL)hasAuthenticatedLocalPlayer;
-(BOOL)shouldActionDisplayDropdownMenu;
-(id)defaultFriendResultFromFriendResults:(id)arg0 forContact:(id)arg1 ;
-(id)handles;
-(id)handlesForContact:(id)arg0 ;
-(id)init;
-(void)getGameCenterRelationshipsForContact:(id)arg0 completionHandler:(id)arg1 ;
-(void)getHasAuthenticatedLocalPlayerHandler:(id)arg0 ;
-(void)handleResults:(id)arg0 forContact:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)refreshGameCenterRelationshipsForContact:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif