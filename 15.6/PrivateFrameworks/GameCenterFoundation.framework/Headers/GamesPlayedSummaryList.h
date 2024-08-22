// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GAMESPLAYEDSUMMARYLIST_H
#define GAMESPLAYEDSUMMARYLIST_H

@class NSManagedObject, NSOrderedSet, NSDate, NSString, NSNumber;



@interface GamesPlayedSummaryList : NSManagedObject

@property (retain, nonatomic) NSOrderedSet *entries;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *playerID;
@property (copy, nonatomic) NSNumber *withinSecs;


+(id)fetchRequest;


@end


#endif