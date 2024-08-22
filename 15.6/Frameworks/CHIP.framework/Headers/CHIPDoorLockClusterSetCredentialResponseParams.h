// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERSETCREDENTIALRESPONSEPARAMS_H
#define CHIPDOORLOCKCLUSTERSETCREDENTIALRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterSetCredentialResponseParams : NSObject

@property (retain, nonatomic) NSNumber *nextCredentialIndex; // ivar: _nextCredentialIndex
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex


-(id)init;


@end


#endif