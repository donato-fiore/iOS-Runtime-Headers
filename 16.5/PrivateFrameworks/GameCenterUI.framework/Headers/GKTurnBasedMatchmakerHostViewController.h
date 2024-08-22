// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKTURNBASEDMATCHMAKERHOSTVIEWCONTROLLER_H
#define GKTURNBASEDMATCHMAKERHOSTVIEWCONTROLLER_H

@class NSString;
@protocol GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol;


#import "GKExtensionRemoteViewController.h"
#import "GKTurnBasedMatchmakerViewController.h"

@interface GKTurnBasedMatchmakerHostViewController : GKExtensionRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GKTurnBasedMatchmakerViewController *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
+(id)turnBasedMatchmakerExtension;
-(id)extensionObjectProxy;
-(void)extensionIsCanceling;
-(void)messageFromExtension:(id)arg0 ;
-(void)refreshMatches;
-(void)setMatchRequestInternal:(id)arg0 ;
-(void)setShowExistingMatches:(BOOL)arg0 ;
-(void)setShowPlay:(BOOL)arg0 ;
-(void)setShowQuit:(BOOL)arg0 ;


@end


#endif