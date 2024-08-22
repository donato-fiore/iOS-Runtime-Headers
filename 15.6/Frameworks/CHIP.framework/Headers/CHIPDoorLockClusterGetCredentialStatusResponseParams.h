// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERGETCREDENTIALSTATUSRESPONSEPARAMS_H
#define CHIPDOORLOCKCLUSTERGETCREDENTIALSTATUSRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterGetCredentialStatusResponseParams : NSObject

@property (retain, nonatomic) NSNumber *credentialExists; // ivar: _credentialExists
@property (retain, nonatomic) NSNumber *nextCredentialIndex; // ivar: _nextCredentialIndex
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex


-(id)init;


@end


#endif