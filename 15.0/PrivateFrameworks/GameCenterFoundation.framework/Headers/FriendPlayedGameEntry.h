// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FRIENDPLAYEDGAMEENTRY_H
#define FRIENDPLAYEDGAMEENTRY_H

@class NSManagedObject, NSSet, GKGameCacheObject;



@interface FriendPlayedGameEntry : NSManagedObject

@property (retain, nonatomic) NSSet *friendsPlayed;
@property (retain, nonatomic) GKGameCacheObject *game;


+(id)fetchRequest;


@end


#endif