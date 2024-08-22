// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETWRITERWRITINGHELPER_H
#define AVASSETWRITERWRITINGHELPER_H

@class NSString;
@protocol AVAssetWriterFigAssetWriterNotificationHandlerDelegate, OS_dispatch_queue;


#import "AVAssetWriterHelper.h"
#import "AVAssetWriterFigAssetWriterNotificationHandler.h"

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate>

 {
    *OpaqueFigAssetWriter _figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    BOOL _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    *void _figAssetWriterCallbackContextToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 ;
+(id)finishWritingDelegateOperationWithAssetWriter:(id)arg0 andFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 andDelegate:(id)arg2 ;
+(id)prepareInputsOperationsWithInputs:(id)arg0 ;
-(BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:(id)arg0 preferredOutputSegmentInterval:(struct ? )arg1 returningDebugDescription:(*id)arg2 ;
-(BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(*id)arg0 ;
-(NSInteger)status;
-(id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg0 ;
-(id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg0 ;
-(id)figTrackReferences;
-(id)initWithConfigurationState:(id)arg0 assetWriter:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg0 assetWriter:(id)arg1 error:(*id)arg2 ;
-(struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
-(void)cancelWriting;
-(void)dealloc;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)endSessionAtSourceTime:(struct ? )arg0 ;
-(void)finishWriting;
-(void)finishWritingWithCompletionHandler:(id)arg0 ;
-(void)flush;
-(void)flushSegment;
-(void)startSessionAtSourceTime:(struct ? )arg0 ;
-(void)transitionToFailedStatusWithError:(id)arg0 ;


@end


#endif