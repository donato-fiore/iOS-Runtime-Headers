// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCHALLENGEEVENTHANDLER_H
#define GKCHALLENGEEVENTHANDLER_H

@protocol GKChallengeEventHandlerDelegate, GKChallengeEventHandlerUIDelegate;

#import <Foundation/Foundation.h>

#import "GKChallengeInternal.h"

@interface GKChallengeEventHandler : NSObject

@property (weak, nonatomic) NSObject<GKChallengeEventHandlerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) GKChallengeInternal *pendingCompletedChallenge; // ivar: _pendingCompletedChallenge
@property (retain, nonatomic) GKChallengeInternal *pendingReceivedChallenge; // ivar: _pendingReceivedChallenge
@property (retain, nonatomic) NSObject<GKChallengeEventHandlerUIDelegate> *uiDelegate; // ivar: _uiDelegate


+(id)challengeEventHandler;
-(void)challengeCompleted:(id)arg0 ;
-(void)challengeReceived:(id)arg0 ;
-(void)completedChallengeSelected:(id)arg0 ;
-(void)receivedChallengeSelected:(id)arg0 ;
-(void)showBannerForChallenge:(id)arg0 complete:(id)arg1 ;


@end


#endif