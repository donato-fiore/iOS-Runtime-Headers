// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCDGAMEFRIEND_H
#define GKCDGAMEFRIEND_H

@class NSManagedObject, NSString;


#import "GKCDGameFriendList.h"

@interface GKCDGameFriend : NSManagedObject

@property (copy, nonatomic) NSString *gamePlayerID;
@property (retain, nonatomic) GKCDGameFriendList *list;
@property (copy, nonatomic) NSString *playerID;
@property (copy, nonatomic) NSString *teamPlayerID;


+(id)fetchRequest;


@end


#endif