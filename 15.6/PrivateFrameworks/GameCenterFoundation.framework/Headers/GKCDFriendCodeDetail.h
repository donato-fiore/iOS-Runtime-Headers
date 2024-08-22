// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCDFRIENDCODEDETAIL_H
#define GKCDFRIENDCODEDETAIL_H

@class NSManagedObject, NSString, NSDate, NSNumber;



@interface GKCDFriendCodeDetail : NSManagedObject

@property (copy, nonatomic) NSString *alreadyUsedPlayerIds;
@property (copy, nonatomic) NSString *creatorPlayerId;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *friendCode;
@property (copy, nonatomic) NSString *friendCodeState;
@property (copy, nonatomic) NSNumber *numUses;


+(id)fetchRequest;


@end


#endif