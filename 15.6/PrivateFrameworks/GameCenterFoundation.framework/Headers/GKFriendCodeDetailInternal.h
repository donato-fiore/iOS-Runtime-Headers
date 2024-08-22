// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKFRIENDCODEDETAILINTERNAL_H
#define GKFRIENDCODEDETAILINTERNAL_H

@class NSArray, NSString;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKFriendCodeDetailInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *alreadyUsedPlayerIDs; // ivar: _alreadyUsedPlayerIDs
@property (retain, nonatomic) GKPlayerInternal *creatorPlayer; // ivar: _creatorPlayer
@property (retain, nonatomic) NSString *creatorPlayerID; // ivar: _creatorPlayerID
@property (retain, nonatomic) NSString *friendCode; // ivar: _friendCode
@property (nonatomic) NSInteger friendCodeState; // ivar: _friendCodeState
@property (nonatomic) NSInteger friendCodeUsageCount; // ivar: _friendCodeUsageCount


+(id)secureCodedPropertyKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFriendCodeDetail:(id)arg0 ;


@end


#endif