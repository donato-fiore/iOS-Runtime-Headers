// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLOUDSYNCOBSERVER_H
#define HKCLOUDSYNCOBSERVER_H

@class NSUUID, NSProgress, NSString;
@protocol _HKXPCExportable, HKCloudSyncObserverClientInterface, HKCloudSyncObserverDelegate;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"
#import "HKCloudSyncObserverStatus.h"

@interface HKCloudSyncObserver : NSObject <_HKXPCExportable, HKCloudSyncObserverClientInterface>

 {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    NSProgress *_progress;
    HKCloudSyncObserverStatus *_status;
    id<HKCloudSyncObserverDelegate> *_delegate;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKCloudSyncObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKCloudSyncObserverStatus *status;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 delegate:(id)arg1 ;
-(id)progress;
-(id)remoteInterface;
-(void)_clientQueue_didCompleteSyncWithStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)clientRemote_didFailToPopulateStatusWithError:(id)arg0 ;
-(void)clientRemote_didUpdateObserverWithSyncStatus:(id)arg0 ;
-(void)clientRemote_syncDidStart;
-(void)connectionInvalidated;
-(void)setProgress:(id)arg0 ;
-(void)startObservingSyncStatus;
-(void)startSyncIfRestoreNotCompleted;


@end


#endif