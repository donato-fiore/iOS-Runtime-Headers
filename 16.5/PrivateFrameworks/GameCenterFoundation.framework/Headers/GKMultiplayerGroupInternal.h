// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKMULTIPLAYERGROUPINTERNAL_H
#define GKMULTIPLAYERGROUPINTERNAL_H

@class NSString, NSMutableArray;


#import "GKInternalRepresentation.h"

@interface GKMultiplayerGroupInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *groupID; // ivar: _groupID
@property (nonatomic) NSInteger numberOfAutomached; // ivar: _numberOfAutomached
@property (retain, nonatomic) NSMutableArray *participants; // ivar: _participants
@property (nonatomic) NSInteger playedAt; // ivar: _playedAt


+(id)secureCodedPropertyKeys;
-(id)description;


@end


#endif