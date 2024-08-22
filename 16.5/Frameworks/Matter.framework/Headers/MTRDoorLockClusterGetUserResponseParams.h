// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDOORLOCKCLUSTERGETUSERRESPONSEPARAMS_H
#define MTRDOORLOCKCLUSTERGETUSERRESPONSEPARAMS_H

@class NSNumber, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterGetUserResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *creatorFabricIndex; // ivar: _creatorFabricIndex
@property (copy, nonatomic) NSNumber *credentialRule; // ivar: _credentialRule
@property (copy, nonatomic) NSArray *credentials; // ivar: _credentials
@property (copy, nonatomic) NSNumber *lastModifiedFabricIndex; // ivar: _lastModifiedFabricIndex
@property (copy, nonatomic) NSNumber *nextUserIndex; // ivar: _nextUserIndex
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (copy, nonatomic) NSString *userName; // ivar: _userName
@property (copy, nonatomic) NSNumber *userStatus; // ivar: _userStatus
@property (copy, nonatomic) NSNumber *userType; // ivar: _userType
@property (copy, nonatomic) NSNumber *userUniqueID; // ivar: _userUniqueID
@property (copy, nonatomic) NSNumber *userUniqueId;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif