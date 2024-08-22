// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCHARACTERISTICWRITEACTION_H
#define HMCHARACTERISTICWRITEACTION_H

@protocol NSCopying;


#import "HMAction.h"
#import "HMCharacteristic.h"

@interface HMCharacteristicWriteAction : HMAction {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, copy, nonatomic) NSObject<NSCopying> *targetValue; // ivar: _targetValue


+(BOOL)supportsSecureCoding;
+(id)actionWithProtoBuf:(id)arg0 home:(id)arg1 ;
+(id)allowedTargetValueClassesForShortcuts;
+(id)new;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isAffectedByEndEvents;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfAllowedTargetValueClass:(id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(BOOL)requiresDeviceUnlock;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProtoBuf;
-(id)init;
-(id)initWithCharacteristic:(id)arg0 targetValue:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 home:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 actionSet:(id)arg1 ;
-(void)updateTargetValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif