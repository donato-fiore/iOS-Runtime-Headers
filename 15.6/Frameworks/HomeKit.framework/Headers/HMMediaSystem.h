// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMEDIASYSTEM_H
#define HMMEDIASYSTEM_H

@class HMFUnfairLock, NSUUID, NSString, NSArray;
@protocol HMFLogging, HMFMessageReceiver, HMControllable, HMMediaDestinationInternal, HMAccessorySettingsContainerInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject, HMMediaSystemDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessorySettingsDataSource.h"
#import "HMApplicationData.h"
#import "HMMediaDestination.h"
#import "HMAccessoryCategory.h"
#import "HMMutableArray.h"
#import "HMHome.h"
#import "_HMContext.h"
#import "HMMediaSession.h"
#import "HMAccessorySettings.h"
#import "HMSymptomsHandler.h"

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, HMControllable, HMMediaDestinationInternal, HMAccessorySettingsContainerInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject>

 {
    HMFUnfairLock *_lock;
}


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
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) HMAccessorySettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly) BOOL supportsAudioDestination;
@property (readonly) BOOL supportsAudioGroup;
@property (readonly, nonatomic) HMSymptomsHandler *symptomsHandler; // ivar: _symptomsHandler
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)mediaSystemWithDictionary:(id)arg0 home:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 includeSettingsAndAppData:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHome:(id)arg0 uuid:(id)arg1 name:(id)arg2 configuredName:(id)arg3 compatible:(BOOL)arg4 components:(id)arg5 settings:(id)arg6 symptomHandler:(id)arg7 ;
-(id)logIdentifier;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_handleRootSettingsUpdated:(id)arg0 ;
-(void)_handleSystemUpdatedNotification:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateAccessoryReference;
-(void)_updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
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
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateAudioDestinationSupportedOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)updateMediaSession:(id)arg0 forMediaProfile:(id)arg1 ;


@end


#endif