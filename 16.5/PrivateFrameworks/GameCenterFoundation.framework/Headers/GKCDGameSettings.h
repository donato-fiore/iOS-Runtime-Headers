// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCDGAMESETTINGS_H
#define GKCDGAMESETTINGS_H

@class NSManagedObject, NSString, NSDate;



@interface GKCDGameSettings : NSManagedObject

@property (copy, nonatomic) NSString *allowFriendListAccess;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSDate *timeStamp;


+(id)fetchRequest;


@end


#endif