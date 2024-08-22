// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMUTABLEUSERHOMEACCESSSETTINGS_H
#define HMMUTABLEUSERHOMEACCESSSETTINGS_H

@class NSSet;


#import "HMUserHomeAccessSettings.h"
#import "HMUserHomeAccessSchedule.h"

@interface HMMutableUserHomeAccessSettings : HMUserHomeAccessSettings

@property (getter=isAccessAllowedToAllAccessories) BOOL accessAllowedToAllAccessories;
@property (copy) NSSet *allowedAccessoryCategoryTypes;
@property (copy) NSSet *allowedAccessoryIdentifiers;
@property (copy) NSSet *allowedRoomIdentifiers;
@property (copy) HMUserHomeAccessSchedule *schedule;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif