// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKSYNCSTATEMANAGER_H
#define NNMKSYNCSTATEMANAGER_H

@class NSString, PSYSyncCoordinator, BLTPingSubscriber;
@protocol PSYSyncCoordinatorDelegate, NNMKSyncStateManager, NNMKSyncStateManagerDelegate;

#import <Foundation/Foundation.h>


@interface NNMKSyncStateManager : NSObject <PSYSyncCoordinatorDelegate, NNMKSyncStateManager>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NNMKSyncStateManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSYSyncCoordinator *initialSyncCoordinator; // ivar: _initialSyncCoordinator
@property (retain, nonatomic) BLTPingSubscriber *notificationsPingSubscriber; // ivar: _notificationsPingSubscriber
@property (readonly) Class superclass;


-(BOOL)isInitialSyncRestricted;
-(BOOL)pairedDeviceSupportsMailContentProtectedChannel;
-(BOOL)pairedDeviceSupportsMultipleMailboxes;
-(BOOL)pairedDeviceSupportsStandaloneMode;
-(BOOL)willPresentNotificationForMessage:(id)arg0 ;
-(id)_bbSubsectionIdsForMessage:(id)arg0 ;
-(id)_pairedNanoRegistryDevice;
-(id)init;
-(id)pairedDeviceScreenScale;
-(id)pairedDeviceScreenSize;
-(id)pairingStorePath;
-(void)_handleDidUnpairNotification:(id)arg0 ;
-(void)_handlePairedDeviceChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)reportInitialSyncDidComplete;
-(void)reportInitialSyncDidCompleteSending;
-(void)reportInitialSyncDidFailWithError:(id)arg0 ;
-(void)reportInitialSyncProgress:(CGFloat)arg0 ;
-(void)syncCoordinator:(id)arg0 beginSyncSession:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didInvalidateSyncSession:(id)arg1 ;


@end


#endif