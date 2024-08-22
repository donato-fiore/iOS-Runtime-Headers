// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCONSTRAINTSDIRECTOR_H
#define PLCONSTRAINTSDIRECTOR_H

@class PFCameraViewfinderSessionWatcher, NSURL, NSString;
@protocol PLForegroundMonitorDelegate, PFCameraViewfinderSessionWatcherDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PLForegroundMonitor.h"
#import "PLPhotoAnalysisServiceClient.h"

@interface PLConstraintsDirector : NSObject <PLForegroundMonitorDelegate, PFCameraViewfinderSessionWatcherDelegate>

 {
    BOOL _didTransitionToOpportunisticDisallowed;
    BOOL _photosAppInForeground;
    BOOL _cameraAppInForeground;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_bonusTimer;
    PLForegroundMonitor *_foregroundMonitor;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    PLPhotoAnalysisServiceClient *_photoAnalysisServiceClient;
    NSInteger _faceQuickClassificationRequestID;
    NSURL *_photoLibraryURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_photoanalysisdIsRunning;
+(BOOL)constraintsAllowSchedulingUserInitiatedAnalysisForAssets;
-(BOOL)shouldScheduleUserInitiatedAnalysisForAssets;
-(id)initWithPhotoAnalysisClient:(id)arg0 photoLibraryURL:(id)arg1 ;
-(void)_disableAutoFGAndUserFGConstraints;
-(void)_requestMediaAnalysisQuickFaceProcessing;
-(void)cameraWatcherDidChangeState:(id)arg0 ;
-(void)foregroundMonitor:(id)arg0 changedStateToForeground:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
-(void)informCameraAppCameraViewControllerVisibilityChanged:(BOOL)arg0 ;
-(void)informCameraAppForegroundState:(BOOL)arg0 ;


@end


#endif