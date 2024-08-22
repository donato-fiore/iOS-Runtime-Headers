// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSTEREOPAIRSETTINGSCONTROLLER_H
#define HMDSTEREOPAIRSETTINGSCONTROLLER_H

@class HMFObject, NSString, NSArray, NSMutableDictionary;
@protocol HMDCompositeSettingControllerManagerStateManagerDataSource, HMEEventConsumer, HMFLogging, HMDCompositeSettingControllerManagerStateTransitionDelegate, HMDStereoPairSettingsControllerDataSource, HMDCompositeSettingControllerManagerStateManager, OS_dispatch_queue;



@interface HMDStereoPairSettingsController : HMFObject <HMDCompositeSettingControllerManagerStateManagerDataSource, HMEEventConsumer, HMFLogging, HMDCompositeSettingControllerManagerStateTransitionDelegate>



@property (weak, nonatomic) NSObject<HMDStereoPairSettingsControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *homes;
@property (retain, nonatomic) NSObject<HMDCompositeSettingControllerManagerStateManager> *residentRunStateManager; // ivar: _residentRunStateManager
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *topicToLastReceivedEvent; // ivar: _topicToLastReceivedEvent
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_currentDevicePrimaryResident;
-(id)_groupOwnerTopicsForMediaSystem:(id)arg0 ;
-(id)_homeUUID;
-(id)_mediaSystemGroupOwnerAccessoryUUID:(id)arg0 ;
-(id)_mediaSystemWithAccessorryUUID:(id)arg0 ;
-(id)_mediaSystems;
-(id)initWithDataSource:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 workQueue:(id)arg1 stateManagerFactory:(id)arg2 ;
-(id)logIdentifier;
-(id)mediaSystemGroupOwner:(id)arg0 ;
-(void)_postAsStereoPairEventsIfDifferentForHome:(id)arg0 mediaSystem:(id)arg1 keyPath:(id)arg2 setting:(id)arg3 ;
-(void)_processReceivedEvent:(id)arg0 topic:(id)arg1 home:(id)arg2 mediaSystem:(id)arg3 ;
-(void)_subscribeToAddedMediaSystem:(id)arg0 ;
-(void)_unsubscribeToRemovedMediaSystem:(id)arg0 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)didUpdateCurrentRunState:(NSInteger)arg0 updatedState:(NSInteger)arg1 forHome:(id)arg2 ;
-(void)pushLastEvent:(id)arg0 topic:(id)arg1 ;
-(void)startIfPrimaryResident;
-(void)stopIfPrimaryResidentChange;
-(void)subscribeToAddedMediaSystemIfPrimaryResident:(id)arg0 ;
-(void)unsubscribeToRemovedMediaSystemIfPrimaryResident:(id)arg0 ;


@end


#endif