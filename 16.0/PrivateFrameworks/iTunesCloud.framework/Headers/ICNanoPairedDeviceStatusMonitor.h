// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNANOPAIREDDEVICESTATUSMONITOR_H
#define ICNANOPAIREDDEVICESTATUSMONITOR_H

@class NSMapTable, NSString, PSYInitialSyncStateObserver, NSUUID, NSArray;
@protocol PSYInitialSyncStateObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICNanoPairedDeviceStatusMonitor : NSObject <PSYInitialSyncStateObserverDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    NSMapTable *_observers;
    NSString *_pairingIDPropertyName;
    NSString *_pairedDeviceGUID;
    NSString *_pairedDeviceMediaGUID;
    PSYInitialSyncStateObserver *_initialSyncStateObserver;
}


@property (readonly, copy, nonatomic) NSUUID *activePairedDevicePairingID;
@property (readonly, copy, nonatomic) NSArray *allPairedDevicePairingIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInitialSyncComplete;
@property (readonly, nonatomic, getter=isMediaSyncingSupported) BOOL mediaSyncingSupported;
@property (readonly, copy, nonatomic) NSString *pairedDeviceGUID;
@property (readonly, copy, nonatomic) NSString *pairedDeviceMediaGUID;
@property (readonly, copy, nonatomic) NSUUID *pairedDevicePairingID;
@property (readonly) Class superclass;


+(id)sharedMonitor;
-(id)_activePairedDevice;
-(id)_allObservers;
-(id)_init;
-(void)_handlePairedDeviceChangedNotification;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)deviceBecameActive:(id)arg0 ;
-(void)initialSyncStateObserver:(id)arg0 initialSyncDidCompleteForPairingIdentifier:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif