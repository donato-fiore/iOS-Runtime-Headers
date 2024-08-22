// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERSETUSERPARAMS_H
#define MTRDOORLOCKCLUSTERSETUSERPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterSetUserParams : NSObject

@property (retain, nonatomic) NSNumber *credentialRule; // ivar: _credentialRule
@property (retain, nonatomic) NSNumber *operationType; // ivar: _operationType
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSString *userName; // ivar: _userName
@property (retain, nonatomic) NSNumber *userStatus; // ivar: _userStatus
@property (retain, nonatomic) NSNumber *userType; // ivar: _userType
@property (retain, nonatomic) NSNumber *userUniqueId; // ivar: _userUniqueId


-(id)description;
-(id)init;


@end


#endif