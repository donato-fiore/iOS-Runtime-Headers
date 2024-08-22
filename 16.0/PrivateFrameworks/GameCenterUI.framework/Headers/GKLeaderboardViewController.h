// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLEADERBOARDVIEWCONTROLLER_H
#define GKLEADERBOARDVIEWCONTROLLER_H

@class NSString;
@protocol GKLeaderboardViewControllerDelegate;


#import "GKGameCenterViewController.h"

@interface GKLeaderboardViewController : GKGameCenterViewController

@property (copy, nonatomic) NSString *category;
@property (weak, nonatomic) NSObject<GKLeaderboardViewControllerDelegate> *leaderboardDelegate; // ivar: _leaderboardDelegate
@property (nonatomic) NSInteger timeScope;


-(id)init;
-(void)notifyDelegateOnWillFinish;


@end


#endif