// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMUTABLESTATEPROVIDERSYSTEMSNAPSHOT_H
#define DNDSMUTABLESTATEPROVIDERSYSTEMSNAPSHOT_H

@class NSArray, NSDictionary, NSDate;


#import "DNDSStateProviderSystemSnapshot.h"

@interface DNDSMutableStateProviderSystemSnapshot : DNDSStateProviderSystemSnapshot

@property (copy, nonatomic) NSArray *activeAssertionUUIDs;
@property (copy, nonatomic) NSDictionary *activeDateIntervalByAssertionUUID;
@property (copy, nonatomic) NSArray *assertions;
@property (nonatomic) NSUInteger interruptionBehaviorSetting;
@property (copy, nonatomic) NSDate *lastUpdate;
@property (nonatomic) NSUInteger lostModeState;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif