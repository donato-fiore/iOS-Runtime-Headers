// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCDSUGGESTEDFRIENDS_H
#define GKCDSUGGESTEDFRIENDS_H

@class NSManagedObject, NSArray, NSDate;



@interface GKCDSuggestedFriends : NSManagedObject

@property (retain, nonatomic) NSArray *contactAssociationIDs;
@property (copy, nonatomic) NSDate *expirationDate;


+(id)fetchRequest;


@end


#endif