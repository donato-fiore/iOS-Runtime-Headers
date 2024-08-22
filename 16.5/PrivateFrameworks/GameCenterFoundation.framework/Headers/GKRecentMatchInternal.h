// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKRECENTMATCHINTERNAL_H
#define GKRECENTMATCHINTERNAL_H

@class NSDate;


#import "GKInternalRepresentation.h"
#import "GKGameRecordInternal.h"
#import "GKPlayerInternal.h"

@interface GKRecentMatchInternal : GKInternalRepresentation

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) GKGameRecordInternal *game; // ivar: _game
@property (retain, nonatomic) GKPlayerInternal *player; // ivar: _player


+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif