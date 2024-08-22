// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDOORLOCKCLUSTERGETCREDENTIALSTATUSPARAMS_H
#define MTRDOORLOCKCLUSTERGETCREDENTIALSTATUSPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRDoorLockClusterCredentialStruct.h"

@interface MTRDoorLockClusterGetCredentialStatusParams : NSObject <NSCopying>



@property (copy, nonatomic) MTRDoorLockClusterCredentialStruct *credential; // ivar: _credential
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif