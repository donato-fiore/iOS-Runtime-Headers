// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKMATCHMAKERHOSTVIEWCONTROLLER_H
#define GKMATCHMAKERHOSTVIEWCONTROLLER_H

@class NSString, GKGame;
@protocol GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol;


#import "GKExtensionRemoteViewController.h"
#import "GKMatchmakerViewController.h"

@interface GKMatchmakerHostViewController : GKExtensionRemoteViewController <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GKMatchmakerViewController *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKGame *game;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
+(id)matchmakerExtension;
-(id)extensionObjectProxy;
-(void)applicationWillEnterForeground;
-(void)extensionIsCanceling;
-(void)inviterCancelled;
-(void)messageFromExtension:(id)arg0 ;
-(void)setAcceptedInviteInternal:(id)arg0 ;
-(void)setAutomatchFailedWithError:(id)arg0 ;
-(void)setAutomatchPlayerCount:(NSInteger)arg0 ;
-(void)setCanStartWithMinimumPlayers:(BOOL)arg0 ;
-(void)setConnectingStateForPlayer:(id)arg0 ;
-(void)setDefaultInvitationMessage:(id)arg0 ;
-(void)setExistingPlayers:(id)arg0 ;
-(void)setFailedWithError:(id)arg0 ;
-(void)setHosted:(BOOL)arg0 ;
-(void)setInvitesFailedWithError:(id)arg0 ;
-(void)setMatchRequestInternal:(id)arg0 ;
-(void)setMatchmakingMode:(NSInteger)arg0 ;
-(void)setNearbyPlayer:(id)arg0 reachable:(BOOL)arg1 ;
-(void)setPlayer:(id)arg0 connected:(BOOL)arg1 ;
-(void)setPlayer:(id)arg0 responded:(NSInteger)arg1 ;
-(void)setPlayer:(id)arg0 sentData:(id)arg1 ;
-(void)shareMatchWithRequest:(id)arg0 handler:(id)arg1 ;


@end


#endif