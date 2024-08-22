// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDOORLOCKCLUSTERSETCREDENTIALPARAMS_H
#define MTRDOORLOCKCLUSTERSETCREDENTIALPARAMS_H

@class NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRDoorLockClusterCredentialStruct.h"

@interface MTRDoorLockClusterSetCredentialParams : NSObject <NSCopying>



@property (copy, nonatomic) MTRDoorLockClusterCredentialStruct *credential; // ivar: _credential
@property (copy, nonatomic) NSData *credentialData; // ivar: _credentialData
@property (copy, nonatomic) NSNumber *operationType; // ivar: _operationType
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (copy, nonatomic) NSNumber *userStatus; // ivar: _userStatus
@property (copy, nonatomic) NSNumber *userType; // ivar: _userType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif