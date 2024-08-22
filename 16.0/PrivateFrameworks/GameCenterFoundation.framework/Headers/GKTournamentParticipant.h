// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTOURNAMENTPARTICIPANT_H
#define GKTOURNAMENTPARTICIPANT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKTournamentParticipantInternal.h"
#import "GKPlayer.h"

@interface GKTournamentParticipant : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL cheatingIndicator;
@property (retain) GKTournamentParticipantInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSInteger participantState;
@property (retain, nonatomic) GKPlayer *player; // ivar: _player
@property (readonly, nonatomic) NSInteger playerGroup;
@property (readonly, nonatomic) NSInteger replayCount;
@property (readonly, nonatomic) NSInteger score;


+(BOOL)supportsSecureCoding;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif