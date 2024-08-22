// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEMEDIASYSTEMHANDLER_H
#define HMDHOMEMEDIASYSTEMHANDLER_H

@class HMFObject, NSMutableDictionary, NSString, NSArray, HMFMessageDispatcher, NSNotificationCenter, NSUUID;
@protocol HMDDevicePreferenceDataSource, HMDStereoPairSettingsControllerDataSource, HMDHomeMediaSystemControllerMessageHandlerDelegate, HMDMediaSystemDataSource, NSSecureCoding, HMFLogging, HMDHomeMediaSystemHandlerDataSource, HMDHomeMediaSystemHandlerDelegate, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDHomeMediaSystemControllerMessageHandler.h"
#import "HMDStereoPairSettingsController.h"

@interface HMDHomeMediaSystemHandler : HMFObject <HMDDevicePreferenceDataSource, HMDStereoPairSettingsControllerDataSource, HMDHomeMediaSystemControllerMessageHandlerDelegate, HMDMediaSystemDataSource, NSSecureCoding, HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_uuidToMediaSystems;
}


@property (weak) NSObject<HMDHomeMediaSystemHandlerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDHomeMediaSystemHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, copy) NSArray *mediaSystems;
@property (retain) HMDHomeMediaSystemControllerMessageHandler *messageHandler; // ivar: _messageHandler
@property (retain, nonatomic) HMFMessageDispatcher *messsageDispatcher; // ivar: _messsageDispatcher
@property (retain) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain) NSUUID *parentUUID; // ivar: _parentUUID
@property (retain, nonatomic) HMDStereoPairSettingsController *stereoPairSettingsController; // ivar: _stereoPairSettingsController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)supportsDeviceWithCapabilities:(id)arg0 ;
-(id)_currentMediaSystemIfPrimary;
-(id)attributeDescriptions;
-(id)backingStoreObjectsForVersion:(NSInteger)arg0 ;
-(id)destinationForMediaSystem:(id)arg0 ;
-(id)eventForwarder;
-(id)eventStoreReadHandle;
-(id)filteredMediaSystems;
-(id)identifiersInMediaSystemData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaSystems:(id)arg0 ;
-(id)localAndRemoteSubscriptionProvider;
-(id)logIdentifier;
-(id)mediaSystemData:(id)arg0 withIdentifier:(id)arg1 ;
-(id)mediaSystemForAccessory:(id)arg0 ;
-(id)mediaSystemWithUUID:(id)arg0 ;
-(id)privateDescription;
-(id)processedMediaSystemBuilderMessageFor:(id)arg0 ;
-(id)uuidToMediaSystems;
-(void)_handleAddMediaSystemModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveMediaSystemModel:(id)arg0 message:(id)arg1 ;
-(void)_handleUpdateMediaSystemModel:(id)arg0 message:(id)arg1 ;
-(void)_userAssistantAccessControlDidUpdate:(id)arg0 accessories:(id)arg1 ;
-(void)addMediaSystem:(id)arg0 ;
-(void)addMediaSystemWithGroupIdentifier:(id)arg0 usingData:(id)arg1 ;
-(void)addMediaSystemsWithIdentifiers:(id)arg0 usingData:(id)arg1 ;
-(void)configure:(id)arg0 delegate:(id)arg1 dataSource:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 ;
-(void)confirmPrimaryResidentIfFirstMediaSystem;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleRemovedMediaSystem:(id)arg0 ;
-(void)mergeMediaSystemData:(id)arg0 ;
-(void)messageHandlerAddMediaSystem:(id)arg0 configuredName:(id)arg1 leftUUID:(id)arg2 leftAccessoryUUID:(id)arg3 rightUUID:(id)arg4 rightAccessoryUUID:(id)arg5 builderSession:(id)arg6 completion:(id)arg7 ;
-(void)messageHandlerRemoveMediaSystem:(id)arg0 builderSession:(id)arg1 message:(id)arg2 ;
-(void)messageHandlerUpdateMediaSystem:(id)arg0 configuredName:(id)arg1 leftUUID:(id)arg2 leftAccessoryUUID:(id)arg3 rightUUID:(id)arg4 rightAccessoryUUID:(id)arg5 builderSession:(id)arg6 completion:(id)arg7 ;
-(void)notifyOfRemovedMediaSystem:(id)arg0 ;
-(void)removeMediaSystem:(id)arg0 ;
-(void)routeMediaSystemWithMessage:(id)arg0 ;
-(void)subscribeToSettingsForNewlyAddedMediaSystem:(id)arg0 ;
-(void)unsubscribeToSettingsForMediaSystem:(id)arg0 ;
-(void)updateMediaSystem:(id)arg0 ;


@end


#endif