// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERGETCREDENTIALSTATUSPARAMS_H
#define MTRDOORLOCKCLUSTERGETCREDENTIALSTATUSPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "MTRDoorLockClusterDlCredential.h"

@interface MTRDoorLockClusterGetCredentialStatusParams : NSObject

@property (retain, nonatomic) MTRDoorLockClusterDlCredential *credential; // ivar: _credential
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif