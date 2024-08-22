// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERGETUSERSTATUSRESPONSEPARAMS_H
#define CHIPDOORLOCKCLUSTERGETUSERSTATUSRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterGetUserStatusResponseParams : NSObject

@property (retain, nonatomic) NSNumber *userId; // ivar: _userId
@property (retain, nonatomic) NSNumber *userStatus; // ivar: _userStatus


-(id)init;


@end


#endif