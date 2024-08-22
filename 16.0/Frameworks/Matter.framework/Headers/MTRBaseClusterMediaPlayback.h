// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBASECLUSTERMEDIAPLAYBACK_H
#define MTRBASECLUSTERMEDIAPLAYBACK_H



#import "MTRCluster.h"

@interface MTRBaseClusterMediaPlayback : MTRCluster

@property (readonly) *void cppCluster; // ivar: _cppCluster


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeCurrentStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDurationWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePlaybackSpeedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSampledPositionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSeekRangeEndWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSeekRangeStartWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeStartTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)fastForwardWithCompletionHandler:(id)arg0 ;
-(void)fastForwardWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)nextWithCompletionHandler:(id)arg0 ;
-(void)nextWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)pauseWithCompletionHandler:(id)arg0 ;
-(void)pauseWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)playWithCompletionHandler:(id)arg0 ;
-(void)playWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)previousWithCompletionHandler:(id)arg0 ;
-(void)previousWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeCurrentStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDurationWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributePlaybackSpeedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSampledPositionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSeekRangeEndWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSeekRangeStartWithCompletionHandler:(id)arg0 ;
-(void)readAttributeStartTimeWithCompletionHandler:(id)arg0 ;
-(void)rewindWithCompletionHandler:(id)arg0 ;
-(void)rewindWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)seekWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)skipBackwardWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)skipForwardWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)startOverWithCompletionHandler:(id)arg0 ;
-(void)startOverWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopPlaybackWithCompletionHandler:(id)arg0 ;
-(void)stopPlaybackWithParams:(id)arg0 completionHandler:(id)arg1 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeCurrentStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDurationWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePlaybackSpeedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSampledPositionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSeekRangeEndWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSeekRangeStartWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeStartTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;


@end


#endif