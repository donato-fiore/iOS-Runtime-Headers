// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMACCESSORYSETTING_H
#define _HMACCESSORYSETTING_H

@class HMFUnfairLock, NSMutableOrderedSet, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMFMerging, NSSecureCoding, _HMAccesorySettingDelegate, OS_dispatch_queue, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessorySettings.h"
#import "_HMContext.h"

@interface _HMAccessorySetting : NSObject <HMFLogging, HMFMessageReceiver, HMFMerging, NSSecureCoding>

 {
    HMFUnfairLock *_lock;
    NSMutableOrderedSet *_constraints;
}


@property (weak, nonatomic) HMAccessorySettings *accessorySettings; // ivar: _accessorySettings
@property (readonly, copy) NSArray *constraints;
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_HMAccesorySettingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) NSUInteger properties; // ivar: _properties
@property (readonly, getter=isReflected) BOOL reflected; // ivar: _reflected
@property (readonly) Class superclass;
@property (readonly) NSInteger type; // ivar: _type
@property (copy) NSObject<NSCopying><NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)_encodedConstraintsToAdd:(id)arg0 ;
+(id)_encodedConstraintsToRemove:(id)arg0 ;
+(id)_replaceConstraintsPayloadWithAdditions:(id)arg0 removals:(id)arg1 keyPath:(id)arg2 ;
+(id)logCategory;
+(id)shortDescription;
+(id)supportedConstraintClasses;
+(id)supportedValueClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeConstraints:(id)arg0 ;
-(BOOL)mergeObject:(id)arg0 ;
-(id)constraintWithType:(NSInteger)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 properties:(NSUInteger)arg1 name:(id)arg2 constraints:(id)arg3 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)shortDescription;
-(void)_handleUpdatedValue:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_unconfigureContext;
-(void)addConstraint:(id)arg0 ;
-(void)addConstraint:(id)arg0 completionHandler:(id)arg1 ;
-(void)configureWithAccessorySettings:(id)arg0 context:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyDelegateOfAddedConstraint:(id)arg0 ;
-(void)notifyDelegateOfRemovedConstraint:(id)arg0 ;
-(void)removeConstraint:(id)arg0 ;
-(void)removeConstraint:(id)arg0 completionHandler:(id)arg1 ;
-(void)replaceConstraints:(id)arg0 withConstraints:(id)arg1 completionHandler:(id)arg2 ;
-(void)unconfigure;
-(void)updateConstraints:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif