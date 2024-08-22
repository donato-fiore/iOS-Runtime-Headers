// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MULTIPLAYERGROUP_H
#define MULTIPLAYERGROUP_H

@class NSManagedObject, NSSet, NSString, NSNumber;


#import "MultiplayerGroupList.h"

@interface MultiplayerGroup : NSManagedObject

@property (retain, nonatomic) NSSet *entries;
@property (copy, nonatomic) NSString *id;
@property (retain, nonatomic) MultiplayerGroupList *list;
@property (copy, nonatomic) NSNumber *numberOfAutomatched;
@property (copy, nonatomic) NSNumber *playedAt;


+(id)fetchRequest;


@end


#endif