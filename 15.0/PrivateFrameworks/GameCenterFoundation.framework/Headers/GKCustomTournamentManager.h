// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCUSTOMTOURNAMENTMANAGER_H
#define GKCUSTOMTOURNAMENTMANAGER_H

@protocol GKCustomTournamentDelegate;

#import <Foundation/Foundation.h>

#import "GKPlayer.h"
#import "GKTournament.h"

@interface GKCustomTournamentManager : NSObject <GKCustomTournamentDelegate>



@property (retain, nonatomic) GKPlayer *creator; // ivar: _creator
@property (weak, nonatomic) GKTournament *tournament; // ivar: _tournament


-(void)acceptInvitationWithCompletionHandler:(id)arg0 ;
-(void)addCreator:(id)arg0 completionHandler:(id)arg1 ;
-(void)addInvitees:(id)arg0 completionHandler:(id)arg1 ;
-(void)declineInvitationWithCompletionHandler:(id)arg0 ;
-(void)removeCreator:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeInvitees:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif