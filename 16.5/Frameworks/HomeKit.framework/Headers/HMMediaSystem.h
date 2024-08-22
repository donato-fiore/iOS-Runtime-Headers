// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMEDIASYSTEM_H
#define HMMEDIASYSTEM_H

@class NSUUID, NSString, NSArray;
@protocol HMFLogging, HMFMessageReceiver, HMAccessorySettingsAdapterDelegate, HMControllable, HMMediaDestinationInternal, HMAccessorySettingsContainerInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject, HMMediaSystemDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessorySettingsController.h"
#import "HMAccessorySettingsDataSource.h"
#import "HMApplicationData.h"
#import "HMMediaDestination.h"
#import "HMAccessoryCategory.h"
#import "HMMutableArray.h"
#import "HMHome.h"
#import "_HMContext.h"
#import "HMMediaSession.h"
#import "HMAccessorySettingsAdapter.h"
#import "HMAccessorySettings.h"
#import "HMSymptomsHandler.h"

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, HMAccessorySettingsAdapterDelegate, HMControllable, HMMediaDestinationInternal, HMAccessorySettingsContainerInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) HMAccessorySettingsController *accessorySettingsController; // ivar: _accessorySettingsController
@property (retain, nonatomic) HMAccessorySettingsDataSource *accessorySettingsDataSource; // ivar: _accessorySettingsDataSource
@property (retain, nonatomic) HMApplicationData *applicationData; // ivar: _applicationData
@property (retain) HMMediaDestination *audioDestination; // ivar: _audioDestination
@property (readonly, copy) NSUUID *audioDestinationGroupIdentifier;
@property (readonly, copy) NSString *audioDestinationIdentifier;
@property (readonly, copy) NSArray *audioDestinationMediaProfiles;
@property (readonly, copy) NSString *audioDestinationName;
@property (readonly, copy) NSString *audioDestinationParentIdentifier;
@property (readonly) NSInteger audioDestinationType;
@property (readonly, nonatomic) HMAccessoryCategory *category;
@property (readonly, nonatomic, getter=isCompatible) BOOL compatible; // ivar: _compatible
@property (readonly, nonatomic) NSArray *components;
@property (retain, nonatomic) HMMutableArray *componentsArray; // ivar: _componentsArray
@property (readonly, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (readonly, weak) HMHome *containerHome;
@property (readonly, weak) NSUUID *containerUUID;
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMMediaSystemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy) HMMediaSession *mediaSession;
@property (retain, nonatomic) HMAccessorySettingsAdapter *mediaSystemSettingsAdapter; // ivar: _mediaSystemSettingsAdapter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) HMAccessorySettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly) BOOL supportsAudioDestination;
@property (readonly) BOOL supportsAudioGroup;
@property (readonly, nonatomic) BOOL supportsMessagedHomepodSettings;
@property (readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)mediaSystemWithDictionary:(id)arg0 home:(id)arg1 ;
-(BOOL)_mergeApplicationDataWithNewMediaSystem:(id)arg0 ;
-(BOOL)_mergeComponentsWithNewMediaSystem:(id)arg0 ;
-(BOOL)_mergeLegacySettingsWithNewMediaSystem:(id)arg0 ;
-(BOOL)_mergeNameWithNewMediaSystem:(id)arg0 ;
-(BOOL)_mergeSettingsWithNewMediaSystem:(id)arg0 ;
-(BOOL)_mergeWithNewMediaSystem:(id)arg0 isFromSerializedData:(BOOL)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 isFromSerializedData:(BOOL)arg1 ;
-(BOOL)configureSettingsAdaptorIfNeeded;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeAudioDestinationWithNewMediaSystem:(id)arg0 ;
-(BOOL)mergeSupportsMessagedHomepodSettingsWithNewMediaSystem:(id)arg0 ;
-(id)componentAddBlock:(SEL)arg0 ;
-(id)componentRemoveBlock:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHome:(id)arg0 uuid:(id)arg1 name:(id)arg2 configuredName:(id)arg3 compatible:(BOOL)arg4 components:(id)arg5 settings:(id)arg6 ;
-(id)logIdentifier;
-(id)targetAccessoryIdentifierBySerial;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_handleRootSettingsUpdated:(id)arg0 ;
-(void)_handleSystemUpdatedNotification:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateAccessoryReference;
-(void)_updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)adapter:(id)arg0 didUpdatePreferredMediaUserUUIDString:(id)arg1 selectionType:(NSUInteger)arg2 ;
-(void)adapter:(id)arg0 didUpdateSettingKeyPaths:(id)arg1 ;
-(void)adapter:(id)arg0 didUpdateSettings:(id)arg1 ;
-(void)callCompletionHandler:(id)arg0 ;
// -(void)callCompletionHandler:(id)arg0 error:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyDelegateOfUpdatedApplicationData:(id)arg0 ;
-(void)notifyDelegateOfUpdatedAudioDestination;
-(void)notifyDelegateOfUpdatedComponents:(id)arg0 ;
-(void)notifyDelegateOfUpdatedConfiguredName:(id)arg0 ;
-(void)notifyDelegateOfUpdatedMediaSession:(id)arg0 ;
-(void)notifyDelegateOfUpdatedName:(id)arg0 ;
-(void)notifyDelegateOfUpdatedSettings:(id)arg0 ;
-(void)postConfigure;
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateAudioDestinationSupportedOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)updateComponentsSettingsAdapterToSettingReflected;
-(void)updateMediaSession:(id)arg0 forMediaProfile:(id)arg1 ;
-(void)updateSettingWithKeyPath:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif