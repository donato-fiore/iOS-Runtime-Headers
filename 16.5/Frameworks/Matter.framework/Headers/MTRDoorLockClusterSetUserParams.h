// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDOORLOCKCLUSTERSETUSERPARAMS_H
#define MTRDOORLOCKCLUSTERSETUSERPARAMS_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterSetUserParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *credentialRule; // ivar: _credentialRule
@property (copy, nonatomic) NSNumber *operationType; // ivar: _operationType
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
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