// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERSETCREDENTIALPARAMS_H
#define CHIPDOORLOCKCLUSTERSETCREDENTIALPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>

#import "CHIPDoorLockClusterDlCredential.h"

@interface CHIPDoorLockClusterSetCredentialParams : NSObject

@property (retain, nonatomic) CHIPDoorLockClusterDlCredential *credential; // ivar: _credential
@property (retain, nonatomic) NSData *credentialData; // ivar: _credentialData
@property (retain, nonatomic) NSNumber *operationType; // ivar: _operationType
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSNumber *userStatus; // ivar: _userStatus
@property (retain, nonatomic) NSNumber *userType; // ivar: _userType


-(id)init;


@end


#endif