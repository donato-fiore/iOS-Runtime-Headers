// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MULTIPLAYERGROUPLIST_H
#define MULTIPLAYERGROUPLIST_H

@class NSManagedObject, NSSet, NSDate;



@interface MultiplayerGroupList : NSManagedObject

@property (retain, nonatomic) NSSet *entries;
@property (copy, nonatomic) NSDate *expirationDate;


+(id)fetchRequest;


@end


#endif