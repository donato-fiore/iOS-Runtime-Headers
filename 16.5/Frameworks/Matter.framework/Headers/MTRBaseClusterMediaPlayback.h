// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASECLUSTERMEDIAPLAYBACK_H
#define MTRBASECLUSTERMEDIAPLAYBACK_H



#import "MTRCluster.h"
#import "MTRBaseDevice.h"

@interface MTRBaseClusterMediaPlayback : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeCurrentStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeCurrentStateWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeDurationWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDurationWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePlaybackSpeedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePlaybackSpeedWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeSampledPositionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSampledPositionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeSeekRangeEndWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSeekRangeEndWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeSeekRangeStartWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSeekRangeStartWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeStartTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeStartTimeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(void)fastForwardWithCompletion:(id)arg0 ;
-(void)fastForwardWithCompletionHandler:(id)arg0 ;
-(void)fastForwardWithParams:(id)arg0 completion:(id)arg1 ;
-(void)fastForwardWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)nextWithCompletion:(id)arg0 ;
-(void)nextWithCompletionHandler:(id)arg0 ;
-(void)nextWithParams:(id)arg0 completion:(id)arg1 ;
-(void)nextWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)pauseWithCompletion:(id)arg0 ;
-(void)pauseWithCompletionHandler:(id)arg0 ;
-(void)pauseWithParams:(id)arg0 completion:(id)arg1 ;
-(void)pauseWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)playWithCompletion:(id)arg0 ;
-(void)playWithCompletionHandler:(id)arg0 ;
-(void)playWithParams:(id)arg0 completion:(id)arg1 ;
-(void)playWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)previousWithCompletion:(id)arg0 ;
-(void)previousWithCompletionHandler:(id)arg0 ;
-(void)previousWithParams:(id)arg0 completion:(id)arg1 ;
-(void)previousWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAcceptedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletion:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletion:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeCurrentStateWithCompletion:(id)arg0 ;
-(void)readAttributeCurrentStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDurationWithCompletion:(id)arg0 ;
-(void)readAttributeDurationWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletion:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributePlaybackSpeedWithCompletion:(id)arg0 ;
-(void)readAttributePlaybackSpeedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSampledPositionWithCompletion:(id)arg0 ;
-(void)readAttributeSampledPositionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSeekRangeEndWithCompletion:(id)arg0 ;
-(void)readAttributeSeekRangeEndWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSeekRangeStartWithCompletion:(id)arg0 ;
-(void)readAttributeSeekRangeStartWithCompletionHandler:(id)arg0 ;
-(void)readAttributeStartTimeWithCompletion:(id)arg0 ;
-(void)readAttributeStartTimeWithCompletionHandler:(id)arg0 ;
-(void)rewindWithCompletion:(id)arg0 ;
-(void)rewindWithCompletionHandler:(id)arg0 ;
-(void)rewindWithParams:(id)arg0 completion:(id)arg1 ;
-(void)rewindWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)seekWithParams:(id)arg0 completion:(id)arg1 ;
-(void)seekWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)skipBackwardWithParams:(id)arg0 completion:(id)arg1 ;
-(void)skipBackwardWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)skipForwardWithParams:(id)arg0 completion:(id)arg1 ;
-(void)skipForwardWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)startOverWithCompletion:(id)arg0 ;
-(void)startOverWithCompletionHandler:(id)arg0 ;
-(void)startOverWithParams:(id)arg0 completion:(id)arg1 ;
-(void)startOverWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopPlaybackWithCompletionHandler:(id)arg0 ;
-(void)stopPlaybackWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithCompletion:(id)arg0 ;
-(void)stopWithParams:(id)arg0 completion:(id)arg1 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAcceptedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeCurrentStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeCurrentStateWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeDurationWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDurationWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePlaybackSpeedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePlaybackSpeedWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeSampledPositionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSampledPositionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeSeekRangeEndWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSeekRangeEndWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeSeekRangeStartWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSeekRangeStartWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeStartTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeStartTimeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;


@end


#endif