// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENEXPOSUREDETECTIONMANAGER_H
#define ENEXPOSUREDETECTIONMANAGER_H

@class ENXPCServiceClient, NSBackgroundActivityScheduler;
@protocol OS_dispatch_queue, ENExposureDetectionManagerDelegate;

#import <Foundation/Foundation.h>

#import "ENConfigurationStore.h"
#import "ENDownloadManager.h"
#import "ENExposureDatabase.h"

@interface ENExposureDetectionManager : NSObject {
    ENConfigurationStore *_configurationStore;
    ENDownloadManager *_downloadManager;
    ENExposureDatabase *_exposureDatabase;
    ENXPCServiceClient *_xpcServiceClient;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    BOOL _activated;
}


@property (weak, nonatomic) NSObject<ENExposureDetectionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSBackgroundActivityScheduler *detectionScheduler; // ivar: _detectionScheduler
@property (nonatomic) BOOL enableNativeExposureDetection; // ivar: _enableNativeExposureDetection
@property (nonatomic) BOOL scheduleDetectionAutomatically; // ivar: _scheduleDetectionAutomatically


-(BOOL)_applyRegionalConfigurationToDetectionSession:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(BOOL)_scheduleNativeExposureDetection;
-(NSInteger)_processFileAtURL:(id)arg0 publicKey:(id)arg1 endpoint:(id)arg2 session:(id)arg3 error:(*id)arg4 ;
-(id)_createDetectionSessionWithError:(*id)arg0 ;
-(id)_getDelegateWithError:(*id)arg0 ;
-(id)_publicKeyForRegion:(id)arg0 dictionary:(id)arg1 ;
-(id)createDetectionSessionForClient:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)createFileSession;
-(id)createNativeDetectionSessionWithError:(*id)arg0 ;
-(id)createScheduler;
-(id)createXPCServiceClient;
-(id)initWithConfigurationStore:(id)arg0 downloadManager:(id)arg1 exposureDatabase:(id)arg2 queue:(id)arg3 ;
-(void)_activate;
-(void)_downloadsDidBecomeAvailable:(id)arg0 ;
-(void)_exposureDetectionSession:(id)arg0 finishedWithResult:(id)arg1 ;
-(void)_invalidate;
-(void)_performNativeExposureDetectionWithScheduler:(id)arg0 resultHandler:(id)arg1 ;
-(void)_scheduleNativeExposureDetectionForced:(BOOL)arg0 ;
-(void)_unscheduleNativeExposureDetection;
-(void)activate;
-(void)invalidate;
-(void)performNativeExposureDetectionWithResultHandler:(id)arg0 ;
-(void)scheduleNativeExposureDetectionForced:(BOOL)arg0 ;


@end


#endif