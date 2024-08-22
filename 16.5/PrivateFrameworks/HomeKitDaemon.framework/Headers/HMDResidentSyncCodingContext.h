// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTSYNCCODINGCONTEXT_H
#define HMDRESIDENTSYNCCODINGCONTEXT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "HMDDeviceAddress.h"
#import "_MKFUser.h"

@interface HMDResidentSyncCodingContext : NSObject {
    NSSet *_relevantTriggers;
    NSSet *_relevantBulletinRegistrations;
}


@property (readonly, nonatomic) HMDDeviceAddress *targetDeviceAddress; // ivar: _targetDeviceAddress
@property (readonly, nonatomic) BOOL targetIsResident; // ivar: _targetIsResident
@property (readonly, nonatomic) _MKFUser *targetUser; // ivar: _targetUser


-(id)initWithTargetUser:(id)arg0 targetIsResident:(BOOL)arg1 targetDeviceAddress:(id)arg2 ;


@end


#endif