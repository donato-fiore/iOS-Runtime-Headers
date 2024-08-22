// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPLAYERACTIVITYRELATIONSHIPS_H
#define GKPLAYERACTIVITYRELATIONSHIPS_H

@class NSArray;


#import "GKInternalRepresentation.h"

@interface GKPlayerActivityRelationships : GKInternalRepresentation

@property (retain, nonatomic) NSArray *achievements; // ivar: _achievements
@property (retain, nonatomic) NSArray *games; // ivar: _games
@property (retain, nonatomic) NSArray *leaderboards; // ivar: _leaderboards
@property (retain, nonatomic) NSArray *players; // ivar: _players


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif