// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATDEVICEPAIREDSYNCMANAGER_H
#define ATDEVICEPAIREDSYNCMANAGER_H

@class NSString;
@protocol ICNanoPairedDeviceStatusObserver, ATMessageLinkObserver, ATSessionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATDeviceService.h"

@interface ATDevicePairedSyncManager : NSObject <ICNanoPairedDeviceStatusObserver, ATMessageLinkObserver, ATSessionObserver>

 {
    ATDeviceService *_deviceService;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedPairedSyncManager;
-(BOOL)hasRestriction;
-(id)init;
-(void)_cleanupSyncState;
-(void)_setInstallDateIfNeededForBundleID:(id)arg0 ;
-(void)_triggerInitialSync;
-(void)nanoPairedDeviceStatusMonitor:(id)arg0 didChangeClientSyncState:(NSUInteger)arg1 ;
-(void)nanoPairedDeviceStatusMonitor:(id)arg0 didFinishInitialSyncForPairingIdentifier:(id)arg1 ;
-(void)nanoPairedDeviceStatusMonitorNewActiveDevice:(id)arg0 ;
-(void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif