// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XBAPPLICATIONCONTROLLER_H
#define XBAPPLICATIONCONTROLLER_H

@class FBSDisplayConfiguration;
@protocol XBApplicationLaunchRequestProviding, XBApplicationProviding;

#import <Foundation/Foundation.h>

#import "XBCacheDeleteRequestHandler.h"

@interface XBApplicationController : NSObject {
    NSInteger _statusBarOrientation;
    FBSDisplayConfiguration *_mainDisplayConfiguration;
    id<XBApplicationLaunchRequestProviding> *_launchRequestProvider;
    XBCacheDeleteRequestHandler *_snapshotCacheDeleteRequestHandler;
}


@property (readonly, nonatomic) NSObject<XBApplicationProviding> *applicationProvider; // ivar: _applicationProvider


-(id)_launchRequestsForApplication:(id)arg0 withCompatibilityInfo:(id)arg1 ;
-(id)findRecentlyUsedOfApplications:(id)arg0 ;
-(id)initWithMainDisplayConfiguration:(id)arg0 applicationProvider:(id)arg1 launchRequestProvider:(id)arg2 ;
// -(void)_captureOrUpdateLaunchImagesForApplications:(id)arg0 firstImageIsReady:(id)arg1 completionWithCaptureInfo:(unk)arg2  ;
// -(void)_captureOrUpdateLaunchImagesForApplications:(id)arg0 firstImageIsReady:(id)arg1 createCaptureInfo:(unk)arg2 completionWithCaptureInfo:(BOOL)arg3  ;
-(void)_configureCacheDelete;
-(void)_deleteLegacyCachesSnapshotPathsIfNeeded;
-(void)_migrateDataIfNeeded;
-(void)_removeAllGeneratedLaunchImagesAndSnapshots;
-(void)_removeLaunchImagesMatchingPredicate:(id)arg0 forApplications:(id)arg1 forgettingApps:(BOOL)arg2 ;
-(void)_updateStatusBarOrientation;
// -(void)captureOrUpdateLaunchImagesForApplications:(id)arg0 firstImageIsReady:(id)arg1 completion:(unk)arg2  ;
-(void)dealloc;
-(void)performPostMigrationLaunchImageGeneration;
-(void)removeCachedLaunchImagesForApplications:(id)arg0 forgettingApps:(BOOL)arg1 ;


@end


#endif