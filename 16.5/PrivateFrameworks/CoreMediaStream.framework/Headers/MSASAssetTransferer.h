// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSASASSETTRANSFERER_H
#define MSASASSETTRANSFERER_H

@class NSString;
@protocol MMCSEngineDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSBackoffManager.h"
#import "MSAlbumSharingDaemon.h"
#import "MMCSEngine.h"
#import "MSASPersonModel.h"

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate>



@property (weak, nonatomic) MSBackoffManager *backoffManager; // ivar: _backoffManager
@property (weak, nonatomic) MSAlbumSharingDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MMCSEngine *engine; // ivar: _engine
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (copy, nonatomic) NSString *focusAlbumGUID; // ivar: _focusAlbumGUID
@property (copy, nonatomic) NSString *focusAssetCollectionGUID; // ivar: _focusAssetCollectionGUID
@property (nonatomic) BOOL hasShutDown; // ivar: _hasShutDown
@property (readonly) NSUInteger hash;
@property (nonatomic) int maxBatchCount; // ivar: _maxBatchCount
@property (nonatomic) CGFloat maxMMCSTokenValidityTimeInterval; // ivar: _maxMMCSTokenValidityTimeInterval
@property (nonatomic) int maxRetryCount; // ivar: _maxRetryCount
@property (weak, nonatomic) MSASPersonModel *model; // ivar: _model
@property (copy, nonatomic) NSString *personID; // ivar: _personID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)MMCSEngine:(id)arg0 shouldLogAtLogLevel:(int)arg1 ;
-(id)_MMCSTokenTooOldError;
-(id)_canceledError;
-(id)_missingMMCSTokenError;
-(id)_missingURLError;
-(id)_pathForPersonID:(id)arg0 ;
-(id)initWithPersonID:(id)arg0 ;
-(id)initWithPersonID:(id)arg0 eventQueue:(id)arg1 ;
-(void)MMCSEngine:(id)arg0 didCreateRequestorContext:(id)arg1 forAssets:(id)arg2 ;
-(void)MMCSEngine:(id)arg0 didFinishGettingAsset:(id)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)MMCSEngine:(id)arg0 didFinishPuttingAsset:(id)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)MMCSEngine:(id)arg0 didMakeGetProgress:(float)arg1 state:(int)arg2 onAsset:(id)arg3 ;
-(void)MMCSEngine:(id)arg0 didMakePutProgress:(float)arg1 state:(int)arg2 onAsset:(id)arg3 ;
-(void)MMCSEngine:(id)arg0 logMessage:(id)arg1 logLevel:(int)arg2 ;
-(void)MMCSEngine:(id)arg0 logPerformanceMetrics:(id)arg1 ;
-(void)_rereadPerformanceLoggingSetting;
-(void)_sendDidIdleNotification;
-(void)cancelCompletionBlock:(id)arg0 ;
-(void)didFinishGettingAllAssets;
-(void)didFinishPuttingAllAssets;
-(void)retryOutstandingActivities;
-(void)shutDownCompletionBlock:(id)arg0 ;
-(void)stopCompletionBlock:(id)arg0 ;
-(void)workQueueShutDownCompletionBlock:(id)arg0 ;


@end


#endif