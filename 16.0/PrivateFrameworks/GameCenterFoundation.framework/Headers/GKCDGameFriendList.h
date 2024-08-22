// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCDGAMEFRIENDLIST_H
#define GKCDGAMEFRIENDLIST_H

@class NSManagedObject, NSString, NSOrderedSet, NSDate;



@interface GKCDGameFriendList : NSManagedObject

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSOrderedSet *entries;
@property (copy, nonatomic) NSDate *expirationDate;


+(id)fetchRequest;


@end


#endif