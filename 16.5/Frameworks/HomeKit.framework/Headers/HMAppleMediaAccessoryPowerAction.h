// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMAPPLEMEDIAACCESSORYPOWERACTION_H
#define HMAPPLEMEDIAACCESSORYPOWERACTION_H

@protocol NSCopying;


#import "HMAction.h"
#import "HMAccessory.h"

@interface HMAppleMediaAccessoryPowerAction : HMAction <NSCopying>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (nonatomic) NSUInteger targetSleepWakeState; // ivar: _targetSleepWakeState


+(BOOL)supportsSecureCoding;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isAffectedByEndEvents;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 targetSleepWakeState:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 home:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(void)updateWithAction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif