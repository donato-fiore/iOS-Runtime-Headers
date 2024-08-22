// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKDASHBOARDHOSTVIEWCONTROLLER_H
#define GKDASHBOARDHOSTVIEWCONTROLLER_H

@class NSString;
@protocol GKGameCenterDashboardServiceProtocol;

#import <Foundation/Foundation.h>

#import "GKExtensionRemoteViewController.h"
#import "GKGameCenterViewController.h"

@interface GKDashboardHostViewController : GKExtensionRemoteViewController <GKGameCenterDashboardServiceProtocol>



@property (retain, nonatomic) NSObject *dashboardAssetController; // ivar: _dashboardAssetController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GKGameCenterViewController *delegate; // ivar: _delegateWeak
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
+(id)dashboardExtension;
-(id)extensionObjectProxy;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)extensionIsCanceling;
-(void)extensionIsFinishing;
-(void)finishWithMatch:(id)arg0 ;
-(void)hostDidChangeLeaderboardIdentifier:(id)arg0 ;
-(void)hostDidChangeLeaderboardPlayerScope:(id)arg0 ;
-(void)hostDidChangeLeaderboardTimeScope:(id)arg0 ;
-(void)hostDidChangeViewState:(id)arg0 ;
-(void)hostSupportsShowingPlayForChallenge:(BOOL)arg0 ;
-(void)hostSupportsShowingPlayForTurnBasedMatch:(BOOL)arg0 ;
-(void)hostSupportsShowingQuitForTurnBasedMatch:(BOOL)arg0 ;
-(void)messageFromExtension:(id)arg0 ;
-(void)playPressedForChallenge:(id)arg0 ;
-(void)playerQuitMatch:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif