// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDONTOLOGYUPDATECOORDINATOR_H
#define HDONTOLOGYUPDATECOORDINATOR_H

@class HDXPCGatedActivity, HDAssertion, NSString, NSOperationQueue;
@protocol HDPeriodicActivityDelegate, HDProfileReadyObserver, NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>

#import "HDPeriodicActivity.h"
#import "HDDaemon.h"
#import "HDOntologyShardDownloader.h"
#import "HDOntologyFeatureCoordinator.h"
#import "HDOntologyShardImporter.h"
#import "HDOntologyManifestUpdater.h"
#import "HDPrimaryProfile.h"
#import "HDOntologyShardPruner.h"
#import "HDOntologyShardRegistry.h"

@interface HDOntologyUpdateCoordinator : NSObject <HDPeriodicActivityDelegate, HDProfileReadyObserver, NSURLSessionTaskDelegate>

 {
    HDPeriodicActivity *_periodicActivity;
    HDXPCGatedActivity *_gatedActivity;
    HDXPCGatedActivity *_fallbackActivity;
    HDAssertion *_lock_preparedDatabaseAccessibilityAssertion;
    HDAssertion *_lock_preparedRegistryAssertion;
    os_unfair_lock_s _lock;
    NSString *_threadLocalKeyIsRunningTransaction;
    NSOperationQueue *_updateOperationQueue;
}


@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDOntologyShardDownloader *downloader; // ivar: _downloader
@property (readonly, nonatomic) HDOntologyFeatureCoordinator *featureCoordinator; // ivar: _featureCoordinator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDOntologyShardImporter *importer; // ivar: _importer
@property (readonly, nonatomic) HDOntologyManifestUpdater *manifestUpdater; // ivar: _manifestUpdater
@property (readonly, nonatomic) HDPrimaryProfile *profile;
@property (readonly, nonatomic) HDOntologyShardPruner *pruner; // ivar: _pruner
@property (readonly, nonatomic) HDOntologyShardRegistry *shardRegistry; // ivar: _shardRegistry
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_willTriggerGatedActivity; // ivar: _unitTesting_willTriggerGatedActivity


-(BOOL)performOntologyTransactionForWrite:(BOOL)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 transactionHandler:(id)arg3 ;
-(BOOL)updateOntologyWithShardIdentifier:(id)arg0 schemaType:(id)arg1 schemaVersion:(int)arg2 localShardURL:(id)arg3 shardVersion:(NSInteger)arg4 error:(*id)arg5 ;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(id)ontologyServerURL;
-(void)URLSession:(id)arg0 taskIsWaitingForConnectivity:(id)arg1 ;
-(void)dealloc;
-(void)downloadRequiredShardsWithCompletion:(id)arg0 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)setOntologyServerURL:(id)arg0 ;
-(void)triggerGatedUpdateWithMaximumDelay:(CGFloat)arg0 completion:(id)arg1 ;
-(void)updateOntologyWithReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)updateShardRegistryWithCompletion:(id)arg0 ;


@end


#endif