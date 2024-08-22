// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTOURNAMENTPARTICIPANTHISTORICALDATA_H
#define GKTOURNAMENTPARTICIPANTHISTORICALDATA_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKTournamentParticipantHistoricalDataInternal.h"
#import "GKPlayer.h"

@interface GKTournamentParticipantHistoricalData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger averageRank;
@property (readonly, nonatomic) NSInteger averageScore;
@property (readonly, nonatomic) NSInteger bestScore;
@property (readonly, nonatomic) NSInteger highestRank;
@property (readonly, nonatomic) NSMutableArray *historicalRanks;
@property (retain) GKTournamentParticipantHistoricalDataInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSInteger latestRank;
@property (readonly, nonatomic) NSInteger latestScore;
@property (readonly, nonatomic) GKPlayer *player;
@property (readonly, nonatomic) NSInteger tournamentsPlayed;


+(BOOL)supportsSecureCoding;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif