// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDOORLOCKCLUSTERGETCREDENTIALSTATUSRESPONSEPARAMS_H
#define MTRDOORLOCKCLUSTERGETCREDENTIALSTATUSRESPONSEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterGetCredentialStatusResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *creatorFabricIndex; // ivar: _creatorFabricIndex
@property (copy, nonatomic) NSNumber *credentialExists; // ivar: _credentialExists
@property (copy, nonatomic) NSNumber *lastModifiedFabricIndex; // ivar: _lastModifiedFabricIndex
@property (copy, nonatomic) NSNumber *nextCredentialIndex; // ivar: _nextCredentialIndex
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *userIndex; // ivar: _userIndex


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif