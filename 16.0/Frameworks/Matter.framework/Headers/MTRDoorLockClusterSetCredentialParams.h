// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERSETCREDENTIALPARAMS_H
#define MTRDOORLOCKCLUSTERSETCREDENTIALPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>

#import "MTRDoorLockClusterDlCredential.h"

@interface MTRDoorLockClusterSetCredentialParams : NSObject

@property (retain, nonatomic) MTRDoorLockClusterDlCredential *credential; // ivar: _credential
@property (retain, nonatomic) NSData *credentialData; // ivar: _credentialData
@property (retain, nonatomic) NSNumber *operationType; // ivar: _operationType
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSNumber *userStatus; // ivar: _userStatus
@property (retain, nonatomic) NSNumber *userType; // ivar: _userType


-(id)description;
-(id)init;


@end


#endif