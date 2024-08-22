// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FRIENDPLAYEDENTRY_H
#define FRIENDPLAYEDENTRY_H

@class NSManagedObject, GKPlayerProfileCacheObject, NSDate;



@interface FriendPlayedEntry : NSManagedObject

@property (retain, nonatomic) GKPlayerProfileCacheObject *friend;
@property (copy, nonatomic) NSDate *playedAt;


+(id)fetchRequest;


@end


#endif