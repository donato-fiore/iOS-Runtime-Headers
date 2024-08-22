// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDTARGETCONTROLMANAGER_H
#define HMDTARGETCONTROLMANAGER_H

@class HMFObject, NSMutableArray, NSString;
@protocol HMFLogging, HMFLocking, OS_dispatch_queue;


#import "HMDSiriServer.h"
#import "HMDAccessory.h"

@interface HMDTargetControlManager : HMFObject <HMFLogging>

 {
    id<HMFLocking> *_lock;
}


@property (readonly, nonatomic) NSMutableArray *activeControlServices; // ivar: _activeControlServices
@property (readonly, nonatomic) NSMutableArray *configuredControllers; // ivar: _configuredControllers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *eventReceivers; // ivar: _eventReceivers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logID; // ivar: _logID
@property (retain, nonatomic) HMDSiriServer *siriServer; // ivar: _siriServer
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) HMDAccessory *targetAccessory; // ivar: _targetAccessory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)__getOrCreateEventReceiver:(id)arg0 ;
-(id)__selectButtonConfiguration:(id)arg0 receiver:(id)arg1 ;
-(id)init;
-(id)initWithTargetAccessory:(id)arg0 controllers:(id)arg1 ;
-(id)logIdentifier;
-(void)__accessoryAdded:(id)arg0 ;
-(void)__accessoryConnected:(id)arg0 ;
-(void)__accessoryDisconnected:(id)arg0 ;
-(void)__accessoryNameUpdated:(id)arg0 ;
-(void)__accessoryRemoved:(id)arg0 ;
-(void)__activeSelectionChanged:(id)arg0 ;
-(void)__activeSelectionReset:(id)arg0 ;
-(void)__characteristicsEventsReceived:(id)arg0 ;
-(void)__controllerRefreshedConfiguration:(id)arg0 ;
-(void)__serviceRemoved:(id)arg0 ;
-(void)__targetAccessoryConfiguredForControl:(id)arg0 ;
-(void)__targetAccessoryUnconfiguredForControl:(id)arg0 ;
-(void)_addController:(id)arg0 ;
-(void)_handleButtonEvent:(id)arg0 fromControlService:(id)arg1 ;
-(void)_handleControllerDisconnected:(id)arg0 ;
-(void)_handleTargetControlServiceDeselection:(id)arg0 ;
-(void)_handleTargetControlServiceSelection:(id)arg0 ;
-(void)_removeController:(id)arg0 ;
-(void)_targetAccessoryConfiguredWithController:(id)arg0 ;
-(void)_targetAccessoryRefreshConfigurationWithController:(id)arg0 userInfo:(id)arg1 ;
-(void)_targetAccessoryUnconfiguredWithController:(id)arg0 ;
-(void)addControlService:(id)arg0 ;
-(void)addReceiver:(id)arg0 ;
-(void)addTargetControllers:(id)arg0 ;
-(void)invalidate;
-(void)removeControlService:(id)arg0 ;
-(void)removeReceiver:(id)arg0 ;


@end


#endif