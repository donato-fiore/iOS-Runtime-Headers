// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GAMESUMMARY_H
#define GAMESUMMARY_H

@class NSManagedObject, NSNumber, NSString, NSSet, NSDate;


#import "GamesPlayedSummaryList.h"

@interface GameSummary : NSManagedObject

@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSSet *compatiblePlatforms;
@property (copy, nonatomic) NSNumber *isArcade;
@property (retain, nonatomic) GamesPlayedSummaryList *list;
@property (copy, nonatomic) NSDate *playedAt;


+(id)fetchRequest;


@end


#endif