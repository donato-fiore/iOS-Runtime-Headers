// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCDPLAYERACTIVITY_H
#define GKCDPLAYERACTIVITY_H

@class NSManagedObject, NSData, NSString, NSDate;



@interface GKCDPlayerActivity : NSManagedObject

@property (retain, nonatomic) NSData *activityData;
@property (copy, nonatomic) NSString *continuation;
@property (copy, nonatomic) NSString *gameCategoryFilter;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *targetPlayerID;
@property (copy, nonatomic) NSDate *timeToLive;
@property (copy, nonatomic) NSString *version;


+(id)fetchRequest;


@end


#endif