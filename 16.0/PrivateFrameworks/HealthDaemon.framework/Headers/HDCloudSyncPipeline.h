// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCPIPELINE_H
#define HDCLOUDSYNCPIPELINE_H

@class NSMutableArray, NSString, HDAssertion, NSUUID, CKOperationGroup, NSProgress;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDCloudSyncCloudState.h"
#import "HDPowerAssertion.h"
#import "HDCloudSyncContext.h"
#import "HDCloudSyncOperationConfiguration.h"
#import "HDCloudSyncRepository.h"

@interface HDCloudSyncPipeline : NSObject {
    NSMutableArray *_stages;
    NSString *_shortPipelineIdentifier;
    BOOL _cancelRequested;
    NSObject<OS_dispatch_source> *_cloudKitOperationDelayTimer;
    id *_delayTimerCompletionBlock;
    HDCloudSyncCloudState *_cloudState;
    NSInteger _pipelineResult;
    NSString *_analyticsCloudKitIdentifier;
    HDPowerAssertion *_powerAssertion;
    HDAssertion *_inProgressDownloadDirAssertion;
}


@property (readonly, nonatomic) HDAssertion *accessibilityAssertion; // ivar: _accessibilityAssertion
@property (readonly, copy, nonatomic) HDCloudSyncContext *context; // ivar: _context
@property (nonatomic) BOOL continueWhenSyncDisabled; // ivar: _continueWhenSyncDisabled
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL ignoreCloudKitOperationDelay; // ivar: _ignoreCloudKitOperationDelay
@property (readonly, nonatomic) HDCloudSyncOperationConfiguration *operationConfiguration; // ivar: _operationConfiguration
@property (retain, nonatomic) CKOperationGroup *operationGroup; // ivar: _operationGroup
@property (copy, nonatomic) id *pipelineCompletionHandler; // ivar: _pipelineCompletionHandler
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) HDCloudSyncRepository *repository; // ivar: _repository
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(id)operationGroupForContext:(id)arg0 syncCircleIdentifier:(id)arg1 assetDownloadStagingManager:(id)arg2 ;
-(id)analyticsDictionary;
-(id)beginWithCompletion:(id)arg0 ;
-(id)beginWithTaskTree:(id)arg0 ;
-(id)description;
-(id)initForContext:(id)arg0 repository:(id)arg1 accessibilityAssertion:(id)arg2 queue:(id)arg3 ;
-(void)addStage:(id)arg0 ;
-(void)cancel;
-(void)dealloc;


@end


#endif