// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCDGAMEACCESSLIST_H
#define GKCDGAMEACCESSLIST_H

@class NSManagedObject, NSSet, NSDate;



@interface GKCDGameAccessList : NSManagedObject

@property (retain, nonatomic) NSSet *entries;
@property (copy, nonatomic) NSDate *expirationDate;


+(id)fetchRequest;


@end


#endif