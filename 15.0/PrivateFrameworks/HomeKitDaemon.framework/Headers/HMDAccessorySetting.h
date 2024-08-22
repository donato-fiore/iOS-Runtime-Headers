// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETTING_H
#define HMDACCESSORYSETTING_H

@class HMFObject, NSMutableSet, NSMutableArray, NSString, NSArray, NSUUID, HMFMessageDispatcher;
@protocol HMFLogging, HMDAccessorySettingUpdateProtocol, HMDAccessorySettingProtocol, NSSecureCoding, HMDSettingBaseProtocol, OS_dispatch_queue;


#import "HMDAccessorySettingModel.h"

@interface HMDAccessorySetting : HMFObject <HMFLogging, HMDAccessorySettingUpdateProtocol, HMDAccessorySettingProtocol, NSSecureCoding, HMDSettingBaseProtocol>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_inMemoryCachedConstraintRemovals;
    NSMutableArray *_inMemoryCachedConstraints;
    NSMutableArray *_constraints;
    id *_value;
    NSString *_name;
    NSInteger _type;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (nonatomic) NSUInteger configurationVersion; // ivar: _configurationVersion
@property (readonly, copy) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) BOOL isCollectionType;
@property (readonly) NSString *keyPath; // ivar: _keyPath
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) HMDAccessorySettingModel *model; // ivar: _model
@property (readonly, copy) NSArray *models; // ivar: _models
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly) NSUInteger properties; // ivar: _properties
@property (getter=isReflected) BOOL reflected; // ivar: _reflected
@property (readonly) Class superclass;
@property (readonly) NSInteger type;
@property (readonly, copy) id *value;


+(BOOL)supportsSecureCoding;
+(id)decodedValue:(id)arg0 error:(*id)arg1 ;
+(id)logCategory;
+(id)supportedConstraintClasses;
+(id)supportedValueClasses;
-(BOOL)canAddConstraint:(id)arg0 error:(*id)arg1 ;
-(BOOL)canRemoveConstraint:(id)arg0 ;
-(BOOL)compareConstraints:(id)arg0 ;
-(BOOL)isConstraintMergeStrategyReflection;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)shouldBlockSettingUpdateFromVersion:(id)arg0 isMultiUserEnabled:(BOOL)arg1 ;
-(BOOL)shouldEncodeForCoder:(id)arg0 ;
-(BOOL)shouldTurnOffPersonalRequestsOnLanguageChangeTo:(id)arg0 supportedMultiUserLanguageCodes:(id)arg1 isMultiUserEnabled:(BOOL)arg2 ;
-(id)_modelsForMergeStrategyConstraintsUpdate:(id)arg0 ;
-(id)constraintWithIdentifier:(id)arg0 ;
-(id)copyIdentical;
-(id)copyReplica;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)counterpartConstraintFor:(id)arg0 ;
-(id)inMemoryConstraintWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 ;
-(id)initWithModel:(id)arg0 ;
-(id)logIdentifier;
-(id)modelsForConstraintsUpdate:(id)arg0 ;
-(id)replicatedMissingConstraintsFrom:(id)arg0 ;
-(void)_mergeConstraintsLocallyWithAdditions:(id)arg0 removals:(id)arg1 ;
-(void)addConstraint:(id)arg0 ;
-(void)addConstraintsInMemory:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeConstraintsFromOther:(id)arg0 ;
-(void)removeConstraint:(id)arg0 ;
-(void)removeConstraintsInMemory:(id)arg0 ;
-(void)setGroup:(id)arg0 ;


@end


#endif