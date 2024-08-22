// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLSYNCSTEP_H
#define CPLSYNCSTEP_H

@class NSString, NSError;
@protocol CPLEngineSyncTaskDelegate;

#import <Foundation/Foundation.h>

#import "CPLEngineLibrary.h"
#import "CPLEngineStore.h"
#import "CPLEngineSyncManager.h"
#import "CPLSyncSession.h"

@interface CPLSyncStep : NSObject <CPLEngineSyncTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionForTasks;
@property (readonly, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly, nonatomic) CPLEngineStore *engineStore;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPLEngineSyncManager *syncManager; // ivar: _syncManager
@property (readonly, nonatomic) CPLSyncSession *syncSession; // ivar: _syncSession


-(BOOL)didFinishTask:(id)arg0 withError:(id)arg1 shouldStop:(*BOOL)arg2 ;
-(BOOL)launchNecessaryTasks;
-(BOOL)prepareAndLaunchSyncTask:(*id)arg0 ;
-(float)progressForTask:(id)arg0 progress:(float)arg1 ;
-(id)initWithSyncManager:(id)arg0 syncSession:(id)arg1 ;
-(void)cancelAllTasks:(BOOL)arg0 ;
-(void)moveTasksToBackground;
-(void)setErrorForSyncSession:(id)arg0 ;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)task:(id)arg0 didProgress:(float)arg1 userInfo:(id)arg2 ;


@end


#endif