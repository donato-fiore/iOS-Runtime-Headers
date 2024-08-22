// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDONTOLOGYASSETMANAGER_H
#define HDONTOLOGYASSETMANAGER_H

@class _HKMobileAssetDownloadManager, HKObserverSet<HDOntologyAssetAvailabilityObserver>, MAAsset, NSMutableDictionary, NSURL, NSString;
@protocol HDPeriodicActivityDelegate, HDOntologyAssetProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"
#import "HDPeriodicActivity.h"

@interface HDOntologyAssetManager : NSObject <HDPeriodicActivityDelegate, HDOntologyAssetProvider>

 {
    _HKMobileAssetDownloadManager *_assetDownloadManager;
    NSObject<OS_dispatch_queue> *_downloadManagerCallbackQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    os_unfair_lock_s _ivarLock;
    int _notificationRegistrationToken;
    HKObserverSet<HDOntologyAssetAvailabilityObserver> *_observers;
    MAAsset *_latestOntologyAsset;
    NSMutableDictionary *_completionsByActivityName;
    HDDaemon *_daemon;
}


@property (copy, nonatomic) id *AWDMetricPosterBlock; // ivar: _AWDMetricPosterBlock
@property (nonatomic) BOOL assetDownloadEnabled; // ivar: _assetDownloadEnabled
@property (readonly, copy, nonatomic) NSURL *assetFileURL;
@property (readonly, nonatomic) NSInteger assetFileVersion;
@property (retain, nonatomic) HDPeriodicActivity *catalogUpdatePeriodicActivity; // ivar: _catalogUpdatePeriodicActivity
@property (retain, nonatomic) MAAsset *currentOntologyAsset; // ivar: _currentOntologyAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger simulatedCompatibilityVersion; // ivar: _simulatedCompatibilityVersion
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_newMobileAssetDownloadManagerHandler; // ivar: _unitTesting_newMobileAssetDownloadManagerHandler


-(BOOL)clearUserDefaultOverrideAssetFileURLWithError:(*id)arg0 ;
-(id)initWithDaemon:(id)arg0 ;
-(id)setUserDefaultOverrideAssetFileURL:(id)arg0 error:(*id)arg1 ;
-(void)addAssetAvailabilityObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidateAndWait;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)removeAssetAvailabilityObserver:(id)arg0 ;


@end


#endif