// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERGETUSERPARAMS_H
#define MTRDOORLOCKCLUSTERGETUSERPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterGetUserParams : NSObject

@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex


-(id)description;
-(id)init;


@end


#endif