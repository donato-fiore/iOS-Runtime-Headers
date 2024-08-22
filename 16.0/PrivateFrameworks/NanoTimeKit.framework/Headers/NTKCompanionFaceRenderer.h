// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPANIONFACERENDERER_H
#define NTKCOMPANIONFACERENDERER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKFaceSnapshottingWindow.h"
#import "NTKFace.h"

@interface NTKCompanionFaceRenderer : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NTKFaceSnapshottingWindow *_window;
}


@property (retain, nonatomic) NTKFace *currentFace; // ivar: _currentFace
@property (copy, nonatomic) id *faceBatchCompletionHandler; // ivar: _faceBatchCompletionHandler
@property (retain, nonatomic) NSMutableArray *pendingTaskList; // ivar: _pendingTaskList
@property (nonatomic, getter=isQueueActive) BOOL queueActive; // ivar: _queueActive


+(id)_snapshotNameForFace:(id)arg0 detailMode:(NSInteger)arg1 ;
+(id)_storagePath;
+(id)snapshotPathForFace:(id)arg0 detailMode:(NSInteger)arg1 ;
-(id)init;
-(void)_notifyFinishedFaceBatchIfNeeded;
-(void)_startNextWorkItem;
-(void)requestSnapshotOfFace:(id)arg0 completion:(id)arg1 ;


@end


#endif