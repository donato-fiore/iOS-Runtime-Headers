// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLIGHTPROFILENATURALLIGHTINGACTION_H
#define HMDLIGHTPROFILENATURALLIGHTINGACTION_H

@class NSUUID, NSArray, NSNotificationCenter;


#import "HMDAction.h"
#import "HMDLightProfile.h"

@interface HMDLightProfileNaturalLightingAction : HMDAction {
    os_unfair_lock_s _lock;
}


@property (retain) HMDLightProfile *lightProfile; // ivar: _lightProfile
@property (readonly, copy) NSUUID *lightProfileUUID; // ivar: _lightProfileUUID
@property (retain, nonatomic) NSArray *lightServices; // ivar: _lightServices
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled; // ivar: _naturalLightingEnabled
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter


+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg0 actionSet:(id)arg1 ;
+(id)actionWithDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)logCategory;
-(BOOL)isActionForCharacteristic:(id)arg0 ;
-(BOOL)isAssociatedWithAccessory:(id)arg0 ;
-(BOOL)isStaleWithAccessory:(id)arg0 ;
-(BOOL)isUnsecuringAction;
-(Class)modelClass;
-(NSUInteger)type;
-(id)associatedAccessories;
-(id)attributeDescriptions;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 parent:(id)arg1 error:(*id)arg2 ;
-(id)initWithUUID:(id)arg0 lightProfileUUID:(id)arg1 naturalLightingEnabled:(BOOL)arg2 actionSet:(id)arg3 ;
-(id)initWithUUID:(id)arg0 lightProfileUUID:(id)arg1 naturalLightingEnabled:(BOOL)arg2 actionSet:(id)arg3 notificationCenter:(id)arg4 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)stateDump;
-(id)writeRequestForTransitionStartWithLightProfile:(id)arg0 startDate:(id)arg1 type:(NSUInteger)arg2 ;
-(void)configureWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccessoryProfileAddedNotification:(id)arg0 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif