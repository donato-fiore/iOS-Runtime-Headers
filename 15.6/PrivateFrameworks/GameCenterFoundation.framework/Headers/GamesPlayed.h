// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GAMESPLAYED_H
#define GAMESPLAYED_H

@class NSManagedObject, NSSet, NSDate, NSString;



@interface GamesPlayed : NSManagedObject

@property (retain, nonatomic) NSSet *entries;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *playerID;


+(id)fetchRequest;


@end


#endif