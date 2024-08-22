// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCOPERATION_H
#define HDCLOUDSYNCOPERATION_H

@class NSString, NSUUID, NSProgress;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>

#import "HDCloudSyncCloudState.h"
#import "HDCloudSyncOperationConfiguration.h"
#import "HDProfile.h"

@interface HDCloudSyncOperation : NSObject <NSProgressReporting>

 {
    os_unfair_lock_s _lock;
    id *_onSuccess;
    id *_onError;
    CGFloat _startTime;
    CGFloat _endTime;
    NSString *_loggingPrefix;
}


@property (retain) HDCloudSyncCloudState *cloudState; // ivar: _cloudState
@property (readonly, nonatomic) HDCloudSyncOperationConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy) id *onError;
@property (copy) id *onSuccess;
@property (readonly, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)shouldFailOnXPCActivityDeferral;
+(BOOL)shouldLogAtOperationEnd;
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
+(id)finishedOperationTags;
+(id)operationTagDependencies;
+(id)unitTest_operationHandler:(SEL)arg0 ;
+(void)unitTest_clearAllOperationHandlers;
+(void)unitTest_setOperationHandler:(id)arg0 ;
-(BOOL)finishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(id)analyticsDictionary;
-(id)asPipelineStage;
-(id)init;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithPreceedingOperation:(id)arg0 transitionHandler:(id)arg1 ;
-(id)operationIgnoringErrors;
-(id)operationWithRunCondition:(id)arg0 ;
-(void)chainFromOperation:(id)arg0 transitionHandler:(id)arg1 ;
-(void)delegateToOperation:(id)arg0 ;
-(void)main;
-(void)skip;
-(void)start;
-(void)updateCompletedProgressCount:(NSInteger)arg0 ;


@end


#endif