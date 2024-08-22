// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMAPPLEMEDIAACCESSORYPOWERACTION_H
#define HMAPPLEMEDIAACCESSORYPOWERACTION_H

@class NSString, NSUUID;
@protocol NSSecureCoding, HMObjectMerge, NSCopying;


#import "HMAction.h"
#import "HMAccessory.h"

@interface HMAppleMediaAccessoryPowerAction : HMAction <NSSecureCoding, HMObjectMerge, NSCopying>



@property (weak, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger targetSleepWakeState; // ivar: _targetSleepWakeState
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg0 home:(id)arg1 ;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessory:(id)arg0 targetSleepWakeState:(NSUInteger)arg1 ;
-(id)initWithAccessory:(id)arg0 targetSleepWakeState:(NSUInteger)arg1 uuid:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithAction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif