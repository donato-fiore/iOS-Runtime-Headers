// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATCONNECTION_H
#define ATCONNECTION_H

@class NSXPCConnection, NSMutableArray, NSString;
@protocol ATConnectionDelegate;

#import <Foundation/Foundation.h>


@interface ATConnection : NSObject <ATConnectionDelegate>

 {
    NSXPCConnection *_xpcConnection;
    BOOL _registerForStatus;
    NSMutableArray *_registeredDataclasses;
    int _atcRunningToken;
    BOOL _atcRunning;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getDataRestoreIsComplete;
-(BOOL)isSyncing:(*BOOL)arg0 automatically:(*BOOL)arg1 wirelessly:(*BOOL)arg2 ;
-(id)getAssetMetrics;
-(id)init;
-(id)restoreDeviceWithIdentifier:(id)arg0 ;
-(void)_handleDisconnect;
-(void)_sendStatusRegistrationWithCompletion:(id)arg0 ;
-(void)cancelSync;
-(void)clearSyncData;
-(void)connection:(id)arg0 updatedAssets:(id)arg1 ;
-(void)connection:(id)arg0 updatedProgress:(id)arg1 ;
-(void)connectionWasInterrupted:(id)arg0 ;
-(void)dealloc;
-(void)initiateAssetDownloadSessionsWithCompletion:(id)arg0 ;
-(void)keepATCAlive:(BOOL)arg0 ;
-(void)lowBatteryNotification;
-(void)openDeviceMessageLink;
-(void)openDeviceMessageLinkWithPriority:(int)arg0 ;
-(void)prioritizeAsset:(id)arg0 forDataclass:(id)arg1 ;
-(void)purgePartialAsset:(id)arg0 forDataclass:(id)arg1 ;
-(void)registerForAssetProgressForDataclass:(id)arg0 ;
-(void)registerForStatus;
-(void)requestKeybagSyncToPairedDevice;
-(void)requestSyncForLibrary:(id)arg0 ;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg0 ;
-(void)unregisterForStatus;


@end


#endif