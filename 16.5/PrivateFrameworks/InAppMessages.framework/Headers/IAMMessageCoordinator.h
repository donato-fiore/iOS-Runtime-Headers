// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IAMMESSAGECOORDINATOR_H
#define IAMMESSAGECOORDINATOR_H

@class NSMutableDictionary, NSMutableArray, NSDictionary, NSDate, NSString;
@protocol IAMImpressionManagerDelegate, IAMStorageCoordinatorDelegate, IAMEventReceiver, OS_dispatch_queue, IAMApplicationContextProvider, IAMMessageMetricsDelegate;

#import <Foundation/Foundation.h>

#import "IAMImpressionManager.h"
#import "IAMStorageCoordinator.h"
#import "IAMMessageEntryManager.h"
#import "IAMModalTarget.h"

@interface IAMMessageCoordinator : NSObject <IAMImpressionManagerDelegate, IAMStorageCoordinatorDelegate, IAMEventReceiver>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_messageTargetsByTargetIdentifier;
    NSMutableDictionary *_messageTargetsRequiringNilPriorityMessageNotificationAfterRegistrationByTargetIdentifier;
    NSMutableDictionary *_priorityMessageEntryByTargetIdentifier;
    IAMImpressionManager *_impressionManager;
    NSMutableArray *_pendingTriggerContexts;
    IAMStorageCoordinator *_storageCoordinator;
    NSDictionary *_metadataEntryByMessageIdentifier;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupNormal;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupRestricted;
    IAMMessageEntryManager *_messageEntryManager;
    BOOL _isReadyToEvaluateMessages;
    NSString *_modalTargetIdentifier;
    IAMModalTarget *_modalTarget;
    NSDictionary *_messageGroupsByGroupIdentifier;
    NSMutableDictionary *_completionHandlersForObservedEvents;
}


@property (weak, nonatomic) NSObject<IAMApplicationContextProvider> *applicationContext; // ivar: _applicationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<IAMMessageMetricsDelegate> *metricsDelegate; // ivar: _metricsDelegate
@property (readonly) Class superclass;


+(id)_createMessageFromMessageEntry:(id)arg0 replacingResourcePathsWithCachedResourceLocations:(BOOL)arg1 ;
+(void)initialize;
-(id)_dequeuePendingTriggerContexts;
-(id)_filterActiveTargetIdentifiers:(id)arg0 ;
-(id)_messageBundleIdentifiers;
-(id)_metadataEntryForMessageIdentifier:(id)arg0 ;
-(id)beginObservingTriggerEvent:(id)arg0 withHandler:(id)arg1 ;
-(id)init;
-(void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)arg0 ;
-(void)_enqueuePendingTriggerContext:(id)arg0 ;
-(void)_evaluateMessagesForAllActiveTargets;
-(void)_fetchMessagesAndMetadataFromStorageCoordinator:(id)arg0 ;
-(void)_handleMessageReachedMaximumDisplayCount:(id)arg0 ;
-(void)_handleUpdatedMessageEntries:(id)arg0 andMetadata:(id)arg1 ;
-(void)_incrementNumberOfDisplaysForMessageEntry:(id)arg0 ;
-(void)_notifyMessageTargets:(id)arg0 withTargetIdentifier:(id)arg1 didUpdatePriorityMessageFromEntry:(id)arg2 observedEventName:(id)arg3 ;
-(void)_processObservedEventCallbacksforEventName:(id)arg0 willTriggerPresentation:(BOOL)arg1 messageIdentifier:(id)arg2 ;
-(void)_reevaluateMessageEntries:(id)arg0 forTargetIdentifier:(id)arg1 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)arg2 withObservedEventName:(id)arg3 ;
-(void)_reevaluateTargetsWithIdentifiers:(id)arg0 forTriggerContext:(id)arg1 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)arg2 ;
-(void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)arg0 ;
-(void)_reportHoldoutMessageWouldAppear:(id)arg0 ;
-(void)_reportMessageAction:(id)arg0 wasPerformedInMessageEntry:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)_setMessageGroups:(id)arg0 ;
-(void)_startStorageCoordinatorWithMessageEntryProvider:(id)arg0 messageMetadataStorage:(id)arg1 propertyStorage:(id)arg2 ;
-(void)_updateLastDisplayTime:(id)arg0 forMessageEntry:(id)arg1 ;
-(void)_updateMetadata:(id)arg0 forMessageEntry:(id)arg1 completion:(id)arg2 ;
-(void)_updateMetadataOfMessageEntriesByTrigger:(id)arg0 forReceivedEvent:(id)arg1 ;
-(void)_updatePriorityMessageEntry:(id)arg0 forTargetIdentifier:(id)arg1 shouldNotifyTargetsIfNonNil:(BOOL)arg2 observedEventName:(id)arg3 ;
-(void)dealloc;
-(void)endObservingTriggerEvent:(id)arg0 forToken:(id)arg1 ;
-(void)impressionManager:(id)arg0 impressionDidEndForMessageEntry:(id)arg1 ;
-(void)impressionManager:(id)arg0 shouldReportImpressionEventWithDictionary:(id)arg1 ;
-(void)receiveEvent:(id)arg0 ;
-(void)receiveTriggerEventContext:(id)arg0 ;
-(void)registerMessageTarget:(id)arg0 ;
-(void)reportApplicationContextPropertiesDidChange:(id)arg0 ;
-(void)reportChangedContextPropertiesContext:(id)arg0 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg0 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg0 fromTargetWithIdentifier:(id)arg1 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg0 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg0 fromTargetWithIdentifier:(id)arg1 ;
-(void)reportMessageWithIdentifier:(id)arg0 actionWasPerformedWithIdentifier:(id)arg1 ;
-(void)reportMessageWithIdentifier:(id)arg0 actionWasPerformedWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)reportMetricsEvent:(id)arg0 ;
-(void)start;
-(void)startWithApplicationContext:(id)arg0 ;
-(void)startWithApplicationContext:(id)arg0 messageGroups:(id)arg1 ;
-(void)startWithApplicationContext:(id)arg0 messageGroups:(id)arg1 messageEntryProvider:(id)arg2 messageMetadataStorage:(id)arg3 propertyStorage:(id)arg4 ;
-(void)storageCoordinatorMessageEntriesChanged:(id)arg0 ;
-(void)triggerPresentationForMessageWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)unregisterMessageTarget:(id)arg0 ;


@end


#endif