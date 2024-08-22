// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMAINDRIVER_H
#define HMDMAINDRIVER_H

@class HMDCoreData, NSString, HMBLocalDatabase;
@protocol HMFLogging, HMDRelaunchHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDAccessoryBrowser.h"
#import "HMDCloudManager.h"
#import "HMDHomeManager.h"
#import "HMDMetricsManager.h"
#import "HMDRetailDemoModeRequestHandler.h"
#import "HMDUpdater.h"

@interface HMDMainDriver : NSObject <HMFLogging, HMDRelaunchHandling>



@property (retain, nonatomic) HMDAccessoryBrowser *accessoryBrowser; // ivar: _accessoryBrowser
@property (retain, nonatomic) HMDCloudManager *cloudDataSyncManager; // ivar: _cloudDataSyncManager
@property (readonly, nonatomic) HMDCoreData *coreData; // ivar: _coreData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) HMBLocalDatabase *localDatabase; // ivar: _localDatabase
@property (readonly, nonatomic) HMDMetricsManager *metricsManager; // ivar: _metricsManager
@property (retain, nonatomic) HMDRetailDemoModeRequestHandler *retailDemoModeRequestHandler; // ivar: _retailDemoModeRequestHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) HMDUpdater *updater; // ivar: _updater
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)driver;
+(id)getLocalStoreFrom:(id)arg0 ;
+(id)loadHomeDataFromLocalStore:(*id)arg0 decryptionFailed:(*BOOL)arg1 ;
+(id)loadHomeDataFromLocalStore:(*id)arg0 fromLocation:(id)arg1 decryptionFailed:(*BOOL)arg2 forHH2Migration:(BOOL)arg3 ;
+(id)loadSQLArchiveWithDecryptionFail:(*BOOL)arg0 fromLocation:(id)arg1 forHH2Migration:(BOOL)arg2 error:(*id)arg3 ;
+(id)logCategory;
-(id)init;
-(void)executeBTAJob:(char *)arg0 withXPCDict:(id)arg1 ;
-(void)initBackgroundTaskAgent;
-(void)localeChanged;
-(void)relaunch;
-(void)relaunchAfterDelay:(CGFloat)arg0 ;
-(void)relaunchHomed;
-(void)start;


@end


#endif