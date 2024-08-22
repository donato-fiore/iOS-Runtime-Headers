// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPSLEEPSETTINGS_H
#define HKSPSLEEPSETTINGS_H

@class NSString, NSDate, NSDictionary, NSSet;
@protocol BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying, HKSPSyncAnchor;

#import <Foundation/Foundation.h>


@interface HKSPSleepSettings : NSObject <BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>



@property (readonly, nonatomic) BOOL bedtimeReminders; // ivar: _bedtimeReminders
@property (readonly, nonatomic) BOOL chargingReminders; // ivar: _chargingReminders
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly, nonatomic) BOOL scheduledSleepMode; // ivar: _scheduledSleepMode
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSUInteger sleepModeOptions; // ivar: _sleepModeOptions
@property (readonly, nonatomic) BOOL sleepTracking; // ivar: _sleepTracking
@property (readonly, nonatomic) BOOL springBoardGreetingDisabled; // ivar: _springBoardGreetingDisabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *syncAnchor; // ivar: _syncAnchor
@property (readonly, nonatomic) BOOL timeInBedTracking; // ivar: _timeInBedTracking
@property (readonly, nonatomic) NSUInteger version; // ivar: _version
@property (readonly, nonatomic) BOOL wakeUpResults; // ivar: _wakeUpResults
@property (readonly, nonatomic) BOOL watchSleepFeaturesEnabled; // ivar: _watchSleepFeaturesEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)_equateTo:(id)arg0 builderBuilderBlock:(id)arg1 ;
-(BOOL)_needsMigrationForCoder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initFromObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectWithSyncAnchor:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_buildForEquivalenceTo:(id)arg0 builder:(id)arg1 ;
-(void)_migrateForCoder:(id)arg0 ;
-(void)copyFromObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif