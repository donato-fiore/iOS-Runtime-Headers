// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPSYNCANCHORCONTAINER_H
#define HKSPSYNCANCHORCONTAINER_H

@class NSMutableDictionary, NSString;
@protocol BSDescriptionProviding, NSSecureCoding, NSCopying, HKSPSyncAnchor;

#import <Foundation/Foundation.h>


@interface HKSPSyncAnchorContainer : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_backingDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepEventRecordSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepEventSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepModeSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepScheduleStateSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepScheduleSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepSettingsSyncAnchor;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)allKeys;
+(id)descriptionForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)incrementSleepEventRecordSyncAnchor;
-(id)incrementSleepEventSyncAnchor;
-(id)incrementSleepModeSyncAnchor;
-(id)incrementSleepScheduleStateSyncAnchor;
-(id)incrementSleepScheduleSyncAnchor;
-(id)incrementSleepSettingsSyncAnchor;
-(id)incrementSyncAnchorForKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)lock_getSyncAnchorForKey:(id)arg0 ;
-(id)lock_incrementSyncAnchorForKey:(id)arg0 ;
-(id)lock_syncAnchorForKey:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)syncAnchorForKey:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
// -(void)compareWithContainer:(id)arg0 sleepScheduleSyncAnchorOutOfDate:(id)arg1 sleepSettingsSyncAnchorOutOfDate:(unk)arg2 sleepEventRecordSyncAnchorOutOfDate:(id)arg3 sleepScheduleStateSyncAnchorOutOfDate:(unk)arg4 sleepModeSyncAnchorOutOfDate:(id)arg5 sleepEventSyncAnchorOutOfDate:(unk)arg6  ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceSetSleepScheduleSyncAnchor:(id)arg0 ;
-(void)lock_removeSyncAnchorForKey:(id)arg0 ;
-(void)lock_setSyncAnchor:(id)arg0 forKey:(id)arg1 ;
-(void)lock_updateSyncAnchor:(id)arg0 forKey:(id)arg1 ;
-(void)updateSleepEventRecordSyncAnchor:(id)arg0 ;
-(void)updateSleepEventSyncAnchor:(id)arg0 ;
-(void)updateSleepModeSyncAnchor:(id)arg0 ;
-(void)updateSleepScheduleStateSyncAnchor:(id)arg0 ;
-(void)updateSleepScheduleSyncAnchor:(id)arg0 ;
-(void)updateSleepSettingsSyncAnchor:(id)arg0 ;
-(void)updateSyncAnchor:(id)arg0 forKey:(id)arg1 ;
-(void)updateWithContainer:(id)arg0 ;


@end


#endif