// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPLAYERACTIVITYRELATIONSHIPLEADERBOARDSCORE_H
#define GKPLAYERACTIVITYRELATIONSHIPLEADERBOARDSCORE_H

@class NSString;


#import "GKInternalRepresentation.h"
#import "GKPlayerActivityRelationshipPlayer.h"

@interface GKPlayerActivityRelationshipLeaderboardScore : GKInternalRepresentation

@property (nonatomic) BOOL gained; // ivar: _gained
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) GKPlayerActivityRelationshipPlayer *player; // ivar: _player
@property (nonatomic) NSInteger rank; // ivar: _rank
@property (retain, nonatomic) NSString *score; // ivar: _score
@property (retain, nonatomic) NSString *symbol; // ivar: _symbol


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif