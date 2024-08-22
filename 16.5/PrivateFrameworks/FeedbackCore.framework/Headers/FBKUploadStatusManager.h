// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKUPLOADSTATUSMANAGER_H
#define FBKUPLOADSTATUSMANAGER_H

@class NSString, DEDController, NSMutableDictionary, NSMutableSet;
@protocol DEDUploadStatusDelegate;

#import <Foundation/Foundation.h>

#import "FBKData.h"
#import "FBKDeviceManager.h"

@interface FBKUploadStatusManager : NSObject <DEDUploadStatusDelegate>



@property (weak) FBKData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (retain) DEDController *ded; // ivar: _ded
@property (readonly, copy) NSString *description;
@property (retain) FBKDeviceManager *deviceManager; // ivar: _deviceManager
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldLogProgress; // ivar: _shouldLogProgress
@property (retain) NSMutableDictionary *submissionTimers; // ivar: _submissionTimers
@property (readonly) Class superclass;
@property (retain) NSMutableSet *trackedTasks; // ivar: _trackedTasks


-(BOOL)isTrackingTask:(id)arg0 ;
-(BOOL)shouldGiveUpOnUploadWithPromises:(id)arg0 ;
-(BOOL)shouldGiveUpOnUploadWithPromises:(id)arg0 stalenessDate:(id)arg1 ;
-(id)configureSubmissionTimerForTask:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)initWithData:(id)arg0 ded:(id)arg1 deviceManager:(id)arg2 ;
-(id)workingFilePromisesFromSet:(id)arg0 stalenessDate:(id)arg1 ;
-(void)deleteAndNotifyUploadTaskWithTask:(id)arg0 ;
-(void)didFailToConnectToSessionsOnTask:(id)arg0 ;
-(void)didFailToGetUploadUpdatesForUploadTask:(id)arg0 ;
-(void)didFailToGetUploadUpdatesForUploadTask:(id)arg0 shouldTryServerUpdates:(BOOL)arg1 ;
-(void)didGetSessionStateUpdate:(id)arg0 uploadTask:(id)arg1 newState:(NSInteger)arg2 sessionInfo:(id)arg3 ;
-(void)didLogOutWithCompletion:(id)arg0 ;
-(void)fallbackToServerSideUploadUpdatesForTask:(id)arg0 ;
-(void)fallbackToServerSideUploadUpdatesForTask:(id)arg0 attempts:(NSUInteger)arg1 ;
-(void)getAllBugSessionsForTask:(id)arg0 completion:(id)arg1 ;
-(void)pollDEDForSessionsStateOnActiveSession:(id)arg0 uploadTask:(id)arg1 isCurrentDeviceSession:(BOOL)arg2 ;
-(void)pollDEDForSessionsStateOnActiveSession:(id)arg0 uploadTask:(id)arg1 isCurrentDeviceSession:(BOOL)arg2 totalQueryCount:(NSUInteger)arg3 lastState:(NSInteger)arg4 lastInfo:(id)arg5 ;
-(void)pollDEDForSessionsStateOnTask:(id)arg0 sessions:(id)arg1 ;
-(void)reloadFilerFormForFinishedTask:(id)arg0 ;
-(void)stopTrackingAllTasks;
-(void)stopTrackingTaskIfDeleted:(id)arg0 ;
-(void)stopTrackingUploadTask:(id)arg0 ;
-(void)timer:(id)arg0 didTimeoutForTask:(id)arg1 ;
-(void)trackUploadIfNeeded:(id)arg0 ;
-(void)trackUploadTask:(id)arg0 ;
-(void)trackUploadTask:(id)arg0 attempt:(NSInteger)arg1 ;
-(void)updateUploadTask:(id)arg0 withUploadProgress:(NSUInteger)arg1 uploadSize:(NSUInteger)arg2 onBugSession:(id)arg3 state:(NSInteger)arg4 ;
-(void)uploadProgress:(NSUInteger)arg0 total:(NSInteger)arg1 session:(id)arg2 ;
-(void)waitOnUpdatesForTask:(id)arg0 withSessions:(id)arg1 ;


@end


#endif