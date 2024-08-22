// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMODELESSSYNCCONTROLLER_H
#define SBMODELESSSYNCCONTROLLER_H

@class ATConnection;

#import <Foundation/Foundation.h>


@interface SBModelessSyncController : NSObject {
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    BOOL _restoringFromICloud;
    ATConnection *_airTrafficConnection;
}


@property (readonly, nonatomic) BOOL isAppSyncing; // ivar: _isAppSyncing
@property (readonly, nonatomic) BOOL isAutoSyncing; // ivar: _isAutoSyncing
@property (readonly, nonatomic) BOOL isRestoringFromICloud;
@property (readonly, nonatomic) BOOL isSyncing; // ivar: _isSyncing
@property (readonly, nonatomic) BOOL isWirelessSyncing; // ivar: _isWirelessSyncing


+(id)sharedInstance;
-(id)init;
-(void)_appSyncStateChanged;
-(void)_beginObservingICloudRestoreStatus;
-(void)_endObservingICloudRestoreStatus;
-(void)_iCloudStatusChanged;
-(void)_setAppSyncState:(BOOL)arg0 ;
-(void)_updateIconsForStateChange;
-(void)beginMonitoring;
-(void)connection:(id)arg0 updatedProgress:(id)arg1 ;
-(void)connectionWasInterrupted:(id)arg0 ;
-(void)dealloc;
-(void)endMonitoring;
-(void)gotLowBatteryWarning;


@end


#endif