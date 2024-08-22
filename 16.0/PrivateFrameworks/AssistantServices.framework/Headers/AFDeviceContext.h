// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFDEVICECONTEXT_H
#define AFDEVICECONTEXT_H

@class NSMutableDictionary, NSString, NSUUID, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFClockAlarmSnapshot.h"
#import "AFDeviceContextMetadata.h"
#import "AFCallStateSnapshot.h"
#import "AFPeerInfo.h"
#import "AFHomeAnnouncementSnapshot.h"
#import "AFLocationSnapshot.h"
#import "AFMultiUserStateSnapshot.h"
#import "AFMediaPlaybackStateSnapshot.h"
#import "AFSystemStateSnapshot.h"
#import "AFClockTimerSnapshot.h"

@interface AFDeviceContext : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_serializedBackingStore;
    NSInteger _dirtyFlags;
    NSString *_cachedDescription;
    os_unfair_lock_s _cachedDescriptionLock;
}


@property (readonly, nonatomic) AFClockAlarmSnapshot *alarmSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *alarmSnapshotMetadata;
@property (readonly, nonatomic) AFDeviceContextMetadata *callStateMetadata;
@property (readonly, nonatomic) AFCallStateSnapshot *callStateSnapshot;
@property (readonly, nonatomic) NSString *contextCollectorSource; // ivar: _contextCollectorSource
@property (readonly, nonatomic) AFPeerInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) BOOL fromLocalDevice; // ivar: _fromLocalDevice
@property (readonly, nonatomic) NSInteger heardVoiceTrigger;
@property (readonly, nonatomic) AFDeviceContextMetadata *heardVoiceTriggerMetadata;
@property (readonly, nonatomic) AFHomeAnnouncementSnapshot *homeAnnouncementSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *homeAnnouncementSnapshotMetadata;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) AFDeviceContextMetadata *locationMetadata;
@property (readonly, nonatomic) AFLocationSnapshot *locationSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *multiUserStateMetadata;
@property (readonly, nonatomic) AFMultiUserStateSnapshot *multiUserStateSnapshot;
@property (readonly, nonatomic) NSData *myriadAdvertisementContext;
@property (readonly, nonatomic) AFDeviceContextMetadata *playbackStateMetadata;
@property (readonly, nonatomic) AFMediaPlaybackStateSnapshot *playbackStateSnapshot;
@property (readonly, nonatomic) NSInteger privacyClass; // ivar: _privacyClass
@property (readonly, nonatomic) NSUInteger siriClientState;
@property (readonly, nonatomic) AFDeviceContextMetadata *siriClientStateMetadata;
@property (readonly, nonatomic) AFDeviceContextMetadata *systemStateMetadata;
@property (readonly, nonatomic) AFSystemStateSnapshot *systemStateSnapshot;
@property (readonly, nonatomic) AFClockTimerSnapshot *timerSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *timerSnapshotMetadata;


+(BOOL)supportsSecureCoding;
-(BOOL)af_didHearVoiceTrigger;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(id)_safeContextDictionary;
-(id)_serializedBackingStoreIncludingKeys:(id)arg0 excludingMandatoryKeys:(id)arg1 ;
-(id)af_serviceDeviceContextForKeys:(id)arg0 ;
-(id)af_serviceDeviceContextForKeys:(id)arg0 excludeContextExpiredBefore:(id)arg1 proximity:(NSInteger)arg2 ;
-(id)af_validFlowContext;
-(id)allContextKeys;
-(id)buildBuiltInContextsDescriptions;
-(id)buildDescription;
-(id)contextMetadataForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceContextForDeviceContextKeys:(id)arg0 excludingMandatoryKeys:(id)arg1 ;
-(id)historicalContextMetadataForKey:(id)arg0 ;
-(id)historicalSiriClientStateMetadata;
-(id)historicalSiriClientStates;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedBackingStore:(id)arg0 fromLocalDevice:(BOOL)arg1 contextCollectorSource:(id)arg2 ;
-(id)partialSerializedBackingStoreIncludingKeys:(id)arg0 excludingMandatoryKeys:(id)arg1 ;
-(id)partiallyUpdatedContextForDeviceContextKeys:(id)arg0 excludingMandatoryKeys:(id)arg1 fromDeviceContext:(id)arg2 ;
-(id)serializedBackingStore;
-(id)serializedContextForKey:(id)arg0 ;
-(id)serializedHistoricalContextForKey:(id)arg0 ;
-(id)updatedContextWithSerializedContextByKey:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif