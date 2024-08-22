// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPACCESSORYSERVERBROWSERIP_H
#define HAPACCESSORYSERVERBROWSERIP_H

@class NSArray, HMFTimer, NSString, NSOperationQueue, NSMutableSet;
@protocol HMFTimerDelegate, HAPPowerManagerProtocol, HAPWACAccessoryBrowserDelegate, HAPAccessoryServerNotification, HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;


#import "HAPAccessoryServerBrowser.h"
#import "HAPWACAccessoryBrowser.h"
#import "HAPPowerManager.h"

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HMFTimerDelegate, HAPPowerManagerProtocol, HAPWACAccessoryBrowserDelegate, HAPAccessoryServerNotification>

 {
    *BonjourBrowser _bonjourBrowser;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (retain, nonatomic) HMFTimer *bonjourEventTimer; // ivar: _bonjourEventTimer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAPAccessoryServerBrowserDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSOperationQueue *delegateOperationQueue; // ivar: _delegateOperationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *discoveredAccessoryServers; // ivar: _discoveredAccessoryServers
@property (retain, nonatomic) HAPWACAccessoryBrowser *hapWACBrowser; // ivar: _hapWACBrowser
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *pendingBonjourEvents; // ivar: _pendingBonjourEvents
@property (retain, nonatomic) HAPPowerManager *powerManager; // ivar: _powerManager
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)recommendBrowserReset;
-(NSInteger)linkType;
-(id)initWithQueue:(id)arg0 ;
-(id)logIdentifier;
-(id)serverWithIdentifier:(id)arg0 ignoreLPM:(BOOL)arg1 ;
-(id)visible2Pt4Networks;
-(id)wacBrowser;
-(int)_initializeAndStartBonjourBrowser;
-(int)_processPendingBonjourEvent:(id)arg0 ;
-(int)_purgePendingBonjourEvents:(id)arg0 withProcessing:(BOOL)arg1 ;
-(int)_server:(*id)arg0 forBonjourDevice:(id)arg1 ;
-(void)_doReachabilityUpdateForServer:(id)arg0 withDictionary:(id)arg1 ;
-(void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg0 ;
-(void)_handleBonjourBrowserEvent:(unsigned int)arg0 eventInfo:(id)arg1 ;
-(void)_handleBonjourRemoveWithEventInfo:(id)arg0 ;
-(void)_invalidateAccessoryServers:(BOOL)arg0 ;
-(void)_invalidateAndRemoveAccessoryServer:(id)arg0 ;
-(void)_invalidateWACServers;
-(void)_matchAccessoryServerWithSetupID:(id)arg0 serverIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)_pendBonjourEvent:(id)arg0 ;
-(void)_pendBonjourRemoveEvent:(id)arg0 ;
-(void)_server:(*id)arg0 forHAPWACAccessory:(id)arg1 ;
-(void)_setReachability:(BOOL)arg0 forServer:(id)arg1 ;
-(void)_timerDidExpire:(id)arg0 ;
-(void)devicePowerStateChanged:(NSUInteger)arg0 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)indicateNotificationFromServer:(id)arg0 notifyType:(NSUInteger)arg1 withDictionary:(id)arg2 ;
-(void)matchAccessoryServerWithSetupID:(id)arg0 serverIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg0 error:(id)arg1 ;
// -(void)pendDelegateBlock:(id)arg0 identifier:(unk)arg1  ;
-(void)pendDelegateOperation:(id)arg0 identifier:(id)arg1 ;
-(void)processPendingBonjourRemoveEvents:(id)arg0 ;
-(void)processPendingBonjourRemoveEventsForDeviceID:(id)arg0 ;
-(void)startDiscoveringAccessoryServers;
-(void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg0 ;
-(void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg0 ;
-(void)startDiscoveringWACAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)stopDiscoveringWACAccessoryServersWithInvalidation:(BOOL)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)unitTest_handleBonjourBrowserEvent:(unsigned int)arg0 eventInfo:(id)arg1 ;
-(void)wacBrowser:(id)arg0 didFindHAPWACAccessory:(id)arg1 ;
-(void)wacBrowser:(id)arg0 didFindUnconfiguredPairedHAPWACAccessory:(id)arg1 ;
-(void)wacBrowser:(id)arg0 didRemoveHAPWACAccessory:(id)arg1 ;


@end


#endif