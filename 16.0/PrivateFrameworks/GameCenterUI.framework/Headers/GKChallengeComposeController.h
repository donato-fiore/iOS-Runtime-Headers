// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCHALLENGECOMPOSECONTROLLER_H
#define GKCHALLENGECOMPOSECONTROLLER_H

@class GKChallenge, NSArray;


#import "GKSimpleComposeController.h"
#import "GKComposeHeaderField.h"

@interface GKChallengeComposeController : GKSimpleComposeController

@property (retain, nonatomic) GKChallenge *challenge; // ivar: _challenge
@property (retain, nonatomic) GKComposeHeaderField *challengeField; // ivar: _challengeField
@property (retain, nonatomic) NSArray *playersToLoad; // ivar: _playersToLoad


+(id)composeFlowForChallenge:(id)arg0 players:(id)arg1 defaultMessage:(id)arg2 completionHandler:(id)arg3 ;
+(id)friendPickerFlowForChallenge:(id)arg0 selectPlayers:(id)arg1 defaultMessage:(id)arg2 completionHandler:(id)arg3 ;
// +(void)composeAndSendFlowForChallenge:(id)arg0 selectPlayers:(id)arg1 defaultMessage:(id)arg2 forcePicker:(BOOL)arg3 readyHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)init;
-(id)initWithChallenge:(id)arg0 defaultMessage:(id)arg1 players:(id)arg2 ;
-(void)cancel;
-(void)donePressed;
-(void)loadView;
-(void)updateChallengeText;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif