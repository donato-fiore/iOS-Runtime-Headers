// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERGETCREDENTIALSTATUSRESPONSEPARAMS_H
#define MTRDOORLOCKCLUSTERGETCREDENTIALSTATUSRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterGetCredentialStatusResponseParams : NSObject

@property (retain, nonatomic) NSNumber *creatorFabricIndex; // ivar: _creatorFabricIndex
@property (retain, nonatomic) NSNumber *credentialExists; // ivar: _credentialExists
@property (retain, nonatomic) NSNumber *lastModifiedFabricIndex; // ivar: _lastModifiedFabricIndex
@property (retain, nonatomic) NSNumber *nextCredentialIndex; // ivar: _nextCredentialIndex
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex


-(id)description;
-(id)init;


@end


#endif