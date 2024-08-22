// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERSETUSERPARAMS_H
#define CHIPDOORLOCKCLUSTERSETUSERPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterSetUserParams : NSObject

@property (retain, nonatomic) NSNumber *credentialRule; // ivar: _credentialRule
@property (retain, nonatomic) NSNumber *operationType; // ivar: _operationType
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSString *userName; // ivar: _userName
@property (retain, nonatomic) NSNumber *userStatus; // ivar: _userStatus
@property (retain, nonatomic) NSNumber *userType; // ivar: _userType
@property (retain, nonatomic) NSNumber *userUniqueId; // ivar: _userUniqueId


-(id)init;


@end


#endif