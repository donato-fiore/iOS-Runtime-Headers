// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOLIBRARYBUNDLECONTROLLER_H
#define PLPHOTOLIBRARYBUNDLECONTROLLER_H

@class NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>

#import "PLSQLStatementFileRecorder.h"
#import "PLBackgroundJobService.h"
#import "PLCacheDeleteRegistration.h"

@interface PLPhotoLibraryBundleController : NSObject {
    NSInteger _bundleType;
    Class _libraryServicesDelegateClass;
    PLSQLStatementFileRecorder *_statementRecorder;
    os_unfair_lock_s _bundlesByPathLock;
    NSMutableDictionary *_bundlesByPath;
    os_unfair_lock_s _bundleCreationPauseLock;
    NSDate *_bundleCreationPausedUntilDate;
}


@property (retain) PLBackgroundJobService *backgroundJobService; // ivar: _backgroundJobService
@property (retain) PLCacheDeleteRegistration *cacheDeleteRegistration; // ivar: _cacheDeleteRegistration


+(id)_realPathForLibraryURL:(id)arg0 ;
+(id)sharedAssetsdClientForPhotoLibraryURL:(id)arg0 ;
+(id)sharedBundleController;
+(void)resetSharedBundleController;
-(BOOL)bindAssetsdService:(id)arg0 toBundle:(id)arg1 error:(*id)arg2 ;
-(id)_lookupOrCreateBundleForLibraryURL:(id)arg0 replaceExisting:(BOOL)arg1 ;
-(id)bundleForLibraryURL:(id)arg0 ;
-(id)init;
-(id)initWithBundleType:(NSInteger)arg0 libraryServicesManagerDelegateClass:(Class)arg1 ;
-(id)libraryBundlePaths;
-(id)libraryBundles;
-(id)libraryServicesStatusDescription;
-(id)lookupOrCreateBundleForLibraryURL:(id)arg0 ;
-(id)newPhotoLibraryBundleWithLibraryURL:(id)arg0 ;
-(id)openBundleAtLibraryURL:(id)arg0 ;
-(id)replaceBundleForRebuildAtLibraryURL:(id)arg0 ;
-(void)_unregisterBundle:(id)arg0 pauseUntilDate:(id)arg1 ;
-(void)handleUnknownMergeEvent;
-(void)shutdownAllBundlesWithReason:(id)arg0 ;
-(void)shutdownBundle:(id)arg0 reason:(id)arg1 ;


@end


#endif