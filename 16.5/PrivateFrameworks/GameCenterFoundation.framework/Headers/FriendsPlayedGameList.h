// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FRIENDSPLAYEDGAMELIST_H
#define FRIENDSPLAYEDGAMELIST_H

@class NSManagedObject, NSSet, NSDate, GKGameCacheObject;



@interface FriendsPlayedGameList : NSManagedObject

@property (retain, nonatomic) NSSet *entries;
@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) GKGameCacheObject *game;


+(id)fetchRequest;


@end


#endif