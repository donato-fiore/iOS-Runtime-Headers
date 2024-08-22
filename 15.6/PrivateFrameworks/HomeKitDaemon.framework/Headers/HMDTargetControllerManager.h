// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDTARGETCONTROLLERMANAGER_H
#define HMDTARGETCONTROLLERMANAGER_H

@class HMFObject, NSArray, NSMutableSet, NSString;
@protocol HMFLogging, HMFLocking, OS_dispatch_queue;


#import "HMDHAPAccessory.h"

@interface HMDTargetControllerManager : HMFObject <HMFLogging>

 {
    id<HMFLocking> *_lock;
}


@property (retain, nonatomic) NSArray *buttonConfiguration; // ivar: _buttonConfiguration
@property (nonatomic) BOOL configurationRefreshed; // ivar: _configurationRefreshed
@property (retain, nonatomic) NSMutableSet *configuredTargets; // ivar: _configuredTargets
@property (readonly, weak, nonatomic) HMDHAPAccessory *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logID; // ivar: _logID
@property (nonatomic) unsigned char maximumTargets; // ivar: _maximumTargets
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *targetUUIDs;
@property (nonatomic) NSUInteger ticksPerSecond; // ivar: _ticksPerSecond
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)__refreshedConfiguration:(id)arg0 ;
-(id)_dataForAddTargets:(id)arg0 outError:(*id)arg1 ;
-(id)_dataForListTargetsWithOutError:(*id)arg0 ;
-(id)_dataForRemoveTargets:(id)arg0 outError:(*id)arg1 ;
-(id)_dataForResetTargetsWithOutError:(*id)arg0 ;
-(id)_dataForUpdateTarget:(id)arg0 name:(id)arg1 buttonConfiguration:(id)arg2 outError:(*id)arg3 ;
-(id)init;
-(id)initWithTargetControllerAccessory:(id)arg0 targets:(id)arg1 ;
-(id)logIdentifier;
-(id)targetConfigurationMatchingAccessory:(id)arg0 ;
-(id)targetConfigurationMatchingIdentifier:(id)arg0 ;
-(int)_parseSupportedTargetConfiguration:(id)arg0 ;
-(void)__accessoryConnected:(id)arg0 ;
-(void)__accessoryDisconnected:(id)arg0 ;
-(void)__accessoryNameUpdated:(id)arg0 ;
-(void)__accessoryRemoved:(id)arg0 ;
-(void)__characteristicEventsReceived:(id)arg0 ;
-(void)__handleActiveIdentifierChange:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)_addTargets:(id)arg0 ;
-(void)_auditTargets:(id)arg0 ;
-(void)_configureTargetAccessories:(id)arg0 reason:(id)arg1 targetAccessories:(id)arg2 responseHandler:(id)arg3 ;
-(void)_handleActiveIdentifierReadResponses:(id)arg0 ;
-(void)_handleConfigureTargets:(id)arg0 responseHandler:(id)arg1 ;
-(void)_listTargetsWithCompletionHandler:(id)arg0 ;
-(void)_notifyConfigurationRefresh:(id)arg0 ;
-(void)_postSelectionChangeNotification:(BOOL)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(void)_readSupportedConfigurationWithCompletion:(id)arg0 ;
-(void)_refreshConfigurationWithCompletion:(id)arg0 ;
-(void)_registerForActiveIdentifierNotifications;
-(void)_removeTargets:(id)arg0 ;
-(void)_resetTargets;
-(void)_saveTargetUUIDs;
-(void)_updateName:(id)arg0 buttonConfiguration:(id)arg1 target:(id)arg2 ;
-(void)acknowledgeTargetControlService:(id)arg0 active:(BOOL)arg1 ;
-(void)addConfiguredTarget:(id)arg0 ;
-(void)addTargetAccessory:(id)arg0 buttonConfiguration:(id)arg1 ;
-(void)autoConfigureTargets;
-(void)handleConfigureTargets:(id)arg0 responseHandler:(id)arg1 ;
-(void)invalidate;
-(void)refreshConfigurationWithCompletion:(id)arg0 ;
-(void)registerForActiveIdentifierNotifications;
-(void)removeConfiguredTarget:(id)arg0 ;
-(void)removeTargetAccessory:(id)arg0 ;
-(void)updateButtonConfigurationForTarget:(id)arg0 ;
-(void)updateTargetAccessory:(id)arg0 name:(id)arg1 buttonConfiguration:(id)arg2 ;
-(void)updateTargets:(id)arg0 ;


@end


#endif