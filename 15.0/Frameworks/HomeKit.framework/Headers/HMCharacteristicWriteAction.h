// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCHARACTERISTICWRITEACTION_H
#define HMCHARACTERISTICWRITEACTION_H

@class NSString, NSUUID;
@protocol NSSecureCoding, HMObjectMerge;


#import "HMAction.h"
#import "HMCharacteristic.h"

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge>



@property (retain, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *targetValue; // ivar: _targetValue
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg0 home:(id)arg1 ;
+(id)allowedTargetValueClassesForShortcuts;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfAllowedTargetValueClass:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)requiresDeviceUnlock;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)commonInitWith:(id)arg0 targetValue:(id)arg1 ;
-(id)encodeAsProtoBuf;
-(id)initWithCharacteristic:(id)arg0 targetValue:(id)arg1 ;
-(id)initWithCharacteristic:(id)arg0 targetValue:(id)arg1 uuid:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtoBuf:(id)arg0 home:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 actionSet:(id)arg1 ;
-(void)_updateTargetValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateTargetValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif