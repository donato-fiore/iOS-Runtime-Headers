// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKGAMERECORDINTERNAL_H
#define GKGAMERECORDINTERNAL_H

@class NSDate;


#import "GKGameInternal.h"
#import "GKScoreInternal.h"

@interface GKGameRecordInternal : GKGameInternal

@property (nonatomic) short achievementPoints; // ivar: _achievementPoints
@property (nonatomic) unsigned short achievements; // ivar: _achievements
@property (nonatomic) unsigned short friendRank; // ivar: _friendRank
@property (retain, nonatomic) NSDate *lastPlayedDate; // ivar: _lastPlayedDate
@property (nonatomic) unsigned short maxFriendRank; // ivar: _maxFriendRank
@property (nonatomic) unsigned int maxRank; // ivar: _maxRank
@property (retain, nonatomic) NSDate *purchaseDate; // ivar: _purchaseDate
@property (nonatomic) unsigned int rank; // ivar: _rank
@property (retain, nonatomic) GKScoreInternal *score; // ivar: _score


+(id)gameRecordForGame:(id)arg0 ;
+(id)secureCodedPropertyKeys;
-(void)updateWithGame:(id)arg0 ;


@end


#endif